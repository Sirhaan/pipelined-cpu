module dcache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CACHE_SIZE = 256,
    parameter LATENCY    = 2,
    parameter NUM_WAYS = 2
)(
    input  logic clk, rst,
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic [DATA_WIDTH-1:0] cpu_wdata,
    input  logic cpu_read, cpu_write,
    output logic [DATA_WIDTH-1:0] cpu_rdata,
    output logic cpu_ready,
    // Memory side (connected to UnifiedMemory)
    output [31:0] mem_addr,
output [31:0] mem_wdata,
output        mem_read,
output        mem_write,
input  [31:0] mem_rdata,
input         mem_ready
);

    logic [ADDR_WIDTH-1:0] m_addr;
    logic [DATA_WIDTH-1:0] m_wdata, m_rdata;
    logic m_read, m_write, m_ready;

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
        .mem_addr(m_addr), .mem_wdata(m_wdata),
        .mem_read(m_read), .mem_write(m_write),
        .mem_rdata(m_rdata), .mem_ready(m_ready)
    );

 
endmodule