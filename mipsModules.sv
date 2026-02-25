// single cycle to pipelined cpu
/********************************************************************************************************************************** */
module Reg_Files( // @suppress "Design unit name 'Reg_Files' does not match file name 'PipelinedCpu'"
    input clk,
    input rst,
    input RegWrite, //control
    input [4:0] ReadReg1 , //Address of register
    input [4:0] ReadReg2,
    input [4:0] WriteReg,
    output reg [31:0] ReadData1,
    output reg [31:0] ReadData2,
    input [31:0] WriteData


);

reg [31:0] Register [31:0];
integer i;
always_ff @(posedge clk) begin
Register[0] <= 32'b0; 
    if(rst) begin
        for ( i = 0; i < 32; i++) begin
            Register[i] <= 32'b0;
        end
    end
        else if(RegWrite)begin
            if(WriteReg!=5'b0)begin
                Register[WriteReg] <= WriteData;
            end
        end
end
always_comb begin
    ReadData1 = Register[ReadReg1];
    ReadData2 = Register[ReadReg2];
end


endmodule
// Module 2 : ALU 
/******************************************************************************** */
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
/******************************************************************************* */
//Module:3 Alu decoder

module ALU_Decoder(
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

module Program_Counter(
    input [31:0] PCInput,
    input PCWrite,      // From Hazard Detection Unit
    input clk,
    input reset,
    output [31:0] PCaddress
);

    reg [31:0] PCRegister;

    always_ff @(posedge clk) begin
        if (reset) begin
            PCRegister <= 32'b0;
        end 
        // In a pipeline, we update every cycle unless PCWrite is LOW (Stall)
        else if (PCWrite) begin 
            PCRegister <= PCInput;
        end
    end

    assign PCaddress = PCRegister;

endmodule
//module 10:instruction register***********************************************************
module Instruction_Register (
    input  logic        clk, IRWrite, rst,
    input  logic [31:0] Instruction_In,
    output logic [31:0] Instruction_Out
);

    always_ff @(posedge clk) begin
        if (rst)
            Instruction_Out <= 32'b0;
        else if (IRWrite)
            Instruction_Out <= Instruction_In;
    end

endmodule
/***************************************************************** */
//module 11 : data memory
module Memory(
    input [31:0] address,
    input [31:0] Write_data,
    input  MemWrite,
    input  MemRead,
    input CLK,
    output reg [31:0] Read_data
);
reg[31:0] memory [0:255];
wire[7:0] index = address[9:2];
integer i; 

initial begin 
    for (i = 0; i < 256; i = i + 1) begin
        memory[i] = 32'd0;
    end
    $readmemh("program.hex", memory);
    
end
    


//write sequential
always_ff @(posedge CLK) begin
    if(MemWrite)begin
        memory[index] <= Write_data;
    end
end
// read is combinational
always_comb begin
    if(MemRead)begin
        Read_data = memory[index];
    end
    else
        Read_data = 32'b0;
end
endmodule
