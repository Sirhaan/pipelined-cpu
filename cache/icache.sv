module icache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter CACHE_SIZE = 256,
    parameter LATENCY    = 2,
    parameter NUM_WAYS   = 2
)(
    input  logic clk, rst,

    // CPU side
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic                  cpu_read,
    output logic [DATA_WIDTH-1:0] cpu_rdata,
    output logic                  cpu_ready
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


    SlowMemoryI #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .LATENCY(LATENCY)
    ) mem (
        .clk(clk),
        .rst(rst),

        .mem_addr(m_addr),
        .mem_read(m_read),
        .mem_write(1'b0),          // NEVER WRITE from I-cache
        .mem_wdata('0),            // unused

        .mem_rdata(m_rdata),
        .mem_ready(m_ready)
    );

endmodule
