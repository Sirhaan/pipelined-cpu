import pkg::*;

module pipelinedCpu_top(
    input  logic        clk,
    input  logic        rst,
    output logic [31:0] debug_pc,
    output logic [31:0] debug_reg28
);

    pipelinedCpu dut (
        .clk        (clk),
        .rst        (rst),
        .debug_pc   (debug_pc),
        .debug_reg28(debug_reg28)
    );

endmodule
