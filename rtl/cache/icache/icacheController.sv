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

    localparam NUM_SETS = `ICACHE_SIZE / `ICACHE_WAYS;
    localparam SET_BITS = $clog2(NUM_SETS);
    localparam TAG_BITS = `ADDR_WIDTH - SET_BITS - 2;  // 2 for word offset
    localparam WAY_BITS = $clog2(`ICACHE_WAYS);

    logic [ADDR_WIDTH-1:0] addr_reg;
    logic [TAG_BITS-1:0]   current_tag;
    logic [SET_BITS-1:0]   current_set;

    // During miss, use latched address
    logic [ADDR_WIDTH-1:0] addr_active;
    assign addr_active = (state == COMPARE) ? cpu_addr : addr_reg;

    // FIXED address field extraction
    assign current_tag = addr_active[ADDR_WIDTH-1:SET_BITS+2];
    assign current_set = addr_active[SET_BITS+1:2];

    logic [DATA_WIDTH-1:0] data_array [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic [TAG_BITS-1:0]   tag_array  [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic                  valid      [0:NUM_WAYS-1][0:NUM_SETS-1];

    // Hit detection
    logic [NUM_WAYS-1:0] way_hit;
    logic                cacheHit;
    logic [$clog2(NUM_WAYS)-1:0] hit_way_index;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++) begin : hit_detect
            assign way_hit[i] =
                valid[i][current_set] &&
                (tag_array[i][current_set] == current_tag);
        end
    endgenerate

    assign cacheHit = |way_hit;

    always_comb begin
        hit_way_index = 0;
        for (int i = 0; i < NUM_WAYS; i++) begin
            if (way_hit[i]) begin
                hit_way_index = i[$clog2(NUM_WAYS)-1:0];
       
            end
        end
    end

    logic [WAY_BITS-1:0] victim_way;
    logic [NUM_WAYS-1:0] valid_vec;
    logic lru_update;

    generate
        for (genvar i = 0; i < NUM_WAYS; i++) begin
            assign valid_vec[i] = valid[i][current_set];
        end
    endgenerate

    // Assuming you have TPLRU module
    TPLRU #(
        .NUM_WAYS(NUM_WAYS),
        .NUM_SETS(NUM_SETS)
    ) lru (
        .clk(clk),
        .rst(rst),
        .set_idx(current_set),
        .access_way(hit_way_index),
        .update(lru_update),
        .valid_ways(valid_vec),
        .victim_way(victim_way)
    );

    // FSM
    typedef enum logic [1:0] {
        COMPARE,
        MISS_WAIT,
        FILL_DONE
    } state_t;

    state_t state, next_state;
    logic [WAY_BITS-1:0] active_way;

    // Latched registers
    logic [TAG_BITS-1:0] fill_tag;
    logic [SET_BITS-1:0] fill_set;

    // Output register to avoid combinational issues
    logic [DATA_WIDTH-1:0] cpu_rdata_reg;
    assign cpu_rdata = cpu_rdata_reg;

    // Next state logic
    always_comb begin
        next_state = state;
        cpu_ready  = 1'b0;
        mem_read   = 1'b0;
        mem_addr   = {addr_active[ADDR_WIDTH-1:2], 2'b00};  // FIXED
        lru_update = 1'b0;

        case (state)
            COMPARE: begin
                if (cpu_read) begin
                    if (cacheHit) begin
                        cpu_ready  = 1'b1;
                        lru_update = 1'b1;
                    end else begin
                        next_state = MISS_WAIT;
                    end
                end
            end

            MISS_WAIT: begin
                mem_read = 1'b1;
                if (mem_ready) begin
                    next_state = FILL_DONE;
                end
            end
            
            FILL_DONE: begin
                cpu_ready  = 1'b1;
                lru_update = 1'b1;
                next_state = COMPARE;
            end
            default: next_state = COMPARE;
        endcase
    end

    // Sequential logic - FIXED for Verilator
    always_ff @(posedge clk) begin
        if (rst) begin
            state         <= COMPARE;
            addr_reg      <= 0;
            cpu_rdata_reg <= 0;
            
            // Initialize valid array without for loops in reset
            // This avoids Verilator issues with non-blocking assignments in loops
            for (int s = 0; s < NUM_SETS; s++) begin
                for (int w = 0; w < NUM_WAYS; w++) begin
                    valid[w][s] = 1'b0;
                end
            end
        end else begin
            state <= next_state;

            // Handle cache read
            if (state == COMPARE && cpu_read && cacheHit) begin
                cpu_rdata_reg <= data_array[hit_way_index][current_set];
            end

            if (state == COMPARE && cpu_read && !cacheHit) begin
                addr_reg   <= cpu_addr;
                active_way <= victim_way;
                fill_tag   <= current_tag;
                fill_set   <= current_set;
            end

            // Fill cache on memory response
            if (state == MISS_WAIT && mem_ready) begin
                tag_array[active_way][fill_set]  <= fill_tag;
                data_array[active_way][fill_set] <= mem_rdata;
                valid[active_way][fill_set]      <= 1'b1;
                cpu_rdata_reg <= mem_rdata;  // Immediate output
            end
        end
    end
endmodule
