`timescale 1ns / 1ps

module pipelinedCpuTest();
    reg clk, rst;
    integer i;

    PipelinedCpu dut (.clk(clk), .rst(rst));

    always #5 clk = ~clk;
// Only print every N cycles to reduce output


    initial begin
        clk = 0;
        $display("T=%0t | INITIAL PC=%h", $time, dut.pcCurrent);
        rst = 1;
        $display("--- CPU Resetting ---");
        #20 rst = 0;
        $display("T=%0t | AFTER RESET PC=%h", $time, dut.pcCurrent);
        $display("--- CPU Running ---");
        #5000;  // long enough for ~10 instructions through the cache
        $display("--- Simulation Finished ---");
        $finish;
    end

    initial begin
        $dumpfile("cpusim.vcd");
        $dumpvars(0, pipelinedCpuTest);
        for (i = 0; i < 32; i = i + 1)
            $dumpvars(0, dut.Reg_Files_instance.Register[i]);
    end

    initial begin
        $display("Cache config: SIZE=%d, WAYS=%d",
                 dut.ICACHE.CACHE_SIZE, dut.ICACHE.NUM_WAYS);
        $display("T=%0t | DCACHE state=%0d | cpu_read=%b | cpu_addr=%h | dc_ready=%b | mem_ready=%b",
                 $time, dut.D_CACHE.ctrl.state, dut.D_CACHE.ctrl.cpu_read,
                 dut.D_CACHE.ctrl.cpu_addr, dut.dc_ready, dut.D_CACHE.ctrl.mem_ready);
                 $display("T=%0t | [EX] EXEX=%b RtEX=%0d RdEX=%0d WrtReg=%0d",
         $time, dut.EXEX, dut.RtEX, dut.RdEX, dut.WriteRegEX);
         
    end

    // Monitor: PC + stall signals only (keep it readable)
    initial begin
        $monitor("T=%0t | PC=%h | ic_ready=%b | ic_stall=%b | dc_stall=%b | pcWrite=%b | instID=%h | WBWB=%b | RegWrite=%b | WriteReg=%0d | WriteData=%h",
            $time,
            dut.pcCurrent,
            dut.ic_ready,
            dut.ic_stall,
            dut.dc_stall,
            dut.pcWrite,
            dut.instID,
            dut.WBWB,
            dut.WBWB[1],       // RegWrite in WB stage
            dut.writeRegWB,
            dut.finalResultWB
        );
    end

    // Show register file state on every writeback
    always @(posedge clk) begin
        // Instruction entering ID stage
        if (dut.IFIDwrite_final && dut.instID != 0)
            $display("T=%0t | [ID ] instID=%h", $time, dut.instID);

        // Pipeline register snapshot each stage
        if (dut.WBEX != 0 || dut.MEMEX != 0)
            $display("T=%0t | [EX ] WBEX=%b MEMEX=%b AluRes=%h WrtReg=%0d",
                     $time, dut.WBEX, dut.MEMEX, dut.AluResultEX, dut.WriteRegEX);

        // Writeback firing
        if (dut.WBWB[1] && dut.writeRegWB != 0) begin
            $display("T=%0t | [WB ] Writing reg[%0d] = %h",
                     $time, dut.writeRegWB, dut.finalResultWB);
        end

        // Register file snapshot every 100 cycles (adjust as needed)
        if ($time % 1000 == 0) begin
            $display("T=%0t | REGS: $at=%h $v0=%h $s0=%h $s1=%h $s2=%h",
                     $time,
                     dut.Reg_Files_instance.Register[1],   // $at
                     dut.Reg_Files_instance.Register[2],   // $v0
                     dut.Reg_Files_instance.Register[16],  // $s0
                     dut.Reg_Files_instance.Register[17],  // $s1
                     dut.Reg_Files_instance.Register[18]); // $s2
        end
        // Add to your testbench


    end

    always @(posedge clk) begin
    if (dut.pcSrcEX) $display("BRANCH TAKEN: PC=%h -> Target=%h", dut.pcCurrent, dut.branchTargetEX);
    if (dut.IFflushEX) $display("PIPELINE FLUSHED by branch");
end


endmodule