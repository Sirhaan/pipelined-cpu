`include "rtl/include/config.svh"

module performanceCounter (
    input  logic        clk, rst,
    // cache stall hit and miss signals
    input  logic        ic_stall, dc_stall, ic_ready, dc_ready,
    // instruction retired from WB stage
    input  logic        reg_write_wb,
    input  logic [4:0]  write_reg_wb,
    // from MEM stage
    input  logic        mem_read_mem,   // MEMMEM[1]
    input  logic        mem_write_mem,  // MEMMEM[0]
    // branch
    input  logic        branch_taken,   // pcSrcID
    input  logic        is_branchID,    // MEMID[2]
    // report trigger from testbench
  input   logic        perf_print
);

    // -------------------------------------------------------------------------
    // Counters
    // -------------------------------------------------------------------------
    logic [63:0] total_cycles;
    logic [63:0] instruction_retired;

    logic [63:0] ic_hits;
    logic [63:0] ic_misses;
    logic [63:0] ic_stall_cycles;

    logic [63:0] dc_hits;
    logic [63:0] dc_misses;
    logic [63:0] dc_stall_cycles;

    logic [63:0] branch_instructions;
    logic [63:0] branch_mispredictions;

    // edge detection
    logic ic_stall_prev;
    logic dc_stall_prev;
    logic branch_taken_prev;

    // -------------------------------------------------------------------------
    // Counter logic
    // -------------------------------------------------------------------------
    always_ff @(posedge clk ) begin
        if (rst) begin
            total_cycles          <= 0;
            instruction_retired   <= 0;
            ic_hits               <= 0;
            ic_misses             <= 0;
            ic_stall_cycles       <= 0;
            dc_hits               <= 0;
            dc_misses             <= 0;
            dc_stall_cycles       <= 0;
            branch_instructions   <= 0;
            branch_mispredictions <= 0;
            ic_stall_prev         <= 0;
            dc_stall_prev         <= 0;
            branch_taken_prev     <= 0;
        end else begin
            total_cycles      <= total_cycles + 1;
            ic_stall_prev     <= ic_stall;
            dc_stall_prev     <= dc_stall;
            branch_taken_prev <= branch_taken;

            // Instructions retired
            if (reg_write_wb && write_reg_wb != 0 && !ic_stall && !dc_stall)
                instruction_retired <= instruction_retired + 1;

            // ICache
            if (ic_stall && !ic_stall_prev)
                ic_misses <= ic_misses + 1;
            if (ic_stall)
                ic_stall_cycles <= ic_stall_cycles + 1;
            if (ic_ready && !ic_stall && !ic_stall_prev)
                ic_hits <= ic_hits + 1;

            // DCache
            if (dc_stall && !dc_stall_prev)
                dc_misses <= dc_misses + 1;
            if (dc_stall)
                dc_stall_cycles <= dc_stall_cycles + 1;
            if ((mem_read_mem || mem_write_mem) && !dc_stall && dc_ready)
                dc_hits <= dc_hits + 1;

            // Branches
            if (is_branchID && !ic_stall && !dc_stall)
                branch_instructions <= branch_instructions + 1;
            if (branch_taken && !branch_taken_prev)
                branch_mispredictions <= branch_mispredictions + 1;
        end
    end

// report the performance metrics when print_report is asserted
    always @(posedge clk) begin
        if (perf_print) begin
            automatic real CPI, ic_miss_rate, dc_miss_rate, branch_mispredict_rate;

            CPI = (instruction_retired > 0) ?
                  (real'(total_cycles) / real'(instruction_retired)) : 0.0;

            ic_miss_rate = ((ic_hits + ic_misses) > 0) ?
                           (real'(ic_misses) / real'(ic_hits + ic_misses) * 100.0) : 0.0;

            dc_miss_rate = ((dc_hits + dc_misses) > 0) ?
                           (real'(dc_misses) / real'(dc_hits + dc_misses) * 100.0) : 0.0;

            branch_mispredict_rate = (branch_instructions > 0) ?
                                     (real'(branch_mispredictions) /
                                      real'(branch_instructions) * 100.0) : 0.0;

            $display("");
            $display("=============================================================");
            $display("  PERFORMANCE COUNTER REPORT");
            $display("=============================================================");
            $display("  Total cycles            : %0d", total_cycles);
            $display("  Instructions retired    : %0d", instruction_retired);
            $display("  CPI                     : %.3f", CPI);
            $display("-------------------------------------------------------------");
            $display("  ICache hits             : %0d", ic_hits);
            $display("  ICache misses           : %0d", ic_misses);
            $display("  ICache miss rate        : %.1f%%", ic_miss_rate);
            $display("  ICache stall cycles     : %0d  (%.1f%% of total)",
                     ic_stall_cycles,
                     (total_cycles > 0) ?
                     real'(ic_stall_cycles) / real'(total_cycles) * 100.0 : 0.0);
            $display("-------------------------------------------------------------");
            $display("  DCache hits             : %0d", dc_hits);
            $display("  DCache misses           : %0d", dc_misses);
            $display("  DCache miss rate        : %.1f%%", dc_miss_rate);
            $display("  DCache stall cycles     : %0d  (%.1f%% of total)",
                     dc_stall_cycles,
                     (total_cycles > 0) ?
                     real'(dc_stall_cycles) / real'(total_cycles) * 100.0 : 0.0);
            $display("-------------------------------------------------------------");
            $display("  Branches executed       : %0d", branch_instructions);
            $display("  Branch mispredicts      : %0d", branch_mispredictions);
            $display("  Mispredict rate         : %.1f%%", branch_mispredict_rate);
            $display("  Flush penalty/mispredict: %0d cycles",  `BRANCH_STAGE - 1);
            $display("  Total branch penalty    : %0d cycles",
                     branch_mispredictions * (`BRANCH_STAGE - 1));
            $display("=============================================================");
            $display("");
        end
    end

endmodule
