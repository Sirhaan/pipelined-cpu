`include "config.svh"


module functionalTB();
logic clk, rst;
initial begin
    clk = 0;
    rst = 1;
    #(`RESET_TIME) rst = 0;
end
always begin
    #(`CLK_HALF) clk = ~clk;
end

//DUT
pipelinedCpu dut (
    .clk(clk),
    .rst(rst)
);

// performance counter
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
    $dumpfile("functionalTB.vcd");
    $dumpvars(0, functionalTB);
end

// pipeline debug
`ifdef DEBUG_PIPELINE
    always @(posedge clk) begin
        if (!rst && dut.instID !== 32'b0)
            $display("T=%0t | [ID ] instID=%08h", $time, dut.instID);
    end
    always @(posedge clk) begin
        if (!rst && (dut.WBEX !== 2'b0 || dut.MEMEX !== 3'b0))
            $display("T=%0t | [EX ] WBEX=%02b MEMEX=%03b AluRes=%08h WrtReg=%0d",
                     $time, dut.WBEX, dut.MEMEX, dut.AluResultEX, dut.WriteRegEX);
    end
    always @(posedge clk) begin
        if (!rst && dut.WBWB[1] && dut.writeRegWB != 5'b0)
            $display("T=%0t | [WB ] Writing reg[%0d] = %08h",
                     $time, dut.writeRegWB, dut.finalResultWB);
    end
    // HDU state line
    always @(posedge clk) begin
        $display("T=%0t | PC=%08h ic_stall=%b dc_stall=%b pcWrite=%b instID=%08h WBWB=%02b WriteReg=%0d WriteData=%08h",
            $time, dut.pcCurrent, dut.ic_stall, dut.dc_stall,
            dut.pcWrite, dut.instID, dut.WBWB,
            dut.writeRegWB, dut.finalResultWB);
    end
`endif

    // checks
    typedef struct packed {
        logic [4:0]  reg_num;
        logic [31:0] expected;
    } check_t;

    string check_names[8] = '{
        "ORI  $t0, $zero, 5   ",
        "ORI  $t1, $zero, 10  ",
        "ADD  $t2, $t0, $t1   ",
        "ADDI $t3, $t0, 100   ",
        "LW   $t4, 64($zero)  ",
        "AND  $t5, $t0, $t1   ",
        "OR   $t6, $t0, $t1   ",
        "SLT  $t7, $t1, $t0   "
    };

    check_t checks[8] = '{
        '{5'd8,  32'h00000005},   // $t0 = 5
        '{5'd9,  32'h0000000a},   // $t1 = 10
        '{5'd10, 32'h0000000f},   // $t2 = 15  (5 + 10)
        '{5'd11, 32'h00000069},   // $t3 = 105 (5 + 100)
        '{5'd12, 32'h0000000f},   // $t4 = 15  (LW from mem[0x40])
        '{5'd13, 32'h00000000},   // $t5 = 0   (5 AND 10 = 0)
        '{5'd14, 32'h0000000f},   // $t6 = 15  (5 OR 10 = 15)
        '{5'd15, 32'h00000000}    // $t7 = 0   (10 SLT 5 = 0)
    };

    //reset
      initial begin
        $display("=============================================================");
        $display("  FUNCTIONAL VALIDATION TESTBENCH");
        $display("  Program: %s", `PROG_FILE_FUNC);
        $display("  Timeout: %0d ns", `SIM_TIMEOUT_FUNC);
        $display("=============================================================");
        rst = 1;
        #(`RESET_TIME);
        @(posedge clk);
        rst = 0;
        $display("T=%0t | Reset released, CPU running...", $time);
    end
//timeout
      initial begin
        #(`SIM_TIMEOUT_FUNC);
        $display("\n[TIMEOUT] %0t ns elapsed — CPU did not halt!", $time);
        $display("[TIMEOUT] Last PC=%08h instID=%08h", dut.pcCurrent, dut.instID);
        perf.report();
        run_checks();
        $finish;
    end
// halt detection if no stalls for 5 cycles 
    
    logic [31:0] prev_pc;
    int          stable_count;

    initial begin
        prev_pc      = 32'hFFFFFFFF;
        stable_count = 0;
        wait(rst == 0);
        forever begin
            @(posedge clk);
            if (dut.pcCurrent === prev_pc && !dut.ic_stall && !dut.dc_stall) begin
                stable_count++;
                if (stable_count >= 5) begin
                    repeat(10) @(posedge clk);  // drain pipeline
                    $display("T=%0t | [HALT] PC stable at %08h", $time, dut.pcCurrent);
                    perf.report();
                    run_checks();
                    $finish;
                end
            end else begin
                stable_count = 0;
                prev_pc = dut.pcCurrent;
            end
        end
    end
// check runner
       int pass_count;
    int fail_count;

    task run_checks;
        logic [31:0] actual;
        begin
            pass_count = 0;
            fail_count = 0;
            $display("");
            $display("=============================================================");
            $display("  REGISTER FILE CHECK");
            $display("=============================================================");
            $display("  %-24s  REG   EXPECTED    ACTUAL      STATUS",
                     "Instruction");
            $display("  %s", {60{"-"}});

            for (int i = 0; i < 8; i++) begin
                actual = dut.Reg_Files.registers[checks[i].reg_num];
                if (actual === checks[i].expected) begin
                    $display("  %-24s  $%-2d   0x%08h  0x%08h  PASS",
                             check_names[i], checks[i].reg_num,
                             checks[i].expected, actual);
                    pass_count++;
                end else begin
                    $display("  %-24s  $%-2d   0x%08h  0x%08h  FAIL <<<",
                             check_names[i], checks[i].reg_num,
                             checks[i].expected, actual);
                    fail_count++;
                end
            end

            $display("  %s", {60{"-"}});
            if (fail_count == 0)
                $display("  RESULT: ALL %0d CHECKS PASSED ✓", pass_count);
            else
                $display("  RESULT: %0d PASSED  %0d FAILED ✗", pass_count, fail_count);
            $display("=============================================================");
            $display("");
        end
    endtask



endmodule