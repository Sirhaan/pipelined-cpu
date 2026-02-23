module ControlUnit (
    input [5:0] OpCode,
    output [1:0] wb_bundle, // {RegWrite, MemtoReg}
    output [2:0] m_bundle,  // {Branch, MemRead, MemWrite}
    output [4:0] ex_bundle  // {RegDst, ALUOp[2:0], ALUSrc}
);

    // Internal registers for each control signal
    reg RegWrite, MemtoReg;
    reg Branch, MemRead, MemWrite;
    reg RegDst, ALUSrc;
    reg [2:0] ALUOp;

    always_comb begin
        // Default Values
        RegWrite = 1'b0; 
        MemtoReg = 1'b0;
        Branch   = 1'b0;
        MemRead  = 1'b0; 
        MemWrite = 1'b0;
        RegDst   = 1'b0;
        ALUSrc   = 1'b0; 
        ALUOp    = 3'b000;

        case (OpCode)
            // R-Type Instructions (add, sub, and, or, slt)
            6'b000000: begin
                RegWrite = 1'b1;
                RegDst   = 1'b1;
                ALUOp    = 3'b010; // Use Funct field for ALU
            end

            // ADDI (Add Immediate)
            6'b001000: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b000; // Force Addition
            end

            // LW (Load Word)
            6'b100011: begin
                RegWrite = 1'b1;
                MemtoReg = 1'b1;
                MemRead  = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b000; // Force Addition for address
            end

            // SW (Store Word)
            6'b101011: begin
                MemWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b000; // Force Addition for address
            end

            // BEQ (Branch if Equal)
            6'b000100: begin
                Branch   = 1'b1;
                ALUOp    = 3'b001; // Force Subtraction
            end
            
            // LUI
            6'b001111: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b100; // ALU decoder must pass imm<<16
            end

            // ORI
            6'b001101: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b011;
            end

            // ANDI  
            6'b001100: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUOp    = 3'b101;
            end

            default: begin
                // nop - all defaults already set
            end
        endcase
    end

    // Pack the bundles 
    assign wb_bundle = {RegWrite, MemtoReg};        
    assign m_bundle  = {Branch, MemRead, MemWrite}; 
    assign ex_bundle = {RegDst, ALUOp, ALUSrc};     

endmodule
module HDU( // @suppress "File contains multiple design units"
    input [4:0] IF_ID_rs,
    input [4:0] IF_ID_rt,
    input [4:0] ID_EX_rt,
    input [4:0] ID_EX_rd,
    input [4:0] EX_MEM_rd,
    input       ID_EX_regWrite,
    input       EX_MEM_regWrite,
    input       MEM_WB_regWrite,  // Fixed: Added this port
    input       ID_EX_memRead,
    input       isBranch,
    input       ic_ready,
    input       dc_ready,
    input       mem_read_EX,
    input       mem_write_EX,
    input [1:0] forwardA,      // From forwarding unit
    input [1:0] forwardB,      // From forwarding unit
    output reg  pcWrite,
    output reg  IF_ID_write,
    output reg  hazardSel,
    output reg  ic_stall,
    output reg  dc_stall
);

    wire load_use_hazard;
    wire branch_hazard_EX, branch_hazard_MEM;

    // Detect hazards
    assign load_use_hazard = ID_EX_memRead && 
                            ((ID_EX_rt == IF_ID_rs) || (ID_EX_rt == IF_ID_rt));
    
    assign branch_hazard_EX = isBranch && ID_EX_regWrite && (ID_EX_rd != 0) &&
                            ((ID_EX_rd == IF_ID_rs) || (ID_EX_rd == IF_ID_rt));
    
    assign branch_hazard_MEM = isBranch && EX_MEM_regWrite && (EX_MEM_rd != 0) &&
                             ((EX_MEM_rd == IF_ID_rs) || (EX_MEM_rd == IF_ID_rt));

    always_comb begin
        // Default: no stalls
        ic_stall = 1'b0;
        dc_stall = 1'b0;
        pcWrite = 1'b1;
        IF_ID_write = 1'b1;
        hazardSel = 1'b1;

        // Priority 1: Cache stalls
        if (!ic_ready) begin
            ic_stall = 1'b1;
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 2: Data cache stall (only when actually accessing memory)
        else if ((mem_read_EX || mem_write_EX) && !dc_ready) begin
            dc_stall = 1'b1;
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 3: Load-use hazard (check if forwarding can't resolve it)
        else if (load_use_hazard && (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 4: Branch hazards
        else if ((branch_hazard_EX || branch_hazard_MEM) && 
                (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
    end

    always @(*) begin
        $display("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b → pcWrite=%b",
                 ic_stall, dc_stall, mem_read_EX, dc_ready, pcWrite);
        $display("HDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b",
                 load_use_hazard, branch_hazard_EX, branch_hazard_MEM);
    end
endmodule
module FU(
    input [4:0] rs_EX, rt_EX,
    input [4:0] rd_MEM, rd_WB,
    input       regwrite_MEM, regwrite_WB,
    input       memRead_MEM,  // Added as requested
    output reg [1:0] forwardA, forwardB
);

    always_comb begin
        // Default: No forwarding
        forwardA = 2'b00;
        forwardB = 2'b00;

        // Forwarding priority: MEM stage has newer data
        // Forward to A
        if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rs_EX)) begin
            forwardA = 2'b10; // Forward from MEM stage
        end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rs_EX)) begin
            forwardA = 2'b01; // Forward from WB stage
        end

        // Forward to B  
        if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rt_EX)) begin
            forwardB = 2'b10; // Forward from MEM stage
        end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rt_EX)) begin
            forwardB = 2'b01; // Forward from WB stage
        end
    end
endmodule
