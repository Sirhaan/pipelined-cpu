
module PC(
    input [31:0] PCInput,
    input PCWrite,      // From Hazard Detection Unit
    input clk,
    input reset,
    output [31:0] PCaddress
);

    reg [31:0] PCRegister;

    always_ff @(posedge clk) begin
        if (reset) begin
            PCRegister <= 32'b0;
        end 
        // In a pipeline, we update every cycle unless PCWrite is LOW (Stall)
        else if (PCWrite) begin 
            PCRegister <= PCInput;
        end
    end

    assign PCaddress = PCRegister;

endmodule

