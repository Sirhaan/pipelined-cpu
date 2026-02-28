`include "config.svh"

module pipelinedCpu#(
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter LATENCY    = `MEM_LATENCY,
    parameter MEM_DEPTH  = `MEM_DEPTH,
    parameter ICACHE_SIZE = `ICACHE_SIZE,
    parameter DCACHE_SIZE = `DCACHE_SIZE,
    parameter ICACHE_WAYS = `ICACHE_WAYS,
    parameter DCACHE_WAYS = `DCACHE_WAYS
)(
    input clk,
    input rst
);

    // =========================================================================
    // Signal Declarations
    // =========================================================================

    // IF Stage
    logic [DATA_WIDTH - 1:0] pcCurrent, nextPc, pcPlus4IF;
    logic [DATA_WIDTH - 1:0] ic_inst;
    logic        ic_ready;
    logic        pcWrite, pcWrite_final;

    // ID Stage
    logic        IFflush, hazardSel, IFIDwrite, IFIDwrite_final;
    logic        pcSrcID;
    logic [DATA_WIDTH - 1:0] regData1ID, regData2ID, signExtImmID, branchTargetID;
    logic [DATA_WIDTH - 1:0] instID, pcPlus4ID;
    logic [1:0]  WBID;
    logic [2:0]  MEMID;
    logic [4:0]  EXID;
    logic [9:0]  finalCRLTID;

    // EX Stage
    logic [1:0]  WBEX;
    logic [2:0]  MEMEX;
    logic [4:0]  EXEX;
    logic [DATA_WIDTH - 1:0] regData1EX, regData2EX, signExtImmEX;
    logic [4:0]  RsEX, RtEX, RdEX;
    logic [5:0]  FuncEX;
    logic [1:0]  forwardA, forwardB;
    logic [DATA_WIDTH - 1:0] AluMuxAout, AluMuxBFwd, AluInb, AluResultEX;
    logic [3:0]  AluCtrlEX;
    logic [4:0]  WriteRegEX;
    logic [DATA_WIDTH - 1:0] branchTargetEX;
    logic        pcSrcEX, IFflushEX;

    // MEM Stage
    logic [1:0]  WBMEM;
    logic [2:0]  MEMMEM;
    logic [DATA_WIDTH - 1:0] AluResMEM, writeDataMEM;
    logic [4:0]  writeRegMEM;
    logic [DATA_WIDTH - 1:0] dc_rdata;
    logic        dc_ready;
    logic        mem_read_MEM, mem_write_MEM;

    // WB Stage
    logic [1:0]  WBWB;
    logic [DATA_WIDTH - 1:0] AluResWB, MEMDataWB;
    logic [4:0]  writeRegWB;
    logic [DATA_WIDTH - 1:0] finalResultWB;

    logic ic_stall, dc_stall, dc_done;

    // ICache <-> Arbiter
    logic [ADDR_WIDTH - 1:0] ic_mem_addr, ic_mem_rdata;
    logic        ic_mem_read, ic_mem_ready;

    // DCache <-> Arbiter
    logic [ADDR_WIDTH - 1   :0] dc_mem_addr, dc_mem_rdata, dc_mem_wdata;
    logic        dc_mem_read, dc_mem_write, dc_mem_ready;

    // Arbiter <-> UMEM
    logic        umem_read, umem_write, umem_ready;
    logic [ADDR_WIDTH - 1 :0] umem_addr, umem_wdata, umem_rdata;

    assign pcWrite_final   = pcWrite;
    assign IFIDwrite_final = IFIDwrite;

    // =========================================================================
    // IF Stage: Instruction Fetch
    // =========================================================================

    always_comb begin
        pcPlus4IF = pcCurrent + 32'd4;
        nextPc    = pcSrcEX ? branchTargetEX : pcPlus4IF;
    end

    PC pc (
        .PCInput  (nextPc),
        .PCWrite  (pcWrite_final),
        .clk      (clk),
        .reset    (rst),
        .PCaddress(pcCurrent)
    );

    // =========================================================================
    // Memory Subsystem: ICache -> Arbiter -> UMEM <- Arbiter <- DCache
    // =========================================================================

    icache #(
        .ADDR_WIDTH(`ADDR_WIDTH),
        .DATA_WIDTH(`DATA_WIDTH),
        .CACHE_SIZE(`ICACHE_SIZE),
        .LATENCY   (`ICACHE_LATENCY),
        .NUM_WAYS  (`ICACHE_WAYS)
    ) ICACHE (
        .clk      (clk),
        .rst      (rst),
        .cpu_addr (pcCurrent),
        .cpu_read (1'b1),
        .cpu_rdata(ic_inst),
        .cpu_ready(ic_ready),
        .mem_addr (ic_mem_addr),
        .mem_read (ic_mem_read),
        .mem_rdata(ic_mem_rdata),
        .mem_ready(ic_mem_ready)
    );

    dcache #(
        .ADDR_WIDTH(`ADDR_WIDTH),
        .DATA_WIDTH(`DATA_WIDTH),
        .CACHE_SIZE(`DCACHE_SIZE),
        .LATENCY   (`DCACHE_LATENCY),
        .NUM_WAYS  (`DCACHE_WAYS)
    ) D_CACHE (
        .clk      (clk),
        .rst      (rst),
        .cpu_addr (AluResMEM),
        .cpu_wdata(writeDataMEM),
        .cpu_read (MEMMEM[1] && !dc_done),
        .cpu_write(MEMMEM[0] && !dc_done),
        .cpu_rdata(dc_rdata),
        .cpu_ready(dc_ready),
        .mem_addr (dc_mem_addr),
        .mem_wdata(dc_mem_wdata),
        .mem_read (dc_mem_read),
        .mem_write(dc_mem_write),
        .mem_rdata(dc_mem_rdata),
        .mem_ready(dc_mem_ready)
    );

    MemoryArbitrator MemoryArbitrator_instance (
        .clk       (clk),
        .rst       (rst),
        // ICache side
        .ic_read   (ic_mem_read),
        .ic_addr   (ic_mem_addr),
        .ic_ready  (ic_mem_ready),
        .ic_rdata  (ic_mem_rdata),
        // DCache side
        .dc_read   (dc_mem_read),
        .dc_write  (dc_mem_write),
        .dc_addr   (dc_mem_addr),
        .dc_wdata  (dc_mem_wdata),
        .dc_ready  (dc_mem_ready),
        .dc_rdata  (dc_mem_rdata),
        // UMEM side
        .umem_read (umem_read),
        .umem_write(umem_write),
        .umem_addr (umem_addr),
        .umem_wdata(umem_wdata),
        .umem_ready(umem_ready),
        .umem_rdata(umem_rdata)
    );

    UMEM  #(
        .LATENCY   (`MEM_LATENCY),
        .ADDR_WIDTH(`ADDR_WIDTH),
        .DATA_WIDTH(`DATA_WIDTH),
        .MEM_DEPTH (`MEM_DEPTH)
    ) UnifiedMem (
        .clk       (clk),
        .rst       (rst),
        .umem_read (umem_read),
        .umem_write(umem_write),
        .umem_addr (umem_addr),
        .umem_wdata(umem_wdata),
        .umem_rdata(umem_rdata),
        .umem_ready(umem_ready)
    );

    // =========================================================================
    // ID Stage: Decode, Branch, Hazard
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst || IFflushEX) begin
            instID    <= 32'b0;
            pcPlus4ID <= 32'b0;
        end
        else if (IFIDwrite_final) begin
            instID    <= ic_inst;
            pcPlus4ID <= pcPlus4IF;
        end
    end

    ControlUnit CU (
        .OpCode   (instID[31:26]),
        .wb_bundle(WBID),
        .m_bundle (MEMID),
        .ex_bundle(EXID)
    );

    logic regWrite_en;
    assign regWrite_en = WBWB[1] & ~(ic_stall & ~dc_stall);

    RF Reg_Files (
        .clk      (clk),
        .rst      (rst),
        .RegWrite (regWrite_en),
        .ReadReg1 (instID[25:21]),
        .ReadReg2 (instID[20:16]),
        .WriteReg (writeRegWB),
        .ReadData1(regData1ID),
        .ReadData2(regData2ID),
        .WriteData(finalResultWB)
    );

    
    always_ff @(posedge clk) begin
        if (rst) dc_done <= 0;
        else if (dc_ready && (MEMMEM[1] || MEMMEM[0])) dc_done <= 1;
        else if (!ic_stall && !dc_stall) dc_done <= 0;
    end

    wire dc_ready_eff = dc_ready || dc_done;

    HDU hdu_instance (
        .IF_ID_rs       (instID[25:21]),
        .IF_ID_rt       (instID[20:16]),
        .ID_EX_rt       (RtEX),
        .ID_EX_rd       (RdEX),
        .EX_MEM_rd      (writeRegMEM),
        .ID_EX_regWrite (WBEX[1]),
        .EX_MEM_regWrite(WBMEM[1]),
        .MEM_WB_regWrite(WBWB[1]),
        .ID_EX_memRead  (MEMMEM[1]),
        .isBranch       (MEMID[2]),
        .ic_ready       (ic_ready),
        .dc_ready       (dc_ready_eff),
        .mem_read_EX    (MEMMEM[1]),
        .mem_write_EX   (MEMMEM[0]),
        .forwardA       (forwardA),
        .forwardB       (forwardB),
        .pcWrite        (pcWrite),
        .IF_ID_write    (IFIDwrite),
        .hazardSel      (hazardSel),
        .ic_stall       (ic_stall),
        .dc_stall       (dc_stall)
    );

    FU forward_unit_instance (
        .rs_EX       (RsEX),
        .rt_EX       (RtEX),
        .rd_MEM      (writeRegMEM),
        .rd_WB       (writeRegWB),
        .regwrite_MEM(WBMEM[1]),
        .regwrite_WB (WBWB[1]),
        .memRead_MEM (MEMMEM[1]),
        .forwardA    (forwardA),
        .forwardB    (forwardB)
    );

    always_comb begin
        signExtImmID   = {{16{instID[15]}}, instID[15:0]};
        branchTargetID = pcPlus4ID + (signExtImmID << 2);
        pcSrcID        = 1'b0;
        IFflush        = 1'b0;
        finalCRLTID    = hazardSel ? {WBID, MEMID, EXID} : 10'b0;
        mem_read_MEM   = MEMMEM[1];
        mem_write_MEM  = MEMMEM[0];
    end

    // =========================================================================
    // EX Stage: Execute
    // =========================================================================

    always_comb begin
        pcSrcEX   = MEMEX[2] && (AluMuxAout == AluMuxBFwd);
        IFflushEX = pcSrcEX;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            {WBEX, MEMEX, EXEX} <= 10'b0;
            regData1EX           <= 32'b0;
            regData2EX           <= 32'b0;
            signExtImmEX         <= 32'b0;
            RsEX                 <= 5'b0;
            RtEX                 <= 5'b0;
            RdEX                 <= 5'b0;
            FuncEX               <= 6'b0;
            branchTargetEX       <= 32'b0;
        end else if (!dc_stall && !ic_stall) begin
            {WBEX, MEMEX, EXEX} <= finalCRLTID;
            regData1EX           <= regData1ID;
            regData2EX           <= regData2ID;
            signExtImmEX         <= signExtImmID;
            RsEX                 <= instID[25:21];
            RtEX                 <= instID[20:16];
            RdEX                 <= instID[15:11];
            FuncEX               <= instID[5:0];
            branchTargetEX       <= branchTargetID;
        end
    end

    always_comb begin
        case (forwardA)
            2'b10:   AluMuxAout = AluResMEM;
            2'b01:   AluMuxAout = finalResultWB;
            default: AluMuxAout = regData1EX;
        endcase

        case (forwardB)
            2'b10:   AluMuxBFwd = AluResMEM;
            2'b01:   AluMuxBFwd = finalResultWB;
            default: AluMuxBFwd = regData2EX;
        endcase

        AluInb = EXEX[0] ? signExtImmEX : AluMuxBFwd;
    end

    Decoder ALUDec (
        .Func      (FuncEX),
        .AluOp     (EXEX[3:1]),
        .AluControl(AluCtrlEX)
    );

    ALU ALUUnit (
        .A         (AluMuxAout),
        .B         (AluInb),
        .AluControl(AluCtrlEX),
        .Result    (AluResultEX),
        .Zero      (),
        .Overflow  ()
    );

    assign WriteRegEX = EXEX[4] ? RdEX : RtEX;

    // =========================================================================
    // MEM Stage: Data Cache
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst) begin
            WBMEM        <= 2'b0;
            MEMMEM       <= 3'b0;
            AluResMEM    <= 32'b0;
            writeDataMEM <= 32'b0;
            writeRegMEM  <= 5'b0;
        end else if (!dc_stall && !ic_stall) begin
            WBMEM        <= WBEX;
            MEMMEM       <= MEMEX;
            AluResMEM    <= AluResultEX;
            writeDataMEM <= AluMuxBFwd;
            writeRegMEM  <= WriteRegEX;
        end
    end

    // =========================================================================
    // WB Stage: Write Back
    // =========================================================================

    logic stall_WB;
    assign stall_WB = dc_stall;

    always_ff @(posedge clk) begin
        if (rst) begin
            WBWB       <= 2'b0;
            AluResWB   <= 32'b0;
            MEMDataWB  <= 32'b0;
            writeRegWB <= 5'b0;
        end else if (!stall_WB) begin
            WBWB       <= WBMEM;
            AluResWB   <= AluResMEM;
            MEMDataWB  <= dc_rdata;
            writeRegWB <= writeRegMEM;
        end
    end

    assign finalResultWB = WBWB[0] ? dc_rdata : AluResWB;

endmodule