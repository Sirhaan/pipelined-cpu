
`include "config.svh"

module BranchPredictor #(
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter BHT_ENTRIES = `BHT_ENTRIES,
    parameter BTB_ENTRIES = `BTB_ENTRIES
)(
    input  logic                  clk, rst,
    // IF stage
    input  logic [DATA_WIDTH-1:0] pc_IF,
    // EX stage update
    input  logic                  update_en,
    input  logic [DATA_WIDTH-1:0] update_pc,
    input  logic                  actual_taken,
    input  logic [DATA_WIDTH-1:0] actual_target,
    input  logic [$clog2(BHT_ENTRIES)-1:0] update_ghr, // GHR value at time of update
     output logic [$clog2(BHT_ENTRIES)-1:0] ghr_snapshot, // For debugging
    // outputs to IF stage
    output logic                  predict_taken,
    output logic                  btb_hit,
    output logic [DATA_WIDTH-1:0] predict_target
);


BTB  #(
    .DATA_WIDTH(DATA_WIDTH),
    .ENTRIES(BTB_ENTRIES)
) btb(
    .clk(clk),
    .rst(rst),
    .pc_IF(pc_IF),
    .update_en(update_en),
    .update_pc(update_pc),
    .actual_target(actual_target),
    .btb_hit(btb_hit),
    .predict_target(predict_target)
);


BHT #(
    .DATA_WIDTH(DATA_WIDTH),
    .ENTRIES(BHT_ENTRIES)
) bht (
    .clk(clk),
    .rst(rst),
    .pc_IF(pc_IF),
    .update_en(update_en),
    .update_pc(update_pc),
    .actual_taken(actual_taken),
    .update_ghr(update_ghr),
    .ghr_snapshot(ghr_snapshot),
    .predict_taken(predict_taken)
);
endmodule