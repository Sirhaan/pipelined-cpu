`include "config.svh"

module icacheController #(
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter CACHE_SIZE = `ICACHE_SIZE,
    parameter NUM_WAYS   = `ICACHE_WAYS
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

    localparam NUM_SETS = CACHE_SIZE / NUM_WAYS;
    localparam SET_BITS = $clog2(NUM_SETS);
    localparam TAG_BITS = ADDR_WIDTH - SET_BITS - 2;
    localparam WAY_BITS = $clog2(NUM_WAYS);

    // -------------------------------------------------------------------------
    // Address fields
    // -------------------------------------------------------------------------
    logic [ADDR_WIDTH-1:0] addr_reg;
    logic [ADDR_WIDTH-1:0] addr_active;
    logic [TAG_BITS-1:0]   current_tag;
    logic [SET_BITS-1:0]   current_set;

    assign addr_active  = (state == COMPARE) ? cpu_addr : addr_reg;
    assign current_tag  = addr_active[ADDR_WIDTH-1 : SET_BITS+2];
    assign current_set  = addr_active[SET_BITS+1  : 2];

    // -------------------------------------------------------------------------
    // Storage arrays
    // -------------------------------------------------------------------------
    logic [DATA_WIDTH-1:0] data_array [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic [TAG_BITS-1:0]   tag_array  [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic                  valid      [0:NUM_WAYS-1][0:NUM_SETS-1];

    // Reliable reset for Verilator
    initial begin
        for (int w = 0; w < NUM_WAYS; w++)
            for (int s = 0; s < NUM_SETS; s++)
                valid[w][s] = 1'b0;
    end

    // -------------------------------------------------------------------------
    // Hit detection
    // -------------------------------------------------------------------------
    logic [NUM_WAYS-1:0]        way_hit;
    logic                       cacheHit;
    logic [WAY_BITS-1:0]        hit_way_index;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++) begin : hit_detect
            assign way_hit[i] = valid[i][current_set] &&
                                (tag_array[i][current_set] == current_tag);
        end
    endgenerate

    assign cacheHit = |way_hit;

    always_comb begin
        hit_way_index = 0;
        for (int i = 0; i < NUM_WAYS; i++)
            if (way_hit[i]) hit_way_index = WAY_BITS'(i);
    end

    // -------------------------------------------------------------------------
    // LRU
    // -------------------------------------------------------------------------
    logic [NUM_WAYS-1:0] valid_vec;
    logic [WAY_BITS-1:0] victim_way;
    logic                lru_update;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++)
            assign valid_vec[i] = valid[i][current_set];
    endgenerate

    TPLRU #(
        .NUM_WAYS(NUM_WAYS),
        .NUM_SETS(NUM_SETS)
    ) lru (
        .clk        (clk),
        .rst        (rst),
        .set_idx    (current_set),
        .access_way (hit_way_index),
        .update     (lru_update),
        .valid_ways (valid_vec),
        .victim_way (victim_way)
    );

    // -------------------------------------------------------------------------
    // FSM
    // -------------------------------------------------------------------------
    typedef enum logic [1:0] {
        COMPARE,
        MISS_WAIT,
        FILL_DONE
    } state_t;

    state_t      state;
    logic [WAY_BITS-1:0] active_way;
    logic [TAG_BITS-1:0] fill_tag;
    logic [SET_BITS-1:0] fill_set;
    logic [DATA_WIDTH-1:0] cpu_rdata_reg;

    assign cpu_rdata = cpu_rdata_reg;

    // -------------------------------------------------------------------------
    // Combinational outputs
    // -------------------------------------------------------------------------
    always_comb begin
        cpu_ready  = 1'b0;
        mem_read   = 1'b0;
        mem_addr   = {addr_active[ADDR_WIDTH-1:2], 2'b00};
        lru_update = 1'b0;

        case (state)
            COMPARE: begin
                if (cpu_read && cacheHit) begin
                    cpu_ready  = 1'b1;
                    lru_update = 1'b1;
                end
            end
            MISS_WAIT: begin
                mem_read = 1'b1;
            end
            FILL_DONE: begin
                cpu_ready  = 1'b1;   // data is in cpu_rdata_reg from last cycle
                lru_update = 1'b1;
            end
            default: ;
        endcase
    end

    // -------------------------------------------------------------------------
    // Sequential logic
    // -------------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            state         <= COMPARE;
            addr_reg      <= 0;
            cpu_rdata_reg <= 0;
            active_way    <= 0;
            fill_tag      <= 0;
            fill_set      <= 0;
        end else begin
            case (state)
                COMPARE: begin
                    if (cpu_read) begin
                        if (cacheHit) begin
                            // Return hit data
                            cpu_rdata_reg <= data_array[hit_way_index][current_set];
                        end else begin
                            // Latch address and victim for fill
                            addr_reg   <= cpu_addr;
                            active_way <= victim_way;
                            fill_tag   <= current_tag;
                            fill_set   <= current_set;
                            state      <= MISS_WAIT;
                        end
                    end
                end

                MISS_WAIT: begin
                  
                    if (mem_ready) begin
                        // Write fetched data into cache
                        data_array[active_way][fill_set] <= mem_rdata;
                        tag_array [active_way][fill_set] <= fill_tag;
                        valid     [active_way][fill_set] <= 1'b1;
                        cpu_rdata_reg                    <= mem_rdata;
                        state                            <= FILL_DONE;
                    end
                end

                FILL_DONE: begin
                    // cpu_ready asserted combinationally this cycle
                    // return to COMPARE next cycle
                    state <= COMPARE;
                end

                default: state <= COMPARE;
            endcase
        end
        if (state == MISS_WAIT && mem_ready) begin
    $display("T=%0t [ICACHE] mem_ready! addr=%08h mem_rdata=%08h fill_set=%0d way=%0d",
             $time, addr_reg, mem_rdata, fill_set, active_way);
    data_array[active_way][fill_set] <= mem_rdata;
    tag_array [active_way][fill_set] <= fill_tag;
    valid     [active_way][fill_set] <= 1'b1;
    cpu_rdata_reg                    <= mem_rdata;
    state                            <= FILL_DONE;
end
    end

endmodule