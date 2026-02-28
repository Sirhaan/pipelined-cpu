module MemoryArbitrator(
    input logic clk, rst,
    // Instruction Cache Interface
    input  logic        ic_read,
    input  logic [31:0] ic_addr,
    output logic        ic_ready,
    output logic [31:0] ic_rdata,
    
    // Data Cache Interface
    input  logic        dc_read,
    input  logic        dc_write,
    input  logic [31:0] dc_addr,
    input  logic [31:0] dc_wdata,
    output logic        dc_ready,
    output logic [31:0] dc_rdata,
    
    // Unified Memory Interface
    output logic        umem_read,
    output logic        umem_write,
    output logic [31:0] umem_addr,
    output logic [31:0] umem_wdata,
    input  logic        umem_ready,
    input  logic [31:0] umem_rdata
);

    // Directly route read data to both caches
    assign ic_rdata = umem_rdata;
    assign dc_rdata = umem_rdata;

    // State machine to lock the bus
    typedef enum logic [1:0] {SERVE_IC, SERVE_DC , IDLE} state_t;
    state_t state, next_state;

    always_ff @(posedge clk) begin
        if (rst) state <= SERVE_IC;
        else     state <= next_state;
    end

    always_comb begin
        next_state = state;
        ic_ready   = 1'b0;
        dc_ready   = 1'b0;
        umem_read  = 1'b0;
        umem_write = 1'b0;
        umem_addr  = 32'b0;
        umem_wdata = 32'b0;

        case (state)
          IDLE: begin
    if (dc_read || dc_write) begin
        next_state = SERVE_DC;
        umem_read  = dc_read;
        umem_write = dc_write;
        umem_addr  = dc_addr;
        umem_wdata = dc_wdata;
    end else if (ic_read) begin
        next_state = SERVE_IC;
        umem_read  = 1'b1;
        umem_addr  = ic_addr;
    end
end

SERVE_IC: begin
    umem_read = 1'b1;
    umem_addr = ic_addr;
    if (umem_ready) begin
        ic_ready   = 1'b1;
        next_state = IDLE;   // go to IDLE, not directly to SERVE_DC
    end
end

SERVE_DC: begin
    umem_read  = dc_read;
    umem_write = dc_write;
    umem_addr  = dc_addr;
    umem_wdata = dc_wdata;
    if (umem_ready) begin
        dc_ready   = 1'b1;
        next_state = IDLE;
    end
end
          default : next_state = IDLE;   
        
        endcase
    end
endmodule