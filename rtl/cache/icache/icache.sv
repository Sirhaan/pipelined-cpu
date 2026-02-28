`include "rtl/include/config.svh"

module icache #(
    parameter ADDR_WIDTH = `ADDR_WIDTH,
    parameter DATA_WIDTH = `DATA_WIDTH,
    parameter CACHE_SIZE = `ICACHE_SIZE,
    parameter LATENCY    = `ICACHE_LATENCY,
    parameter NUM_WAYS   = `ICACHE_WAYS
)(
    input  logic clk, rst,

    // CPU side
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic                  cpu_read,
    output logic [DATA_WIDTH-1:0] cpu_rdata,
    output logic                  cpu_ready,

    // Memory side (connected to Arbiter)
    output logic [31:0] mem_addr,
    output logic        mem_read,
    input  logic [31:0] mem_rdata,
    input  logic        mem_ready
);

    logic [ADDR_WIDTH-1:0] m_addr;
    logic [DATA_WIDTH-1:0] m_rdata;
    logic                  m_read;
    logic                  m_ready;

    // Connect internal signals to external memory ports
    assign mem_addr = m_addr;
    assign mem_read = m_read;
    assign m_rdata  = mem_rdata;
    assign m_ready  = mem_ready;

    icacheController #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .CACHE_SIZE(CACHE_SIZE),
        .NUM_WAYS(NUM_WAYS)
    ) ctrl (
        .clk(clk),
        .rst(rst),
        .cpu_addr(cpu_addr),
        .cpu_read(cpu_read),
        .cpu_rdata(cpu_rdata),
        .cpu_ready(cpu_ready),
        .mem_addr(m_addr),
        .mem_read(m_read),
        .mem_rdata(m_rdata),
        .mem_ready(m_ready)
    );

endmodule