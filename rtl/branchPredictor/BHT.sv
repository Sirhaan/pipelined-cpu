import pkg::*;

module BHT # (
    parameter ENTRIES = pkg::BHT_ENTRIES,
    parameter DATA_WIDTH = pkg::DATA_WIDTH 
) (
    input logic clk, rst,
    input logic [DATA_WIDTH-1:0] pc_IF,
    input logic                 actual_taken,
    input logic                 update_en,
    input logic [DATA_WIDTH-1:0] update_pc,
    input logic [INDEX_WIDTH-1:0] update_ghr,
    output logic [INDEX_WIDTH-1:0] ghr_snapshot,
    output logic                 predict_taken
);
localparam INDEX_WIDTH = $clog2(ENTRIES);

logic [INDEX_WIDTH-1:0] GHR;
logic [1:0] bht [ENTRIES-1:0];
logic [INDEX_WIDTH-1:0] read_index;
logic [INDEX_WIDTH-1:0] update_index;
logic [1:0] current_state;
logic [1:0] next_state;

assign ghr_snapshot = GHR;
assign read_index   = pc_IF[INDEX_WIDTH+1:2] ^ GHR;
assign update_index = update_pc[INDEX_WIDTH+1:2] ^ update_ghr;
assign predict_taken = bht[read_index][1];

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        GHR <= '0;
        for (int i = 0; i < ENTRIES; i++) begin
            bht[i] <= 2'b00;
        end
    end else begin
        if (update_en) begin
            GHR <= {GHR[INDEX_WIDTH-2:0], actual_taken};
            bht[update_index] <= next_state;
        end
    end
end

always_comb begin
    current_state = bht[update_index];
    case (current_state)
        2'b00: next_state = actual_taken ? 2'b01 : 2'b00;
        2'b01: next_state = actual_taken ? 2'b10 : 2'b00;
        2'b10: next_state = actual_taken ? 2'b11 : 2'b01;
        2'b11: next_state = actual_taken ? 2'b11 : 2'b10;
        default: next_state = 2'b00;
    endcase
end

endmodule