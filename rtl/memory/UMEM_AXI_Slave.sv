import pkg::*;

module UMEM_AXI_Slave #(
    parameter int ADDR_WIDTH = pkg::ADDR_WIDTH,
    parameter int DATA_WIDTH = pkg::DATA_WIDTH,
    parameter int MEM_DEPTH  = pkg::MEM_DEPTH,
    parameter int LATENCY    = pkg::MEM_LATENCY
)(
    input  logic                   clk,
    input  logic                   rst,

    input  logic [ADDR_WIDTH-1:0]  s_awaddr,
    input  logic                   s_awvalid,
    output logic                   s_awready,

    input  logic [DATA_WIDTH-1:0]  s_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_wstrb,
    input  logic                   s_wvalid,
    output logic                   s_wready,

    output logic [1:0]             s_bresp,
    output logic                   s_bvalid,
    input  logic                   s_bready,

    input  logic [ADDR_WIDTH-1:0]  s_araddr,
    input  logic                   s_arvalid,
    output logic                   s_arready,

    output logic [DATA_WIDTH-1:0]  s_rdata,
    output logic [1:0]             s_rresp,
    output logic                   s_rvalid,
    input  logic                   s_rready
);

    typedef enum logic [1:0] {
        WR_IDLE,
        WR_ADDR,
        WR_DATA,
        WR_RESP
    } wr_state_t;

    typedef enum logic [1:0] {
        RD_IDLE,
        RD_ADDR,
        RD_DATA
    } rd_state_t;

    wr_state_t wr_state, wr_next_state;
    rd_state_t rd_state, rd_next_state;

    logic [ADDR_WIDTH-1:0] wr_addr_reg;
    logic [DATA_WIDTH-1:0] wr_data_reg;
    logic [DATA_WIDTH/8-1:0] wr_strb_reg;
    logic [ADDR_WIDTH-1:0] rd_addr_reg;

    logic umem_read, umem_write;
    logic [ADDR_WIDTH-1:0] umem_addr;
    logic [DATA_WIDTH-1:0] umem_wdata;
    logic umem_ready;
    logic [DATA_WIDTH-1:0] umem_rdata;

    logic [DATA_WIDTH-1:0] wr_merged_data;
    logic                  wr_need_rmw;

    UMEM #(
        .LATENCY(LATENCY),
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MEM_DEPTH(MEM_DEPTH)
    ) umem_inst (
        .clk       (clk),
        .rst       (rst),
        .umem_read (umem_read),
        .umem_write(umem_write),
        .umem_addr (umem_addr),
        .umem_wdata(umem_wdata),
        .umem_ready(umem_ready),
        .umem_rdata(umem_rdata)
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            wr_state <= WR_IDLE;
        end else begin
            wr_state <= wr_next_state;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            rd_state <= RD_IDLE;
        end else begin
            rd_state <= rd_next_state;
        end
    end

    always_comb begin
        wr_need_rmw = |(wr_strb_reg ^ 4'hF);
        wr_merged_data = umem_rdata;
        for (int i = 0; i < 4; i++) begin
            if (wr_strb_reg[i]) begin
                wr_merged_data[i*8 +: 8] = wr_data_reg[i*8 +: 8];
            end
        end
    end

    always_comb begin
        wr_next_state = wr_state;
        s_awready = 1'b0;
        s_wready = 1'b0;
        s_bvalid = 1'b0;
        s_bresp = 2'b00;
        umem_write = 1'b0;
        umem_read = 1'b0;
        umem_addr = 32'b0;
        umem_wdata = 32'b0;

        case (wr_state)
            WR_IDLE: begin
                if (s_awvalid) begin
                    wr_next_state = WR_ADDR;
                end
            end
            WR_ADDR: begin
                s_awready = 1'b1;
                if (s_wvalid) begin
                    if (wr_need_rmw) begin
                        umem_read = 1'b1;
                        umem_addr = wr_addr_reg;
                        if (umem_ready) begin
                            wr_next_state = WR_DATA;
                        end
                    end else begin
                        wr_next_state = WR_DATA;
                    end
                end
            end
            WR_DATA: begin
                s_wready = 1'b1;
                umem_write = 1'b1;
                umem_addr = wr_addr_reg;
                umem_wdata = wr_need_rmw ? wr_merged_data : wr_data_reg;
                if (umem_ready) begin
                    wr_next_state = WR_RESP;
                end
            end
            WR_RESP: begin
                s_bvalid = 1'b1;
                if (s_bready) begin
                    wr_next_state = WR_IDLE;
                end
            end
            default: wr_next_state = WR_IDLE;
        endcase
    end

    always_comb begin
        rd_next_state = rd_state;
        s_arready = 1'b0;
        s_rvalid = 1'b0;
        s_rresp = 2'b00;
        s_rdata = 32'b0;
        umem_read = 1'b0;
        umem_addr = 32'b0;

        case (rd_state)
            RD_IDLE: begin
                if (s_arvalid) begin
                    rd_next_state = RD_ADDR;
                end
            end
            RD_ADDR: begin
                s_arready = 1'b1;
                umem_read = 1'b1;
                umem_addr = rd_addr_reg;
                if (umem_ready) begin
                    rd_next_state = RD_DATA;
                end
            end
            RD_DATA: begin
                s_rvalid = 1'b1;
                s_rdata = umem_rdata;
                if (s_rready) begin
                    rd_next_state = RD_IDLE;
                end
            end
            default: rd_next_state = RD_IDLE;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            wr_addr_reg <= 32'b0;
            wr_data_reg <= 32'b0;
            wr_strb_reg <= 4'b0;
        end else if (s_awvalid && s_awready) begin
            wr_addr_reg <= s_awaddr;
        end else if (s_wvalid && s_wready) begin
            wr_data_reg <= s_wdata;
            wr_strb_reg <= s_wstrb;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            rd_addr_reg <= 32'b0;
        end else if (s_arvalid && s_arready) begin
            rd_addr_reg <= s_araddr;
        end
    end

endmodule