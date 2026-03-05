module PC (
    input  logic        clk,
    input  logic        reset,
    input  logic [31:0] PCInput,
    input  logic        PCWrite,
    output logic [31:0] PCaddress
);

    logic [31:0] PCRegister;

    always_ff @(posedge clk) begin
        if (reset)        PCRegister <= 32'h00000000; // RV32I reset vector
        else if (PCWrite) PCRegister <= PCInput;
    end

    assign PCaddress = PCRegister;

endmodule