module ALU (
    input  logic [31:0] A,
    input  logic [31:0] B,
    input  logic [3:0]  AluControl,
    output logic [31:0] Result,
    output logic        Zero,
    output logic        Overflow
);

// ALU Control Encoding:
// 4'b0000: ADD  (add, addi, lw, sw, auipc, lui)
// 4'b0001: SUB  (sub, branches)
// 4'b0010: AND  (and, andi)
// 4'b0011: OR   (or, ori)
// 4'b0100: XOR  (xor, xori)
// 4'b0101: SLL  (sll, slli)
// 4'b0110: SRL  (srl, srli)
// 4'b0111: SRA  (sra, srai)
// 4'b1000: SLT  (slt, slti  - signed)
// 4'b1001: SLTU (sltu, sltiu - unsigned)

logic [31:0] B_mux;
logic [32:0] sum_ext;
logic [4:0]  shamt;

// SUB uses 2's complement: invert B and add 1
assign B_mux   = (AluControl == 4'b0001) ? ~B : B;
assign sum_ext = {1'b0, A} + {1'b0, B_mux} + {32'b0, (AluControl == 4'b0001)};
assign shamt   = B[4:0]; // shift amount always in lower 5 bits of B

assign Overflow = ((AluControl == 4'b0000) || (AluControl == 4'b0001)) ?
                  ((A[31] == B_mux[31]) && (sum_ext[31] != A[31])) : 1'b0;

always_comb begin
    case (AluControl)
        4'b0000: Result = sum_ext[31:0];
        4'b0001: Result = sum_ext[31:0];
        4'b0010: Result = A & B;
        4'b0011: Result = A | B;
        4'b0100: Result = A ^ B;
        4'b0101: Result = A << shamt;
        4'b0110: Result = A >> shamt;
        4'b0111: Result = $signed(A) >>> shamt;
        4'b1000: Result = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0;
        4'b1001: Result = (A < B)                   ? 32'd1 : 32'd0;
        default: Result = 32'b0;
    endcase
end

assign Zero = (Result == 32'b0);

endmodule