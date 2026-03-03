`include "config.svh"

module icacheController #(
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter CACHE_SIZE = `ICACHE_SIZE,
    parameter NUM_WAYS   = `ICACHE_WAYS,
    parameter BLOCK_SIZE = `ICACHE_BLOCK_SIZE   // in bytes, e.g. 16
)(
    input  logic                   clk, rst,
    input  logic [ADDR_WIDTH-1:0]  cpu_addr,
    input  logic                   cpu_read,
    output logic [DATA_WIDTH-1:0]  cpu_rdata,
    output logic                   cpu_ready,
    output logic [ADDR_WIDTH-1:0]  mem_addr,
    output logic                   mem_read,
    input  logic [DATA_WIDTH-1:0]  mem_rdata,
    input  logic                   mem_ready
);

    // =========================================================================
    // Address Breakdown
    // =========================================================================
    localparam BYTES_PER_WORD  = DATA_WIDTH / 8;
    localparam WORDS_PER_BLOCK = BLOCK_SIZE / BYTES_PER_WORD;     // e.g. 4
    localparam OFFSET_BITS     = $clog2(WORDS_PER_BLOCK);         // e.g. 2
    localparam NUM_SETS        = CACHE_SIZE / (NUM_WAYS * BLOCK_SIZE); // e.g. 8
    localparam SET_BITS        = $clog2(NUM_SETS);                 // e.g. 3
    localparam TAG_BITS        = ADDR_WIDTH - SET_BITS - OFFSET_BITS - 2;
    localparam WAY_BITS        = $clog2(NUM_WAYS);
    localparam LAST_WORD = OFFSET_BITS'(WORDS_PER_BLOCK - 1);

    // Address field slices:
    // [1:0]                                      -> byte offset (ignored)
    // [OFFSET_BITS+1 : 2]                        -> word offset within block
    // [SET_BITS+OFFSET_BITS+1 : OFFSET_BITS+2]   -> set index
    // [ADDR_WIDTH-1 : SET_BITS+OFFSET_BITS+2]    -> tag

    // =========================================================================
    // Storage Arrays  (way x set x word)
    // =========================================================================
    logic [DATA_WIDTH-1:0] data_array [0:NUM_WAYS-1][0:NUM_SETS-1][0:WORDS_PER_BLOCK-1];
    logic [TAG_BITS-1:0]   tag_array  [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic                  valid      [0:NUM_WAYS-1][0:NUM_SETS-1];
logic [WAY_BITS-1:0] lru_access_way;
    initial begin
        for (int w = 0; w < NUM_WAYS; w++)
            for (int s = 0; s < NUM_SETS; s++)
                valid[w][s] = 1'b0;
    end

    // =========================================================================
    // Latched address / fill registers
    // =========================================================================
    logic [ADDR_WIDTH-1:0]      addr_reg;
    logic [TAG_BITS-1:0]        fill_tag;
    logic [SET_BITS-1:0]        fill_set;
    logic [OFFSET_BITS-1:0]     fill_offset;   // which word the CPU actually wants
    logic [WAY_BITS-1:0]        active_way;

    // Fill word counter
    logic [OFFSET_BITS-1:0]     fill_word;

    // =========================================================================
    // FSM
    // =========================================================================
    typedef enum logic [1:0] {
        COMPARE,
        MISS_WAIT,
        FILL_DONE
    } state_t;
    state_t state;

    // =========================================================================
    // Address steering
    // =========================================================================
    logic [ADDR_WIDTH-1:0] addr_active;
    assign addr_active = (state == COMPARE) ? cpu_addr : addr_reg;

    logic [TAG_BITS-1:0]    current_tag;
    logic [SET_BITS-1:0]    current_set;
    logic [OFFSET_BITS-1:0] current_offset;

    assign current_tag    = addr_active[ADDR_WIDTH-1 : SET_BITS+OFFSET_BITS+2];
    assign current_set    = addr_active[SET_BITS+OFFSET_BITS+1 : OFFSET_BITS+2];
    assign current_offset = addr_active[OFFSET_BITS+1 : 2];

    // =========================================================================
    // Hit Detection
    // =========================================================================
    logic [NUM_WAYS-1:0] way_hit;
    logic                cacheHit;
    logic [WAY_BITS-1:0] hit_way_index;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++) begin : hit_detect
            assign way_hit[i] = valid[i][current_set] &&
                                (tag_array[i][current_set] == current_tag);
        end
    endgenerate

    assign cacheHit = |way_hit;

    always_comb begin
        hit_way_index = '0;
        for (int i = 0; i < NUM_WAYS; i++)
            if (way_hit[i]) hit_way_index = WAY_BITS'(i);
    end

    // =========================================================================
    // LRU
    // =========================================================================
    logic [NUM_WAYS-1:0] valid_vec;
    logic [WAY_BITS-1:0] victim_way;
    logic                lru_update;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++)
            assign valid_vec[i] = valid[i][current_set];
    endgenerate
