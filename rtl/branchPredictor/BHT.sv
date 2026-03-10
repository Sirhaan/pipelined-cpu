`include "config.svh"

module BHT # (
    parameter ENTRIES = `BHT_ENTRIES,
    parameter DATA_WIDTH = `DATA_WIDTH 
) (
    input logic clk, rst,
    input logic [DATA_WIDTH-1:0] pc_IF,
    input logic  actual_taken,
     input logic update_en, 
     input logic [DATA_WIDTH-1:0] update_pc,
     input logic [INDEX_WIDTH-1:0] update_ghr,
     output logic [INDEX_WIDTH-1:0] ghr_snapshot,
    output logic  predict_taken
);
localparam INDEX_WIDTH = $clog2(ENTRIES);
//GHR
logic [INDEX_WIDTH-1:0] GHR;

always_ff @(posedge clk or posedge rst) begin
    if (rst) GHR <= '0;
    else if (update_en)
        GHR <= {GHR[INDEX_WIDTH-2:0], actual_taken};
end

assign ghr_snapshot = GHR;


logic [ENTRIES-1:0] counter_update_en;
logic [ENTRIES - 1:0] prediction;
always_comb begin
    counter_update_en = 0;
    if (update_en) begin
        counter_update_en[update_pc[INDEX_WIDTH+1:2] ^ update_ghr] = 1;
    end
end

SaturatingCounter SaturatingCounter_instance [ENTRIES -1 : 0] (
    .clk(clk),
    .rst(rst),
    .taken(actual_taken),
    .update_en(counter_update_en),
    .predict(prediction)
);

assign predict_taken = prediction[pc_IF[INDEX_WIDTH+1:2] ^ GHR]; // MSB indicates taken or not

endmodule