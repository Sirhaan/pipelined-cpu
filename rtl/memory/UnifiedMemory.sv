`include "config.svh"

module UnifiedMemory #(
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter MEM_DEPTH   = `MEM_DEPTH,
    parameter LATENCY    = `MEM_LATENCY
) (
    input  logic        clk,
    input  logic        rst,
    // icache port
    input  logic [31:0] ic_addr,
    input  logic        ic_read,
    output logic [31:0] ic_rdata,
    output logic        ic_ready,
    // dcache port
    input  logic [31:0] dc_addr,
    input  logic        dc_read,
    input  logic        dc_write,
    input  logic [31:0] dc_wdata,
    output logic [31:0] dc_rdata,
    output logic        dc_ready
);

    // -------------------------------------------------------------------------
    // Combinational arbitration — dcache has priority
    // -------------------------------------------------------------------------
    logic dc_active, ic_active;

    always_comb begin
        dc_active = dc_read || dc_write;
        ic_active = ic_read && !dc_active;
    end

    // -------------------------------------------------------------------------
    // Memory array
    // -------------------------------------------------------------------------
    logic [DATA_WIDTH-1:0] ram [0:(1<<MEM_DEPTH)-1];

    initial begin
        `ifdef PERF_TB
            $readmemh(`PROG_FILE_PERF, ram);
        `else
            $readmemh(`PROG_FILE_FUNC, ram);
        `endif
    end

    // -------------------------------------------------------------------------
    // FSM state
    // -------------------------------------------------------------------------
    logic [31:0] timer;
    logic        busy;
    logic [31:0] mem_rdata;
    logic        mem_ready;

    // Latched transaction info — captured when bus is granted
    logic        dc_won;         // 1 = dcache owns this transaction
    logic [31:0] latched_addr;   // address held stable for full transaction
    logic [31:0] latched_wdata;  // write data held stable
    logic        latched_write;  // whether this transaction is a write

    always_ff @(posedge clk) begin
        if (rst) begin
            timer         <= 0;
            busy          <= 0;
            mem_ready     <= 0;
            mem_rdata     <= 0;
            dc_won        <= 0;
            latched_addr  <= 0;
            latched_wdata <= 0;
            latched_write <= 0;
        end else begin
            mem_ready <= 0;  // default: deassert every cycle

            if (!busy && (dc_active || ic_active)) begin
                // Grant bus — dcache wins if both active
                busy          <= 1;
                timer         <= LATENCY;
                dc_won        <= dc_active;
                latched_addr  <= dc_active ? dc_addr  : ic_addr;
                latched_wdata <= dc_wdata;
                latched_write <= dc_write && dc_active;
            end else if (busy) begin
                if (timer > 1) begin
                    timer <= timer - 1;
                    // Pre-load read data one cycle before ready
                    if (timer == 2 && !latched_write)
                        mem_rdata <= ram[latched_addr[MEM_DEPTH+1:2]];
                end else begin
                    // Transaction complete
                    busy      <= 0;
                    mem_ready <= 1;
                    if (latched_write)
                        ram[latched_addr[MEM_DEPTH+1:2]] <= latched_wdata;
                end
            end
        end
    end

    // -------------------------------------------------------------------------
    // Route outputs back to correct cache port using latched dc_won
    // -------------------------------------------------------------------------
    always_comb begin
        ic_rdata = (!dc_won) ? mem_rdata : 32'b0;
        dc_rdata = ( dc_won) ? mem_rdata : 32'b0;
        ic_ready = mem_ready && !dc_won;
        dc_ready = mem_ready &&  dc_won;
    end

endmodule