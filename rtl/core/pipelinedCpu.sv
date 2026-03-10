`include "config.svh"

module pipelinedCpu #(
    parameter DATA_WIDTH  = `DATA_WIDTH,
    parameter ADDR_WIDTH  = `ADDR_WIDTH,
    parameter MEM_DEPTH   = `MEM_DEPTH,
    parameter ICACHE_SIZE = `ICACHE_SIZE,
    parameter DCACHE_SIZE = `DCACHE_SIZE,
    parameter ICACHE_WAYS = `ICACHE_WAYS,
    parameter DCACHE_WAYS = `DCACHE_WAYS
)(
    input logic clk,
    input logic rst
);

    // =========================================================================
    // Signal Declarations
    // =========================================================================

    // IF Stage
    logic [DATA_WIDTH-1:0] pcCurrent, nextPc, pcPlus4IF;
    logic [DATA_WIDTH-1:0] ic_inst;
    logic                  ic_ready;
    logic                  pcWrite, pcWrite_final;

    // Branch Predictor outputs
    logic                  predict_taken, btb_hit;
    logic [DATA_WIDTH-1:0] predict_target;

    // ID Stage
    logic                  hazardSel, IFIDwrite, IFIDwrite_final;
    logic [DATA_WIDTH-1:0] regData1ID, regData2ID, immID;
    logic [DATA_WIDTH-1:0] instID, pcPlus4ID, pcID;
    logic [DATA_WIDTH-1:0] branchTargetID;
    logic [1:0]            WBID;
    logic [2:0]            MEMID;
    logic [3:0]            EXID;
    logic [8:0]            finalCRLTID;
    // prediction signals carried through ID
    logic                  predict_taken_ID;
    logic [DATA_WIDTH-1:0] predict_target_ID;

    // EX Stage
    logic [1:0]            WBEX;
    logic [2:0]            MEMEX;
    logic [3:0]            EXEX;
    logic [DATA_WIDTH-1:0] regData1EX, regData2EX, immEX;
    logic [4:0]            Rs1EX, Rs2EX, RdEX;
    logic [3:0]            FuncEX;
    logic [DATA_WIDTH-1:0] pcEX, pcPlus4EX;
    logic [31:0]           instEX;
    logic [1:0]            forwardA, forwardB;
    logic [DATA_WIDTH-1:0] AluMuxAout, AluMuxBFwd, AluInA, AluInB;
    logic [DATA_WIDTH-1:0] AluResultEX;
    logic [3:0]            AluCtrlEX;
    logic [DATA_WIDTH-1:0] WriteDataEX;
    logic [4:0]            WriteRegEX;
    logic [DATA_WIDTH-1:0] branchTargetEX;
    logic                  pcSrcEX, IFflushEX, IDflushEX;
    logic                  branch_taken, mispredict;
    logic                  isJumpEX, isJALEX, isJALREX;
    logic [DATA_WIDTH-1:0] jalrTarget;
    logic [2:0]            funct3EX;
    // prediction signals carried through EX
    logic                  predict_taken_EX;
    logic [DATA_WIDTH-1:0] predict_target_EX;
    // byte enable
    logic [3:0]            cpu_ben;
    logic [DATA_WIDTH-1:0] shiftedWdata;

    // MEM Stage
    logic [1:0]            WBMEM;
    logic [2:0]            MEMMEM;
    logic [DATA_WIDTH-1:0] AluResMEM, writeDataMEM;
    logic [4:0]            writeRegMEM;
    logic [DATA_WIDTH-1:0] pcPlus4MEM;
    logic                  isJumpMEM;
    logic [DATA_WIDTH-1:0] dc_rdata;
    logic                  dc_ready;
    logic                  mem_read_MEM, mem_write_MEM;
    logic [2:0]            funct3MEM;
    logic [1:0]            byteOffMEM;
    logic [3:0]            cpu_benMEM;
    logic [DATA_WIDTH-1:0] shiftedWdataMEM;

    // WB Stage
    logic [1:0]            WBWB;
    logic [DATA_WIDTH-1:0] AluResWB, MEMDataWB;
    logic [4:0]            writeRegWB;
    logic [DATA_WIDTH-1:0] pcPlus4WB;
    logic                  isJumpWB;
    logic [DATA_WIDTH-1:0] finalResultWB;
    logic [DATA_WIDTH-1:0] loadResult;
    logic [2:0]            funct3WB;
    logic [1:0]            byteOffWB;

    logic                  ic_stall, dc_stall, dc_done;

    // ICache <-> Arbiter
    logic [ADDR_WIDTH-1:0] ic_mem_addr, ic_mem_rdata;
    logic                  ic_mem_read, ic_mem_ready;

    // DCache <-> Arbiter
    logic [ADDR_WIDTH-1:0] dc_mem_addr, dc_mem_rdata, dc_mem_wdata;
    logic                  dc_mem_read, dc_mem_write, dc_mem_ready;

    // Arbiter <-> UMEM
    logic                  umem_read, umem_write, umem_ready;
    logic [ADDR_WIDTH-1:0] umem_addr, umem_wdata, umem_rdata;
