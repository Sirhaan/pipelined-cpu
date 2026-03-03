`include "config.svh"

module dcacheController #(
    parameter ADDR_WIDTH  = `ADDR_WIDTH,
    parameter DATA_WIDTH  = `DATA_WIDTH,
    parameter CACHE_SIZE  = `DCACHE_SIZE,
    parameter NUM_WAYS    = `DCACHE_WAYS,
    parameter BLOCK_SIZE  = `DCACHE_BLOCK_SIZE   // in bytes, e.g. 16
)(
    input  logic                   clk, rst,
    input  logic [ADDR_WIDTH-1:0]  cpu_addr,
    input  logic [DATA_WIDTH-1:0]  cpu_wdata,
    input  logic                   cpu_read, cpu_write,
    output logic [DATA_WIDTH-1:0]  cpu_rdata,
    output logic                   cpu_ready,
    output logic [ADDR_WIDTH-1:0]  mem_addr,
    output logic [DATA_WIDTH-1:0]  mem_wdata,
    output logic                   mem_read, mem_write,
    input  logic [DATA_WIDTH-1:0]  mem_rdata,
    input  logic                   mem_ready
);

    // =========================================================================
    // Address Breakdown
    // =========================================================================
    localparam BYTES_PER_WORD   = DATA_WIDTH / 8;                          // 4
    localparam WORDS_PER_BLOCK  = BLOCK_SIZE / BYTES_PER_WORD;             // e.g. 4
    localparam OFFSET_BITS      = $clog2(WORDS_PER_BLOCK);                 // e.g. 2
    localparam NUM_SETS         = CACHE_SIZE / (NUM_WAYS * BLOCK_SIZE);    // e.g. 8
    localparam SET_BITS         = $clog2(NUM_SETS);                        // e.g. 3
    localparam TAG_BITS         = ADDR_WIDTH - SET_BITS - OFFSET_BITS - 2;
    localparam WAY_BITS         = $clog2(NUM_WAYS);
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
    logic                  dirtyBits  [0:NUM_WAYS-1][0:NUM_SETS-1];

    // =========================================================================
    // Latched Address / Operation Registers
    // =========================================================================
    logic [ADDR_WIDTH-1:0]      addr_reg;
    logic [DATA_WIDTH-1:0]      wdata_reg;
    logic                       is_read_op, is_write_op;
    logic [TAG_BITS-1:0]        fill_tag;
    logic [SET_BITS-1:0]        fill_set;
    logic [OFFSET_BITS-1:0]     fill_offset;   // word offset of the CPU request
    logic [WAY_BITS-1:0]        active_way;

    // Fill word counter - walks 0..WORDS_PER_BLOCK-1 during ALLOCATE/EVICT
    logic [OFFSET_BITS-1:0]     fill_word;

    // =========================================================================
    // FSM
    // =========================================================================
    typedef enum logic [2:0] {
        IDLE, COMPARE, EVICT, ALLOCATE, FILL_DONE
    } state_t;
    state_t state, next_state;

    // =========================================================================
    // Address steering
    // =========================================================================
    logic [ADDR_WIDTH-1:0] addr_active;
    assign addr_active = (state == IDLE) ? cpu_addr : addr_reg;

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
            if (way_hit[i]) hit_way_index = i[WAY_BITS-1:0];
    end

    // =========================================================================
    // LRU
    // =========================================================================
    logic [WAY_BITS-1:0] victim_way;
    logic [NUM_WAYS-1:0] valid_ways_current;
    logic                lru_update_en;
    logic [WAY_BITS-1:0] lru_access_way;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++) begin : valid_vec
            assign valid_ways_current[i] = valid[i][current_set];
        end
    endgenerate

    TPLRU #(.NUM_WAYS(NUM_WAYS), .NUM_SETS(NUM_SETS)) lru (
        .clk(clk), .rst(rst),
        .set_idx(current_set),
        .access_way(lru_access_way),
        .update(lru_update_en),
        .valid_ways(valid_ways_current),
        .victim_way(victim_way)
    );

    // =========================================================================
    // Combinational Logic
    // =========================================================================
    always_comb begin
        next_state     = state;
        cpu_ready      = 1'b0;
        cpu_rdata      = 32'h0;
        mem_read       = 1'b0;
        mem_write      = 1'b0;
        mem_addr       = {addr_reg[ADDR_WIDTH-1:2], 2'b00};
        mem_wdata      = 32'h0;
        lru_update_en  = 1'b0;
        lru_access_way = hit_way_index;

        case (state)

            IDLE: begin
                if (cpu_read || cpu_write)
                    next_state = COMPARE;
            end

            COMPARE: begin
                if (cacheHit) begin
                    cpu_ready      = 1'b1;
                    lru_update_en  = 1'b1;
                    lru_access_way = hit_way_index;
                    cpu_rdata      = data_array[hit_way_index][current_set][current_offset];
                    next_state     = IDLE;
                end else begin
                    if (valid[active_way][fill_set] && dirtyBits[active_way][fill_set])
                        next_state = EVICT;
                    else
                        next_state = ALLOCATE;
                end
            end

            EVICT: begin
                mem_addr  = {tag_array[active_way][fill_set], fill_set, fill_word, 2'b00};
                mem_wdata = data_array[active_way][fill_set][fill_word];
                mem_write = 1'b1;
                if (mem_ready)
                    if (fill_word == LAST_WORD)
                        next_state = ALLOCATE;
            end

            ALLOCATE: begin
                mem_read = 1'b1;
                mem_addr = {fill_tag, fill_set, fill_word, 2'b00};
                if (mem_ready)
                    if (fill_word == LAST_WORD)
                        next_state = FILL_DONE;
            end

            FILL_DONE: begin
                lru_update_en  = 1'b1;
                lru_access_way = active_way;
                cpu_ready      = 1'b1;
                cpu_rdata      = is_read_op
                                 ? data_array[active_way][fill_set][fill_offset]
                                 : 32'h0;
                next_state = IDLE;
            end

            default: next_state = IDLE;
        endcase
    end

    // =========================================================================
    // Sequential Logic
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst) state <= IDLE;
        else     state <= next_state;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            addr_reg <= '0;  wdata_reg <= '0;
            is_read_op <= 1'b0;  is_write_op <= 1'b0;
            active_way <= '0;
            fill_tag <= '0;  fill_set <= '0;  fill_offset <= '0;
        end else begin
            if (state == IDLE && (cpu_read || cpu_write)) begin
                addr_reg    <= cpu_addr;
                wdata_reg   <= cpu_wdata;
                is_read_op  <= cpu_read;
                is_write_op <= cpu_write;
                active_way  <= victim_way;
                fill_tag    <= cpu_addr[ADDR_WIDTH-1 : SET_BITS+OFFSET_BITS+2];
                fill_set    <= cpu_addr[SET_BITS+OFFSET_BITS+1 : OFFSET_BITS+2];
                fill_offset <= cpu_addr[OFFSET_BITS+1 : 2];
            end
        end
    end

    // Fill word counter
    always_ff @(posedge clk) begin
        if (rst)
            fill_word <= '0;
        else if (state == COMPARE && !cacheHit)
            fill_word <= '0;                                          // reset on miss
        else if ((state == EVICT || state == ALLOCATE) && mem_ready)
            fill_word <= fill_word + 1'b1;                            // advance per ack
    end

    // Cache array updates
    always_ff @(posedge clk) begin
        if (rst) begin
            valid     <= '{default: '{default: 1'b0}};
            dirtyBits <= '{default: '{default: 1'b0}};
        end else begin

            // Write hit
            if (state == COMPARE && cacheHit && is_write_op) begin
                data_array[hit_way_index][current_set][current_offset] <= wdata_reg;
                dirtyBits[hit_way_index][current_set]                  <= 1'b1;
            end

            // Allocate fill - one word per ack
            if (state == ALLOCATE && mem_ready) begin
                if (fill_word == LAST_WORD) begin
                    tag_array[active_way][fill_set] <= fill_tag;
                    valid[active_way][fill_set]     <= 1'b1;
                end
                if (is_write_op && (fill_word == fill_offset)) begin
                    // Write-allocate: use CPU data for this word
                    data_array[active_way][fill_set][fill_word] <= wdata_reg;
                    dirtyBits[active_way][fill_set]             <= 1'b1;
                end else begin
                    data_array[active_way][fill_set][fill_word] <= mem_rdata;
                    if (fill_word == 0)
                        dirtyBits[active_way][fill_set] <= 1'b0;
                end
            end

            // Evict done
            if (state == EVICT && mem_ready && (fill_word == LAST_WORD))
                dirtyBits[active_way][fill_set] <= 1'b0;
        end
    end

`ifdef DEBUG_CACHE
    always @(posedge clk) begin
        if (!rst) begin
            if (state == COMPARE && cacheHit)
                $display("T=%0t [DCACHE] HIT  set=%0d way=%0d offset=%0d addr=%08h",
                         $time, current_set, hit_way_index, current_offset, addr_reg);
            if (state == COMPARE && !cacheHit)
                $display("T=%0t [DCACHE] MISS set=%0d tag=%0h addr=%08h",
                         $time, current_set, current_tag, addr_reg);
            if (state == ALLOCATE && mem_ready)
                $display("T=%0t [DCACHE] FILL set=%0d way=%0d word=%0d data=%08h",
                         $time, fill_set, active_way, fill_word, mem_rdata);
        end
    end
`endif

endmodule