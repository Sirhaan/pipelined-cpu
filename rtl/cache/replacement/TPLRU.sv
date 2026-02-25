

module TPLRU 
#(
    parameter NUM_WAYS  = 8,
    parameter NUM_SETS  = 64/NUM_WAYS
)(
    input  logic                             clk,
    input  logic                             rst,
    input  logic [$clog2(NUM_WAYS)-1:0]      access_way,
    input  logic [$clog2(NUM_SETS)-1:0]      set_idx,
    input  logic                             update,
    input  logic [NUM_WAYS-1:0]              valid_ways,
    output logic [$clog2(NUM_WAYS)-1:0]      victim_way
);

  
localparam TREE_DEPTH = $clog2(NUM_WAYS);

    logic [NUM_WAYS-1:0] tree [0:NUM_SETS-1];
    
  always_comb begin
    int temp_node;
    temp_node = 0;
    victim_way = 0;

    // First check for invalid way
    for (int i = 0; i < NUM_WAYS; i++) begin
        if (!valid_ways[i]) begin
            victim_way = i[$clog2(NUM_WAYS)-1:0];
        end
    end

    // Otherwise traverse tree
    for (int iterator = 0; iterator < TREE_DEPTH; iterator++) begin
        victim_way[iterator] = tree[set_idx][temp_node];
        temp_node = (temp_node << 1) + 1 + int'(tree[set_idx][temp_node]);
    end
end
 always_ff @(posedge clk) begin
    if (rst) begin
        for (int s = 0; s < NUM_SETS; s++) begin
            tree[s] = '0;
        end
    end 
    else if (update) begin
        int temp_node;
        temp_node = 0;

        for (int iterator = 0; iterator < TREE_DEPTH; iterator++) begin
            tree[set_idx][temp_node] <= 1'b1;

            temp_node = (temp_node << 1) 
                        + 1 
                        + int'(access_way[iterator]);
        end
    end
end
    
        // If all ways valid, find first with lru_bit=0
    endmodule