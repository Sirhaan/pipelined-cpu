module ControlUnit(
    input logic [6:0] OpCode,
    output logic [1:0] wb_bundle,
    output logic [3:0]ex_bundle,
    output logic [2:0]mem_bundle
);
localparam R_TYPE = 7'b0110011;
localparam I_TYPE = 7'b0010011;
localparam LOAD   = 7'b0000011;
localparam STORE  = 7'b0100011;
localparam BRANCH = 7'b1100011;
localparam JAL    = 7'b1101111;
localparam JALR   = 7'b1100111;
localparam LUI    = 7'b0110111;
localparam AUIPC  = 7'b0010111;


always_comb begin
    wb_bundle = 2'b0;
    ex_bundle = 4'b0;
    mem_bundle = 3'b0;
    case(OpCode)
        R_TYPE:  begin wb_bundle = 2'b10; ex_bundle = 4'b010_0; end // RegWrite, R-type ALU
        I_TYPE:   begin wb_bundle = 2'b10; ex_bundle = 4'b011_1; end // RegWrite, I-type ALU, AluSrc=imm
        LOAD:    begin wb_bundle = 2'b11; mem_bundle  = 3'b010; ex_bundle = 4'b000_1; end // MemToReg, MemRead
        STORE:   begin                    mem_bundle  = 3'b001; ex_bundle = 4'b000_1; end // MemWrite
        BRANCH:  begin                    mem_bundle  = 3'b100; ex_bundle = 4'b001_0; end // Branch
        JAL:     begin wb_bundle = 2'b10; ex_bundle = 4'b000_1; end // Jump, writes PC+4
        JALR:    begin wb_bundle = 2'b10; ex_bundle = 4'b000_1; end // Jump, writes PC+4
        LUI:     begin wb_bundle = 2'b10; ex_bundle = 4'b000_1; end // ⚠ needs pipeline support
        AUIPC:   begin wb_bundle = 2'b10; ex_bundle = 4'b000_1; end // ⚠ needs pipeline support
        default: begin wb_bundle = 2'b00; mem_bundle  = 3'b000; ex_bundle = 4'b000_0; end
    endcase
end

endmodule