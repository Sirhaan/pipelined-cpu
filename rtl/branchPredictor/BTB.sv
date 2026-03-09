`include "config.svh"



module BTB #(
    parameter ENTRIES = `BTB_ENTRIES,
    parameter DATA_WIDTH = `DATA_WIDTH 
) (
    input logic clk, rst,
    input logic [DATA_WIDTH-1:0] pc_IF,
     input logic update_en, 
     input logic [DATA_WIDTH-1:0] update_pc,
     input logic [DATA_WIDTH-1:0] actual_target,
    output logic  btb_hit,
    output logic [DATA_WIDTH-1:0] predict_target
);
localparam INDEX_WIDTH = $clog2(ENTRIES);
localparam TAG_WIDTH = DATA_WIDTH - INDEX_WIDTH - 2;

logic                  valid  [ENTRIES-1:0];
logic [TAG_WIDTH-1:0]  tag    [ENTRIES-1:0];
logic [DATA_WIDTH-1:0] target [ENTRIES-1:0];
logic [INDEX_WIDTH-1:0] index;
logic [TAG_WIDTH-1:0]   pc_tag;
// On reset, invalidate all entries. On update, write the new target and tag.
always_ff @(posedge clk) begin
    if (rst) begin
       valid <= '{default:0};
       tag <= '{default:0};
      target <= '{default:0};
    end else if (update_en) begin
        valid[update_pc[INDEX_WIDTH+1:2]] <= 1;
        tag[update_pc[INDEX_WIDTH+1:2]] <= update_pc[DATA_WIDTH-1:INDEX_WIDTH+2];
        target[update_pc[INDEX_WIDTH+1:2]] <= actual_target;
    end
end
assign index = pc_IF[INDEX_WIDTH+1:2];
assign pc_tag = pc_IF[DATA_WIDTH-1:INDEX_WIDTH+2];

assign btb_hit = valid[index] && tag[index] == pc_tag;
assign predict_target = target[index];

endmodule