module SlowMemoryI #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LATENCY    = 2
)(
    input  logic                   clk, rst,
    /*verilator lint_off UNUSED*/
    input  logic [ADDR_WIDTH-1:0]  mem_addr,
    /*verilator lint_on UNUSED*/
    input  logic [DATA_WIDTH-1:0]  mem_wdata,
    input  logic                   mem_read, mem_write,
    output logic [DATA_WIDTH-1:0]  mem_rdata,
    output logic                   mem_ready
);
    logic [31:0] timer;
    logic        busy;
    logic [DATA_WIDTH-1:0] ram [0:1023]; 

    // Initializing memory with some test data
    initial begin
   $readmemh("program.hex", ram);
   $display("SlowMemoryI ram[0]=%h", ram[0]);
    $display("SlowMemoryI ram[1]=%h", ram[1]);
    $display("SlowMemoryI ram[2]=%h", ram[2]);
    end

   always_ff @(posedge clk) begin
    if (rst) begin
        timer     <= 0;
        busy      <= 0;
        mem_ready <= 0;
        mem_rdata <= 0;
    end else begin
        mem_ready <= 0;  // default: clear every cycle
        
        if ((mem_read || mem_write) && !busy) begin
            busy  <= 1;
            timer <= LATENCY;
        end else if (busy) begin
            if (timer > 1) begin
                timer <= timer - 1;
                if (timer == 2 && !mem_write)
                    mem_rdata <= ram[mem_addr[11:2]];  // pre-load one cycle early
            end else begin
                busy      <= 0;
                mem_ready <= 1;  // data already loaded last cycle
                if (mem_write) ram[mem_addr[11:2]] <= mem_wdata;
            end
        end
    end
end
endmodule