// ghr
    logic [$clog2(`BHT_ENTRIES)-1:0] ghr_snapshot; 
    logic [$clog2(`BHT_ENTRIES)-1:0] ghr_snapshot_ID; 
    logic [$clog2(`BHT_ENTRIES)-1:0] ghr_snapshot_EX; 
    assign pcWrite_final   = pcWrite;
    assign IFIDwrite_final = IFIDwrite;

    // =========================================================================
    // IF Stage: Instruction Fetch + Branch Prediction
    // =========================================================================
// Temporarily hardwire prediction to not taken

always_comb begin
    pcPlus4IF = pcCurrent + 32'd4;
    if      (isJALREX)                      nextPc = jalrTarget;
    else if (pcSrcEX && !predict_taken_EX)  nextPc = branchTargetEX;  // taken, not predicted
    else if (mispredict && !branch_taken)   nextPc = pcPlus4EX;        // predicted taken, actually not
    else if (predict_taken && btb_hit)      nextPc = predict_target;   // correct prediction
    else                                    nextPc = pcPlus4IF;
end

    PC pc (
        .PCInput  (nextPc),
        .PCWrite  (pcWrite_final),
        .clk      (clk),
        .reset    (rst),
        .PCaddress(pcCurrent)
    );

    BranchPredictor #(
        .DATA_WIDTH (`DATA_WIDTH),
        .BHT_ENTRIES(`BHT_ENTRIES),
        .BTB_ENTRIES(`BTB_ENTRIES)
    ) BranchPredictor_instance (
        .clk           (clk),
        .rst           (rst),
        .pc_IF         (pcCurrent),
        .update_en     (MEMEX[2]),
        .update_pc     (pcEX),
        .actual_taken  (branch_taken),
        .actual_target (branchTargetEX),
        .predict_taken (predict_taken),
        .btb_hit       (btb_hit),
        .predict_target(predict_target),
        .update_ghr    (ghr_snapshot_EX),
        .ghr_snapshot  (ghr_snapshot)
    );

    // =========================================================================
    // Memory Subsystem
    // =========================================================================

    icache #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .CACHE_SIZE(ICACHE_SIZE),
        .LATENCY   (`ICACHE_LATENCY),
        .NUM_WAYS  (ICACHE_WAYS)
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
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .CACHE_SIZE(DCACHE_SIZE),
        .LATENCY   (`DCACHE_LATENCY),
        .NUM_WAYS  (DCACHE_WAYS)
    ) D_CACHE (
        .clk      (clk),
        .rst      (rst),
        .cpu_addr (AluResMEM),
        .cpu_wdata(shiftedWdataMEM),
        .cpu_ben  (cpu_benMEM),
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
        .ic_read   (ic_mem_read),
        .ic_addr   (ic_mem_addr),
        .ic_ready  (ic_mem_ready),
        .ic_rdata  (ic_mem_rdata),
        .dc_read   (dc_mem_read),
        .dc_write  (dc_mem_write),
        .dc_addr   (dc_mem_addr),
        .dc_wdata  (dc_mem_wdata),
        .dc_ready  (dc_mem_ready),
        .dc_rdata  (dc_mem_rdata),
        .umem_read (umem_read),
        .umem_write(umem_write),
        .umem_addr (umem_addr),
        .umem_wdata(umem_wdata),
        .umem_ready(umem_ready),
        .umem_rdata(umem_rdata)
    );

    UMEM #(
        .LATENCY   (`MEM_LATENCY),
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MEM_DEPTH (MEM_DEPTH)
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
    // ID Stage: Decode, Branch Target, Hazard Detection
    // =========================================================================

    // IF/ID pipeline register
    always_ff @(posedge clk) begin
        if (rst || IFflushEX) begin
            instID            <= 32'b0;
            pcPlus4ID         <= 32'b0;
            pcID              <= 32'b0;
            predict_taken_ID  <= 1'b0;
            predict_target_ID <= 32'b0;
            ghr_snapshot_ID <= 0;
        end else if (IFIDwrite_final) begin
            instID            <= ic_inst;
            pcPlus4ID         <= pcPlus4IF;
            pcID              <= pcCurrent;
            predict_taken_ID  <= predict_taken;
            predict_target_ID <= predict_target;
            ghr_snapshot_ID <= ghr_snapshot;
        end
    end

    ControlUnit CU (
        .OpCode    (instID[6:0]),
        .wb_bundle (WBID),
        .mem_bundle(MEMID),
        .ex_bundle (EXID)
    );

    logic regWrite_en;
    assign regWrite_en = WBWB[1];

    RF Reg_Files (
        .clk      (clk),
        .rst      (rst),
        .RegWrite (regWrite_en),
        .rs1      (instID[19:15]),
        .rs2      (instID[24:20]),
        .rd       (writeRegWB),
        .WriteData(finalResultWB),
        .ReadData1(regData1ID),
        .ReadData2(regData2ID)
    );

    ImmGen imm_gen (
        .inst(instID),
        .imm (immID)
    );

    // dc_done latch — prevents re-issuing dcache request after completion
    always_ff @(posedge clk) begin
        if (rst)                                        dc_done <= 1'b0;
        else if (!ic_stall && !dc_stall)                dc_done <= 1'b0;
        else if (dc_ready && (MEMMEM[1] || MEMMEM[0])) dc_done <= 1'b1;
    end

    wire dc_ready_eff = dc_ready || dc_done;

    HDU hdu_instance (
        .IF_ID_rs1      (instID[19:15]),
        .IF_ID_rs2      (instID[24:20]),
        .ID_EX_rd       (RdEX),
        .EX_MEM_rd      (writeRegMEM),
        .ID_EX_regWrite (WBEX[1]),
        .EX_MEM_regWrite(WBMEM[1]),
        .MEM_WB_regWrite(WBWB[1]),
        .ID_EX_memRead  (MEMEX[1]),
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
        .rs1_EX      (Rs1EX),
        .rs2_EX      (Rs2EX),
        .rd_MEM      (writeRegMEM),
        .rd_WB       (writeRegWB),
        .regwrite_MEM(WBMEM[1]),
        .regwrite_WB (WBWB[1]),
        .memRead_MEM (MEMMEM[1]),
        .forwardA    (forwardA),
        .forwardB    (forwardB)
    );

    always_comb begin
        branchTargetID = pcID + immID;
        finalCRLTID    = hazardSel ? {WBID, MEMID, EXID} : 9'b0;
        mem_read_MEM   = MEMMEM[1];
        mem_write_MEM  = MEMMEM[0];
    end

    // =========================================================================
    // EX Stage: Execute
    // =========================================================================

    // ID/EX pipeline register
    always_ff @(posedge clk) begin
        if (rst || IDflushEX) begin
            {WBEX, MEMEX, EXEX} <= 9'b0;
            regData1EX          <= 32'b0;
            regData2EX          <= 32'b0;
            immEX               <= 32'b0;
            Rs1EX               <= 5'b0;
            Rs2EX               <= 5'b0;
            RdEX                <= 5'b0;
            FuncEX              <= 4'b0;
            pcEX                <= 32'b0;
            pcPlus4EX           <= 32'b0;
            instEX              <= 32'b0;
            branchTargetEX      <= 32'b0;
            funct3EX            <= 3'b0;
            predict_taken_EX    <= 1'b0;
            predict_target_EX   <= 32'b0;
            ghr_snapshot_EX     <= 0;
        end else if (!dc_stall && !ic_stall) begin
            {WBEX, MEMEX, EXEX} <= finalCRLTID;
            regData1EX          <= regData1ID;
            regData2EX          <= regData2ID;
            immEX               <= immID;
            Rs1EX               <= instID[19:15];
            Rs2EX               <= instID[24:20];
            RdEX                <= instID[11:7];
            FuncEX              <= {instID[30], instID[14:12]};
            pcEX                <= pcID;
            pcPlus4EX           <= pcPlus4ID;
            instEX              <= instID;
            branchTargetEX      <= branchTargetID;
            funct3EX            <= instID[14:12];
            predict_taken_EX    <= predict_taken_ID;
            predict_target_EX   <= predict_target_ID;
            ghr_snapshot_EX     <= ghr_snapshot_ID;
        end
    end

    // Forwarding muxes
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
    end

    // ALU Input A: LUI=0, AUIPC=PC, else rs1
    always_comb begin
        case (instEX[6:0])
            7'b0110111: AluInA = 32'b0;       // LUI
            7'b0010111: AluInA = pcEX;         // AUIPC
            default:    AluInA = AluMuxAout;
        endcase
        AluInB      = EXEX[0] ? immEX : AluMuxBFwd;
        WriteDataEX = AluMuxBFwd;
    end

    // Byte enable + store data shift
    always_comb begin
        cpu_ben      = 4'b1111;
        shiftedWdata = AluMuxBFwd;
        case (funct3EX)
            3'b000: begin // SB
                case (AluResultEX[1:0])
                    2'b00: begin cpu_ben = 4'b0001; shiftedWdata = {24'b0, AluMuxBFwd[7:0]}; end
                    2'b01: begin cpu_ben = 4'b0010; shiftedWdata = {16'b0, AluMuxBFwd[7:0], 8'b0}; end
                    2'b10: begin cpu_ben = 4'b0100; shiftedWdata = {8'b0,  AluMuxBFwd[7:0], 16'b0}; end
                    2'b11: begin cpu_ben = 4'b1000; shiftedWdata = {AluMuxBFwd[7:0], 24'b0}; end
                endcase
            end
            3'b001: begin // SH
                case (AluResultEX[1])
                    1'b0: begin cpu_ben = 4'b0011; shiftedWdata = {16'b0, AluMuxBFwd[15:0]}; end
                    1'b1: begin cpu_ben = 4'b1100; shiftedWdata = {AluMuxBFwd[15:0], 16'b0}; end
                endcase
            end
            3'b010:  begin cpu_ben = 4'b1111; shiftedWdata = AluMuxBFwd; end // SW
            default: begin cpu_ben = 4'b1111; shiftedWdata = AluMuxBFwd; end
        endcase
    end

    Decoder ALUDec (
        .Func      (FuncEX),
        .AluOp     (EXEX[3:1]),
        .AluControl(AluCtrlEX)
    );

    ALU ALUUnit (
        .A         (AluInA),
        .B         (AluInB),
        .AluControl(AluCtrlEX),
        .Result    (AluResultEX),
        .Zero      (),
        .Overflow  ()
    );

    assign WriteRegEX = RdEX;

    assign isJALEX  = (instEX[6:0] == 7'b1101111);
    assign isJALREX = (instEX[6:0] == 7'b1100111);
    assign isJumpEX = isJALEX || isJALREX;
    assign jalrTarget = {AluResultEX[31:1], 1'b0};

    // Branch condition
    always_comb begin
        case (FuncEX[2:0])
            3'b000: branch_taken = (AluResultEX == 32'b0); // BEQ
            3'b001: branch_taken = (AluResultEX != 32'b0); // BNE
            3'b100: branch_taken = (AluResultEX == 32'b1); // BLT
            3'b101: branch_taken = (AluResultEX == 32'b0); // BGE
            3'b110: branch_taken = (AluResultEX == 32'b1); // BLTU
            3'b111: branch_taken = (AluResultEX == 32'b0); // BGEU
            default: branch_taken = 1'b0;
        endcase
    end

    // Misprediction: wrong direction OR correct direction but wrong target
    assign mispredict = MEMEX[2] && (
        (branch_taken != predict_taken_EX) ||
        (branch_taken && (branchTargetEX != predict_target_EX))
    );

    assign pcSrcEX   = (MEMEX[2] && branch_taken) || isJALEX;
   assign IFflushEX = (pcSrcEX && !predict_taken_EX) || isJALREX || mispredict;
assign IDflushEX = (pcSrcEX && !predict_taken_EX) || isJALREX || mispredict;
    // =========================================================================
    // MEM Stage
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst) begin
            WBMEM           <= 2'b0;
            MEMMEM          <= 3'b0;
            AluResMEM       <= 32'b0;
            writeDataMEM    <= 32'b0;
            writeRegMEM     <= 5'b0;
            pcPlus4MEM      <= 32'b0;
            isJumpMEM       <= 1'b0;
            funct3MEM       <= 3'b0;
            byteOffMEM      <= 2'b0;
            cpu_benMEM      <= 4'b0;
            shiftedWdataMEM <= 32'b0;
        end else if (!dc_stall && !ic_stall) begin
            WBMEM           <= WBEX;
            MEMMEM          <= MEMEX;
            AluResMEM       <= AluResultEX;
            writeDataMEM    <= WriteDataEX;
            writeRegMEM     <= WriteRegEX;
            pcPlus4MEM      <= pcPlus4EX;
            isJumpMEM       <= isJumpEX;
            funct3MEM       <= funct3EX;
            byteOffMEM      <= AluResultEX[1:0];
            cpu_benMEM      <= cpu_ben;
            shiftedWdataMEM <= shiftedWdata;
        end
    end

    // =========================================================================
    // WB Stage
    // =========================================================================

    logic [DATA_WIDTH-1:0] dc_rdata_latch;

    always_ff @(posedge clk) begin
        if (rst)           dc_rdata_latch <= 32'b0;
        else if (dc_ready) dc_rdata_latch <= dc_rdata;
    end

    // Load extender
    always_comb begin
        case (funct3WB)
            3'b000: // LB — sign extend byte
                case (byteOffWB)
                    2'b00: loadResult = {{24{dc_rdata_latch[7]}},  dc_rdata_latch[7:0]};
                    2'b01: loadResult = {{24{dc_rdata_latch[15]}}, dc_rdata_latch[15:8]};
                    2'b10: loadResult = {{24{dc_rdata_latch[23]}}, dc_rdata_latch[23:16]};
                    2'b11: loadResult = {{24{dc_rdata_latch[31]}}, dc_rdata_latch[31:24]};
                    default: loadResult = 32'b0;
                endcase
            3'b001: // LH — sign extend halfword
                case (byteOffWB[1])
                    1'b0: loadResult = {{16{dc_rdata_latch[15]}}, dc_rdata_latch[15:0]};
                    1'b1: loadResult = {{16{dc_rdata_latch[31]}}, dc_rdata_latch[31:16]};
                    default: loadResult = 32'b0;
                endcase
            3'b010: loadResult = dc_rdata_latch; // LW
            3'b100: // LBU — zero extend byte
                case (byteOffWB)
                    2'b00: loadResult = {24'b0, dc_rdata_latch[7:0]};
                    2'b01: loadResult = {24'b0, dc_rdata_latch[15:8]};
                    2'b10: loadResult = {24'b0, dc_rdata_latch[23:16]};
                    2'b11: loadResult = {24'b0, dc_rdata_latch[31:24]};
                    default: loadResult = 32'b0;
                endcase
            3'b101: // LHU — zero extend halfword
                case (byteOffWB[1])
                    1'b0: loadResult = {16'b0, dc_rdata_latch[15:0]};
                    1'b1: loadResult = {16'b0, dc_rdata_latch[31:16]};
                    default: loadResult = 32'b0;
                endcase
            default: loadResult = dc_rdata_latch;
        endcase
    end

    logic stall_WB;
    assign stall_WB = dc_stall || ic_stall;

    always_ff @(posedge clk) begin
        if (rst) begin
            WBWB       <= 2'b0;
            AluResWB   <= 32'b0;
            MEMDataWB  <= 32'b0;
            writeRegWB <= 5'b0;
            pcPlus4WB  <= 32'b0;
            isJumpWB   <= 1'b0;
            funct3WB   <= 3'b0;
            byteOffWB  <= 2'b0;
        end else if (!stall_WB) begin
            WBWB       <= WBMEM;
            AluResWB   <= AluResMEM;
            MEMDataWB  <= dc_rdata_latch;
            writeRegWB <= writeRegMEM;
            pcPlus4WB  <= pcPlus4MEM;
            isJumpWB   <= isJumpMEM;
            funct3WB   <= funct3MEM;
            byteOffWB  <= byteOffMEM;
        end
    end

    // WB mux: jump → load → ALU
    assign finalResultWB = isJumpWB ? pcPlus4WB  :
                           WBWB[0]  ? loadResult  :
                                      AluResWB;

endmodule