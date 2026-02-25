
module Decoder(
    input [5:0] Func,
    input [2:0] AluOp,
    output reg [3:0] AluControl
);

    always_comb begin
        case (AluOp)
            3'b000: AluControl = 4'b0010; // ADD (for LW/SW/ADDI)
            3'b001: AluControl = 4'b0110; // SUB (for BEQ)
            3'b010: begin // R-type instructions
                case (Func)
                    6'b100000: AluControl = 4'b0010; // ADD
                    6'b100010: AluControl = 4'b0110; // SUB
                    6'b100100: AluControl = 4'b0000; // AND
                    6'b100101: AluControl = 4'b0001; // OR
                    6'b101010: AluControl = 4'b0111; // SLT
                    default:   AluControl = 4'b0000;
                endcase
            end
            3'b011: AluControl = 4'b0001; // OR (for ORI)
            3'b100: AluControl = 4'b1000; // LUI (shift left 16)
            3'b101: AluControl = 4'b0000; // AND (for ANDI)
            default: AluControl = 4'b0000;
        endcase
    end
endmodule
