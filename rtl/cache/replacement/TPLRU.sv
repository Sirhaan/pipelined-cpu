`include "rtl/include/config.svh"

module TPLRU 
#(
    parameter NUM_WAYS  = `DCACHE_WAYS,
    parameter NUM_SETS  = `DCACHE_SIZE / `DCACHE_WAYS
)(
    input  logic                             clk,
    input  logic                             rst,
    input  logic [$clog2(NUM_WAYS)-1:0]      access_way,
    input  logic [$clog2(NUM_SETS)-1:0]      set_idx,
    input  logic                             update,
    input  logic [NUM_WAYS-1:0]              valid_ways,
    output logic [$clog2(NUM_WAYS)-1:0]      victim_way
);

  
localparam int TREE_DEPTH = $clog2(NUM_WAYS);

    logic [NUM_WAYS-1:0] tree [NUM_SETS];

  always_comb begin
    integer temp_node;
    temp_node = 0;
    victim_way = 0;

    // First check for invalid way
    for (int i = 0; i < NUM_WAYS; i = i + 1) begin
        if (!valid_ways[i]) begin
            victim_way = i[$clog2(NUM_WAYS)-1:0];
        end
    end

    // Otherwise traverse tree
    for ( int j = 0; j < TREE_DEPTH; j = j + 1) begin
        victim_way[j] = tree[set_idx][temp_node];
        temp_node = (temp_node << 1) + 1 + (tree[set_idx][temp_node] ? 1 : 0);
    end
end
logic [NUM_WAYS-1:0] tree_next [NUM_SETS];
 always_comb begin
    integer temp_node;
    temp_node = 0;
    tree_next = tree;
    if (update) begin     
        for (int iterator = 0; iterator < TREE_DEPTH; iterator++) begin
            tree_next[set_idx][temp_node] = 1'b1;
            temp_node = (temp_node << 1) + 1 + (access_way[iterator] ? 1 : 0);
        end
    end
end

// Simple register update
always_ff @(posedge clk) begin
    if (rst) begin
        tree <= '{default: '0};
    end else begin
        tree <= tree_next;
    end
end     // If all ways valid, find first with lru_bit=0
endmodule
