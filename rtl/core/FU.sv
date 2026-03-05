module FU (
    input  logic [4:0] rs1_EX,       // was rs_EX  — inst[19:15]
    input  logic [4:0] rs2_EX,       // was rt_EX  — inst[24:20]
    input  logic [4:0] rd_MEM,
    input  logic [4:0] rd_WB,
    input  logic       regwrite_MEM,
    input  logic       regwrite_WB,
    input  logic       memRead_MEM,
    output logic [1:0] forwardA,
    output logic [1:0] forwardB
);

always_comb begin
    forwardA = 2'b00;
    forwardB = 2'b00;

    // EX hazard takes priority over WB hazard
    // Don't forward from load in MEM — data not back from dcache yet
    if (regwrite_MEM && (rd_MEM != 5'b0) &&
        (rd_MEM == rs1_EX) && !memRead_MEM)
        forwardA = 2'b10;
    else if (regwrite_WB && (rd_WB != 5'b0) &&
             (rd_WB == rs1_EX))
        forwardA = 2'b01;

    if (regwrite_MEM && (rd_MEM != 5'b0) &&
        (rd_MEM == rs2_EX) && !memRead_MEM)
        forwardB = 2'b10;
    else if (regwrite_WB && (rd_WB != 5'b0) &&
             (rd_WB == rs2_EX))
        forwardB = 2'b01;
end

endmodule