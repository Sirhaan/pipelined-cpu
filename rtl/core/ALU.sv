module ALU( // @suppress "File contains multiple design units"
    input[31:0] A, // 1st operand
    input [31:0] B,
    input [3:0] AluControl, // intruction from alu decoder
    output reg [31:0] Result,
    output Zero,
    output Overflow
);

wire [31:0]  sum;
wire [31:0]  B_sum_operand; // for subs in 2's complement
wire carry_out;


assign B_sum_operand = AluControl[0] ? ~B + AluControl[0] : B; // AluControl[0] decide between sub(1) and add(0)
assign {carry_out, sum} = A+B_sum_operand; //carry out +sum is net result which is equal to a +b
// CORRECT:
assign Overflow = (AluControl[3:2] == 2'b00) ? ((A[31] == B_sum_operand[31]) && (A[31] != sum[31])) : 1'b0;
    always @ (*)begin // @suppress "Behavior-specific 'always' should be used instead of general purpose 'always'"
        Result = 32'b0;
      case (AluControl)
            4'b0000: Result = A & B;   // AND
            4'b0001: Result = A | B;   // OR
            4'b0010: Result = sum;     // ADD (Used by add, addi, lw, sw)
            4'b0011: Result = sum;     // SUB (Used by sub, slt, beq, bne)
            4'b0111: Result = (sum[31]) ? 32'd1 : 32'd0; // SLT (uses subtraction result sign bit)
            4'b1100: Result = ~(A | B);  // NOR   // OR / ORI
            4'b1000: Result = B << 16;  
            default: Result = 32'b0;
        endcase
    end
    assign Zero = (Result == 32'b0)? 1'b1 : 1'b0;


endmodule