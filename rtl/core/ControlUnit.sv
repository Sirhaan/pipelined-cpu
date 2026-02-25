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
