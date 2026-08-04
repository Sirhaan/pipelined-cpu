import pkg::*;

module  UMEM #(
    parameter LATENCY = pkg::MEM_LATENCY,
        parameter ADDR_WIDTH = pkg::ADDR_WIDTH,
    parameter DATA_WIDTH = pkg::DATA_WIDTH,
    parameter MEM_DEPTH = pkg::MEM_DEPTH

)(
    input  logic        clk, rst,
    input  logic        umem_read,
    input  logic        umem_write,
    input  logic [ADDR_WIDTH-1:0] umem_addr,
    input  logic [DATA_WIDTH-1:0] umem_wdata,
    output logic        umem_ready,
    output logic [DATA_WIDTH-1:0] umem_rdata
);

    // Keep your RAM and timer, remove ALL arbitration logic
 (* ram_style = "block" *)
    logic [DATA_WIDTH-1:0] ram [0:(1<<MEM_DEPTH)-1];
    logic [4:0]  timer;
    logic        busy;
initial begin
    $readmemh(pkg::PROG_FILE_PERF, ram);
end
    always_ff @(posedge clk) begin
        if (rst) begin
            busy       <= 0;
            timer      <= 0;
            umem_ready <= 0;
        end else begin
            umem_ready <= 0; // default
            if (!busy && (umem_read || umem_write)) begin
                busy  <= 1;
                timer <= LATENCY;
            end else if (busy) begin
                timer <= timer - 1;
                if (timer == 1) begin
                    busy       <= 0;
                    umem_ready <= 1;
                    if (umem_read)  umem_rdata <= ram[umem_addr >> 2];
                    if (umem_write) ram[umem_addr >> 2] <= umem_wdata;
                end
            end
        end
    end
endmodule