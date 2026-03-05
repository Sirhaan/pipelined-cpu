
module Decoder(
    input logic [3:0] Func,
    input logic [2:0] AluOp,
    output logic [3:0] AluControl
);

    always_comb begin
        AluControl = 4'b0000; // Default to AND
        case (AluOp)
            3'b000: AluControl = 4'b0010; // ADD (for LW/SW/ADDI)
            3'b001: begin
                case(Func[2:0])
                  3'b000: AluControl = 4'b0001; // BEQ  → SUB, check Zero
                3'b001: AluControl = 4'b0001; // BNE  → SUB, check !Zero
                3'b100: AluControl = 4'b1000; // BLT  → SLT  (signed)
                3'b101: AluControl = 4'b1000; // BGE  → SLT  (signed), check !result
                3'b110: AluControl = 4'b1001; // BLTU → SLTU (unsigned)
                3'b111: AluControl = 4'b1001; // BGEU → SLTU, check !result
                default: AluControl = 4'b0001;
            endcase
            end
            3'b010: begin // R-type instructions
            case (Func) // {funct7[5], funct3}
                4'b0_000: AluControl = 4'b0000; // ADD
                4'b1_000: AluControl = 4'b0001; // SUB
                4'b0_001: AluControl = 4'b0101; // SLL
                4'b0_010: AluControl = 4'b1000; // SLT
                4'b0_011: AluControl = 4'b1001; // SLTU
                4'b0_100: AluControl = 4'b0100; // XOR
                4'b0_101: AluControl = 4'b0110; // SRL
                4'b1_101: AluControl = 4'b0111; // SRA
                4'b0_110: AluControl = 4'b0011; // OR
                4'b0_111: AluControl = 4'b0010; // AND
                default:  AluControl = 4'b0000;
            endcase
        
            end
            3'b011: begin
                  case (Func)
                4'b0_000: AluControl = 4'b0000; // ADDI
                4'b0_001: AluControl = 4'b0101; // SLLI
                4'b0_010: AluControl = 4'b1000; // SLTI
                4'b0_011: AluControl = 4'b1001; // SLTIU
                4'b0_100: AluControl = 4'b0100; // XORI
                4'b0_101: AluControl = 4'b0110; // SRLI
                4'b1_101: AluControl = 4'b0111; // SRAI
                4'b0_110: AluControl = 4'b0011; // ORI
                4'b0_111: AluControl = 4'b0010; // ANDI
                default:  AluControl = 4'b0000;
            endcase
            end

            default: AluControl = 4'b0000;
        endcase
    end
endmodule
