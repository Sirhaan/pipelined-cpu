module FU(
    input [4:0] rs_EX, rt_EX,
    input [4:0] rd_MEM, rd_WB,
    input       regwrite_MEM, regwrite_WB,
    input       memRead_MEM,  // Critical!
    output reg [1:0] forwardA, forwardB
);

always_comb begin
    forwardA = 2'b00;
    forwardB = 2'b00;

    // Don't forward from load instructions in MEM stage (creates hazard)
    if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rs_EX) && !memRead_MEM) begin
        forwardA = 2'b10;
    end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rs_EX)) begin
        forwardA = 2'b01;
    end

    if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rt_EX) && !memRead_MEM) begin
        forwardB = 2'b10;
    end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rt_EX)) begin
        forwardB = 2'b01;
    end
end
endmodule
