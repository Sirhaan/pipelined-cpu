// single cycle to pipelined cpu
/********************************************************************************************************************************** */
module RF( // @suppress "Design unit name 'Reg_Files' does not match file name 'PipelinedCpu'"
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
