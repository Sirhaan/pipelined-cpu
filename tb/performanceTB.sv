`include "config.svh"

module performanceTB();
logic clk, rst ;
initial begin
    clk = 0;
    rst = 1;
    #(`RESET_TIME) rst = 0;
end
always begin
    #(`CLK_HALF) clk = ~clk;
end

pipelinedCpu dut (
    .clk(clk),
    .rst(rst)
);

performanceCounter perfCounter (
    .clk(clk),
    .rst(rst),
    .ic_stall(dut.ic_stall),
    .dc_stall(dut.dc_stall),
    .ic_ready(dut.ic_ready),
    .dc_ready(dut.dc_ready),
    .mem_read_mem(dut.MEMMEM[1]),
    .mem_write_mem(dut.MEMMEM[0]),
    .branch_taken(dut.pcSrcID),
    .reg_write_wb(dut.WBWB[0]),
    .write_reg_wb(dut.write_reg_wb),
    .is_branchID(dut.MEMID[`BRANCH_STAGE])
);

initial begin
    $dumpfile("performanceTB.vcd");
    $dumpvars(0, performanceTB);
end

// pipeline debug
`ifdef DEBUG_PIPELINE
    always @(posedge clk) begin
        if(!rst && dut.WBWB[1] && dut.writeRegWB != 5'b0)
            $display("T=%0t | [WB ] Writing reg[%0d] = %08h",
                     $time, dut.writeRegWB, dut.finalResultWB);
    end
`endif


    initial begin
              $display("=============================================================");
        $display("  PERFORMANCE BENCHMARK TESTBENCH");
        $display("  Program : %s", `PROG_FILE_PERF);
        $display("  Timeout : %0d ns", `SIM_TIMEOUT_PERF);
        $display("  Config  : ICache=%0dB/%0d-way lat=%0d  DCache=%0dB/%0d-way lat=%0d",
                 `ICACHE_SIZE, `ICACHE_WAYS, `ICACHE_LATENCY,
                 `DCACHE_SIZE, `DCACHE_WAYS, `DCACHE_LATENCY);
        $display("=============================================================");
        rst = 1;
        #(`RESET_TIME);
        @(posedge clk);
        rst = 0;
        $display("T=%0t | Reset released, benchmark running...\n", $time);
    end
    logic        break_detected;
    logic [31:0] break_pc;

    logic [2:0] special_pipe;
    logic       is_special_id;

    assign is_special_id = (dut.instID[31:26] == `OPCODE_SPECIAL) &&
                           ((dut.instID[5:0] == `FUNCT_BREAK) ||
                            (dut.instID[5:0] == `FUNCT_SYSCALL));

    always_ff @(posedge clk) begin
        if (rst) begin
            special_pipe   <= 3'b0;
            break_detected <= 1'b0;
            break_pc       <= 32'b0;
        end else if (!ic_stall_wire && !dc_stall_wire) begin
            // Advance the pipe flag with the pipeline
            special_pipe <= {special_pipe[1:0], is_special_id};
            if (special_pipe[2] && !break_detected) begin
                break_detected <= 1'b1;
                break_pc       <= dut.AluResMEM; // Approximate; or track PC separately
            end
        end
    end

    // Wire aliases for readability
    wire ic_stall_wire = dut.ic_stall;
    wire dc_stall_wire = dut.dc_stall;
 // -------------------------------------------------------------------------
    // Termination: BREAK/SYSCALL reached MEM stage
    // -------------------------------------------------------------------------
    always @(posedge clk) begin
        if (break_detected) begin
            repeat(5) @(posedge clk);   // drain remaining WB
            $display("T=%0t | [BREAK/SYSCALL] Benchmark complete — pipeline drained",
                     $time);
            print_config();
            perf.report();
            $finish;
        end
    end
    //timeout
 initial begin
        #(`SIM_TIMEOUT_PERF);
        $display("\n[TIMEOUT] %0t ns elapsed — benchmark did not terminate!", $time);
        $display("[TIMEOUT] Last PC=%08h instID=%08h", dut.pcCurrent, dut.instID);
        $display("[TIMEOUT] Did you forget to end your program with BREAK (0x0000000d)?");
        print_config();
        perf.report();
        $finish;
    end


    //test config printer
     task print_config;
        begin
            $display("=============================================================");
            $display("  BENCHMARK CONFIGURATION");
            $display("=============================================================");
            $display("  Clock period      : %0d ns  (%0d MHz)",
                     `CLK_PERIOD, 1000/`CLK_PERIOD);
            $display("  ICache size       : %0d bytes,  %0d-way,  latency=%0d cycles",
                     `ICACHE_SIZE, `ICACHE_WAYS, `ICACHE_LATENCY);
            $display("  DCache size       : %0d bytes,  %0d-way,  latency=%0d cycles",
                     `DCACHE_SIZE, `DCACHE_WAYS, `DCACHE_LATENCY);
            $display("  Branch resolution : ID stage (flush penalty=%0d cycle)",
                     `BRANCH_STAGE - 1);
            $display("=============================================================");
        end
    endtask
endmodule