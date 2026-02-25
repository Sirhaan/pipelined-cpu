
module FU(
    input [4:0] rs_EX, rt_EX,
    input [4:0] rd_MEM, rd_WB,
    input       regwrite_MEM, regwrite_WB,
    input       memRead_MEM,  // Added as requested
    output reg [1:0] forwardA, forwardB
);

    always_comb begin
        // Default: No forwarding
        forwardA = 2'b00;
        forwardB = 2'b00;

        // Forwarding priority: MEM stage has newer data
        // Forward to A
        if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rs_EX)) begin
            forwardA = 2'b10; // Forward from MEM stage
        end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rs_EX)) begin
            forwardA = 2'b01; // Forward from WB stage
        end

        // Forward to B  
        if (regwrite_MEM && (rd_MEM != 0) && (rd_MEM == rt_EX)) begin
            forwardB = 2'b10; // Forward from MEM stage
        end else if (regwrite_WB && (rd_WB != 0) && (rd_WB == rt_EX)) begin
            forwardB = 2'b01; // Forward from WB stage
        end
    end
endmodule
