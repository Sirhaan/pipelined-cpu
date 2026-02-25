module dcacheController #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CACHE_SIZE = 256,
    parameter NUM_WAYS   = 2
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
    localparam NUM_SETS = CACHE_SIZE / NUM_WAYS;
    localparam SET_BITS = $clog2(NUM_SETS);
    localparam TAG_BITS = ADDR_WIDTH - SET_BITS - 2;
    localparam WAY_BITS = $clog2(NUM_WAYS);

    // =========================================================================
    // Storage Arrays
    // =========================================================================
    logic [DATA_WIDTH-1:0] data_array [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic [TAG_BITS-1:0]   tag_array  [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic                  valid      [0:NUM_WAYS-1][0:NUM_SETS-1];
    logic                  dirtyBits  [0:NUM_WAYS-1][0:NUM_SETS-1];

    // =========================================================================
    // Latched Address / Operation Registers
    // =========================================================================
    logic [ADDR_WIDTH-1:0] addr_reg;
    logic [DATA_WIDTH-1:0] wdata_reg;
    logic                  is_read_op, is_write_op;
    logic [TAG_BITS-1:0]   fill_tag;
    logic [SET_BITS-1:0]   fill_set;
    logic [WAY_BITS-1:0]   active_way;

    // =========================================================================
    // FSM
    // =========================================================================
    typedef enum logic [2:0] {
        IDLE,
        COMPARE,
        EVICT,
        ALLOCATE,
        FILL_DONE   // one-cycle settle after array write
    } state_t;

    state_t state, next_state;

    // =========================================================================
    // Address steering:
    //   IDLE     → use cpu_addr (new request arriving)
    //   all else → use addr_reg (latched address)
    // =========================================================================
    logic [ADDR_WIDTH-1:0] addr_active;
    assign addr_active = (state == IDLE) ? cpu_addr : addr_reg;

    logic [TAG_BITS-1:0] current_tag;
    logic [SET_BITS-1:0] current_set;
    assign current_tag = addr_active[ADDR_WIDTH-1:ADDR_WIDTH-TAG_BITS];
    assign current_set = addr_active[SET_BITS+1:2];

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
        for (int i = 0; i < NUM_WAYS; i++) begin
            if (way_hit[i]) begin
                hit_way_index = i[WAY_BITS-1:0];
                
            end
        end
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

    TPLRU #(
        .NUM_WAYS(NUM_WAYS),
        .NUM_SETS(NUM_SETS)
    ) lru (
        .clk       (clk),
        .rst       (rst),
        .set_idx   (current_set),
        .access_way(lru_access_way),
        .update    (lru_update_en),
        .valid_ways(valid_ways_current),
        .victim_way(victim_way)
    );

    // =========================================================================
    // Combinational (next-state + output) Logic
    // =========================================================================
    always_comb begin
        // Defaults
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

            // -----------------------------------------------------------------
            IDLE: begin
                if (cpu_read || cpu_write)
                    next_state = COMPARE;
            end

            // -----------------------------------------------------------------
            COMPARE: begin
                if (cacheHit) begin
                    cpu_ready      = 1'b1;
                    lru_update_en  = 1'b1;
                    lru_access_way = hit_way_index;
                    cpu_rdata      = data_array[hit_way_index][fill_set];
                    // Write hit: data written in sequential block
                    next_state = IDLE;
                end else begin
                    // Miss — evict if dirty, otherwise allocate directly
                    if (valid[active_way][fill_set] && dirtyBits[active_way][fill_set])
                        next_state = EVICT;
                    else
                        next_state = ALLOCATE;
                end
            end

            // -----------------------------------------------------------------
            EVICT: begin
                // Write dirty line back using the original tag stored in cache
                mem_addr  = {tag_array[active_way][fill_set],
                             fill_set,
                             2'b00};
                mem_wdata = data_array[active_way][fill_set];
                mem_write = 1'b1;
                if (mem_ready)
                    next_state = ALLOCATE;
            end

            // -----------------------------------------------------------------
            ALLOCATE: begin
                mem_read = 1'b1;
                mem_addr = {fill_tag, fill_set, 2'b00};
                // Data written to array in sequential block when mem_ready
                // We wait one extra cycle (FILL_DONE) for array write to settle
                if (mem_ready)
                    next_state = FILL_DONE;
            end

            // -----------------------------------------------------------------
            // One cycle after array write: data is now readable
            FILL_DONE: begin
                lru_update_en  = 1'b1;
                lru_access_way = active_way;
                cpu_ready      = 1'b1;
                // For reads, serve from array; for writes, data was written in ALLOCATE
                cpu_rdata = is_read_op ? data_array[active_way][fill_set] : 32'h0;
                next_state = IDLE;
            end

            default: next_state = IDLE;

        endcase
    end

    // =========================================================================
    // Sequential Logic
    // =========================================================================

    // --- FSM state register ---
    always_ff @(posedge clk) begin
        if (rst) state <= IDLE;
        else     state <= next_state;
    end

    // --- Latch incoming request on IDLE→COMPARE transition ---
    always_ff @(posedge clk) begin
        if (rst) begin
            addr_reg    <= '0;
            wdata_reg   <= '0;
            is_read_op  <= 1'b0;
            is_write_op <= 1'b0;
            active_way  <= '0;
            fill_tag    <= '0;
            fill_set    <= '0;
        end else begin
            if (state == IDLE && (cpu_read || cpu_write)) begin
                addr_reg    <= cpu_addr;
                wdata_reg   <= cpu_wdata;
                is_read_op  <= cpu_read;
                is_write_op <= cpu_write;
                active_way  <= victim_way;
                // Latch tag/set NOW while addr_active == cpu_addr
                fill_tag    <= cpu_addr[ADDR_WIDTH-1:ADDR_WIDTH-TAG_BITS];
                fill_set    <= cpu_addr[SET_BITS+1:2];
            end
        end
    end

    // --- Cache array updates ---
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int w = 0; w < NUM_WAYS; w++)
                for (int s = 0; s < NUM_SETS; s++) begin
                    valid[w][s]     = 1'b0;
                    dirtyBits[w][s] = 1'b0;
                end
        end else begin

            // Write hit: update data and dirty bit
            if (state == COMPARE && cacheHit && is_write_op) begin
                data_array[hit_way_index][fill_set] <= wdata_reg;
                dirtyBits[hit_way_index][fill_set]  <= 1'b1;
            end

            // Allocate fill: write fetched data (or CPU write data) into array
            if (state == ALLOCATE && mem_ready) begin
                tag_array[active_way][fill_set] <= fill_tag;
                valid[active_way][fill_set]     <= 1'b1;
                if (is_write_op) begin
                    // Write-allocate: store the CPU write data
                    data_array[active_way][fill_set] <= wdata_reg;
                    dirtyBits[active_way][fill_set]  <= 1'b1;
                end else begin
                    data_array[active_way][fill_set] <= mem_rdata;
                    dirtyBits[active_way][fill_set]  <= 1'b0;
                end
            end

            // Evict complete: clear dirty bit
            if (state == EVICT && mem_ready) begin
                dirtyBits[active_way][fill_set] <= 1'b0;
            end

        end
    end

endmodule
