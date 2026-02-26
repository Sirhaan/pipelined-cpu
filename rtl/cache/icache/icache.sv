`include "config.svh"




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
    // Memory side (connected to UnifiedMemory)
    output [31:0] mem_addr,
output        mem_read,
input  [31:0] mem_rdata,
input         mem_ready
);

    // Memory interface
    logic [ADDR_WIDTH-1:0] m_addr;
    logic [DATA_WIDTH-1:0] m_rdata;
    logic                  m_read;
    logic                  m_ready;

   
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


 UnifiedMemory  #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) mem(
        .clk(clk),
        .rst(rst),
        // icache
        .ic_addr(m_addr),
        .ic_read(m_read),
        .ic_rdata(m_rdata),
        .ic_ready(m_ready),
        // dcache (not used here)
        .dc_addr(0),
        .dc_read(0),
        .dc_write(0),
        .dc_wdata(0),
        .dc_rdata(),
        .dc_ready()
    );

endmodule
