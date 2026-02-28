`include "config.svh"

module dcache #(
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter CACHE_SIZE = `DCACHE_SIZE,
    parameter LATENCY    = `DCACHE_LATENCY,
    parameter NUM_WAYS   = `DCACHE_WAYS
) (
    input  logic clk, rst,
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic [DATA_WIDTH-1:0] cpu_wdata,
    input  logic cpu_read, cpu_write,
    output logic [DATA_WIDTH-1:0] cpu_rdata,
    output logic cpu_ready,
    output logic [31:0] mem_addr,
    output logic [31:0] mem_wdata,
    output logic        mem_read,
    output logic        mem_write,
    input  logic [31:0] mem_rdata,
    input  logic        mem_ready
);

    logic dcache_req_valid;
    logic [ADDR_WIDTH-1:0] dcache_req_addr;
    logic [DATA_WIDTH-1:0] dcache_req_wdata;
    logic                  dcache_req_write;
    logic [DATA_WIDTH-1:0] dcache_req_rdata;
    logic                  dcache_req_ready;

    // Connect internal signals to external memory ports
    assign mem_addr        = dcache_req_addr;
    assign mem_wdata       = dcache_req_wdata;
    assign mem_read        = dcache_req_valid;
    assign mem_write       = dcache_req_write;
    assign dcache_req_rdata = mem_rdata;
    assign dcache_req_ready = mem_ready;

    dcacheController #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .CACHE_SIZE(CACHE_SIZE),
        .NUM_WAYS(NUM_WAYS)
    ) ctrl (
        .clk(clk), .rst(rst),
        .cpu_addr(cpu_addr), .cpu_wdata(cpu_wdata),
        .cpu_read(cpu_read), .cpu_write(cpu_write),
        .cpu_rdata(cpu_rdata), .cpu_ready(cpu_ready),
        .mem_addr(dcache_req_addr), .mem_wdata(dcache_req_wdata),
        .mem_read(dcache_req_valid), .mem_write(dcache_req_write),
        .mem_rdata(dcache_req_rdata), .mem_ready(dcache_req_ready)
    );

    always_ff @(posedge clk) begin
        if (!rst) begin
            $display("T=%0t [DCACHE]  mem_read=%b, mem_write=%b, mem_ready=%b, addr=%08h",
                     $time, mem_read, mem_write, mem_ready, mem_addr);
        end
    end

endmodule