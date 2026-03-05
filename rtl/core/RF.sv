// single cycle to pipelined cpu
/********************************************************************************************************************************** */
module RF( // @suppress "Design unit name 'Reg_Files' does not match file name 'PipelinedCpu'"
    input clk,
    input rst,
    input RegWrite, //control
    input [4:0] rs1 , //Address of register
    input [4:0] rs2,
    input [4:0] rd,
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
            if(rd!=5'b0)begin
                Register[rd] <= WriteData;
            end
        end
end
always_comb begin
    ReadData1 = Register[rs1];
    ReadData2 = Register[rs2];
end


endmodule
