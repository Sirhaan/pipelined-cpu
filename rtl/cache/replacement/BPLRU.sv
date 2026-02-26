`include "config.svh"



module BPLRU #(
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

    localparam WAY_BITS = $clog2(NUM_WAYS);
    logic [NUM_WAYS-1:0] lru_bits [0:NUM_SETS-1];
    
    // Find victim: first invalid way, or first way with lru_bit=0
    always_comb begin
        victim_way = 0;
        
        // First, try to find an invalid way
        for (int i = 0; i < NUM_WAYS; i++) begin
            if (!valid_ways[i]) begin
                victim_way = i[WAY_BITS-1:0];
            
            end
        end
        
        // If all ways valid, find first with lru_bit=0
        if (&valid_ways) begin
            for (int i = 0; i < NUM_WAYS; i++) begin
                if (!lru_bits[set_idx][i]) begin
                    victim_way = i[WAY_BITS-1:0];
                 
                end
            end
        end
    end
    
    // Update LRU bits on access
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < NUM_SETS; i++) begin
                lru_bits[i] = 0;
            end
        end else if (update) begin
            // If all bits are set, clear all bits first
            if (&lru_bits[set_idx]) begin
                lru_bits[set_idx] <= 0;
            end
            
            // Set bit for accessed way
            lru_bits[set_idx][access_way] <= 1;
        end
    end

endmodule