assign lru_access_way = (state == FILL_DONE) ? active_way : hit_way_index;
    TPLRU #(.NUM_WAYS(NUM_WAYS), .NUM_SETS(NUM_SETS)) lru (
        .clk        (clk),
        .rst        (rst),
        .set_idx    (current_set),
        .access_way (lru_access_way),
        .update     (lru_update),
        .valid_ways (valid_vec),
        .victim_way (victim_way)
    );

    // =========================================================================
    // Combinational outputs
    // =========================================================================
    always_comb begin
        cpu_ready  = 1'b0;
        cpu_rdata  = 32'h0;
        mem_read   = 1'b0;
        mem_addr   = {addr_active[ADDR_WIDTH-1:2], 2'b00};
        lru_update = 1'b0;

        case (state)
            COMPARE: begin
                if (cpu_read && cacheHit) begin
                    cpu_ready  = 1'b1;
                    cpu_rdata  = data_array[hit_way_index][current_set][current_offset];
                    lru_update = 1'b1;
                end
            end

            MISS_WAIT: begin
                mem_read = 1'b1;
                mem_addr = {fill_tag, fill_set, fill_word, 2'b00};
            end

            FILL_DONE: begin
                cpu_ready  = 1'b1;
                cpu_rdata  = data_array[active_way][fill_set][fill_offset];
                lru_update = 1'b1;
            end

            default: ;
        endcase
    end

    // =========================================================================
    // Sequential Logic
    // =========================================================================

    // FSM + latch registers
    always_ff @(posedge clk) begin
        if (rst) begin
            state       <= COMPARE;
            addr_reg    <= '0;
            active_way  <= '0;
            fill_tag    <= '0;
            fill_set    <= '0;
            fill_offset <= '0;
        end else begin
            case (state)
                COMPARE: begin
                    if (cpu_read && !cacheHit) begin
                        addr_reg    <= cpu_addr;
                        active_way  <= victim_way;
                        fill_tag    <= current_tag;
                        fill_set    <= current_set;
                        fill_offset <= current_offset;   // save which word CPU wants
                        state       <= MISS_WAIT;
                    end
                end

                MISS_WAIT: begin
                    if (mem_ready && fill_word == LAST_WORD)
                        state <= FILL_DONE;
                end

                FILL_DONE: begin
                    state <= COMPARE;
                end

                default: state <= COMPARE;
            endcase
        end
    end

    // Fill word counter
    always_ff @(posedge clk) begin
        if (rst)
            fill_word <= '0;
        else if (state == COMPARE && cpu_read && !cacheHit)
            fill_word <= '0;                                        // reset on miss
        else if (state == MISS_WAIT && mem_ready)
            fill_word <= fill_word + 1'b1;                          // advance per ack
    end

    // Cache array writes
    always_ff @(posedge clk) begin
        if (state == MISS_WAIT && mem_ready) begin
            data_array[active_way][fill_set][fill_word] <= mem_rdata;
            // Set tag/valid on last word
            if (fill_word == LAST_WORD) begin
                tag_array[active_way][fill_set] <= fill_tag;
                valid[active_way][fill_set]     <= 1'b1;
            end
        end
    end

`ifdef DEBUG_CACHE
    always @(posedge clk) begin
        if (!rst) begin
            if (state == COMPARE && cpu_read && cacheHit)
                $display("T=%0t [ICACHE] HIT  set=%0d way=%0d offset=%0d addr=%08h",
                         $time, current_set, hit_way_index, current_offset, cpu_addr);
            if (state == COMPARE && cpu_read && !cacheHit)
                $display("T=%0t [ICACHE] MISS set=%0d tag=%0h addr=%08h",
                         $time, current_set, current_tag, cpu_addr);
            if (state == MISS_WAIT && mem_ready)
                $display("T=%0t [ICACHE] FILL set=%0d way=%0d word=%0d data=%08h",
                         $time, fill_set, active_way, fill_word, mem_rdata);
        end
    end
`endif

endmodule