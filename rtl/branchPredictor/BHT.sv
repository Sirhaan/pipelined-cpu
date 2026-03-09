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
    output logic  predict_taken
);
localparam INDEX_WIDTH = $clog2(ENTRIES);

logic [ENTRIES-1:0] counter_update_en;
logic [ENTRIES - 1:0] prediction;
always_comb begin
    counter_update_en = 0;
    if (update_en) begin
        counter_update_en[update_pc[INDEX_WIDTH+1:2]] = 1;
    end
end

SaturatingCounter SaturatingCounter_instance [ENTRIES -1 : 0] (
    .clk(clk),
    .rst(rst),
    .taken(actual_taken),
    .update_en(counter_update_en),
    .predict(prediction)
);

assign predict_taken = prediction[pc_IF[INDEX_WIDTH+1:2]]; // MSB indicates taken or not

endmodule