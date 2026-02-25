module UnifiedMemory#(
    parameter ADDR_WIDTH = 10,       // 2^10 = 1024 entries
    parameter DATA_WIDTH = 32
) (
    input clk , rst ,
    // icache 
    input [31:0] ic_addr ,
    input ic_read , 
    output reg [31:0] ic_rdata ,
    output reg ic_ready ,
    // dcache
    input [31:0] dc_addr ,
    input dc_read ,
    input dc_write ,
    input [31:0] dc_wdata ,
    output reg [31:0] dc_rdata ,
    output reg dc_ready
);
logic dc_active = dc_read || dc_write; 
logic ic_active = ic_read && !dc_active;  // prioritize D-cache if both active

// memory muxes
logic [31:0] mem_addr = ic_active ? ic_addr : dc_addr;  
logic mem_read = dc_read ? dc_read : ic_read;
logic mem_write = dc_write;  // only D-cache writes
logic [31:0] mem_wdata = dc_wdata;  // only D-cache
logic [31:0] mem_rdata;
logic mem_ready;

logic [31:0] timer;
    logic        busy;
    logic [DATA_WIDTH-1:0] ram [0:(1<<ADDR_WIDTH)-1]; 

 //TEST data
    initial begin
       $readmemh("data.hex", ram);
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


always_comb begin
    ic_rdata = ic_active ? mem_rdata : 32'b0;
    dc_rdata = dc_active ? mem_rdata : 32'b0;
    ic_ready = mem_ready && ic_active;
    dc_ready = mem_ready && dc_active;
end
endmodule
