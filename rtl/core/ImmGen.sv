module ImmGen (
    input  logic [31:0] inst,
    output logic [31:0] imm
);

localparam I_ALU  = 7'b0010011;
localparam LOAD   = 7'b0000011;
localparam JALR   = 7'b1100111;
localparam STORE  = 7'b0100011;
localparam BRANCH = 7'b1100011;
localparam LUI    = 7'b0110111;
localparam AUIPC  = 7'b0010111;
localparam JAL    = 7'b1101111;

always_comb begin
    case (inst[6:0])
        // I-type: loads, ALU immediate, JALR
        I_ALU,
        LOAD,
        JALR:  imm = {{20{inst[31]}}, inst[31:20]};

        // S-type: stores
        STORE: imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};

        // B-type: branches — bit 0 always 0 (byte offset, always even)
        BRANCH: imm = {{19{inst[31]}}, inst[31], inst[7],
                        inst[30:25], inst[11:8], 1'b0};

        // U-type: LUI, AUIPC — upper 20 bits, lower 12 zeroed
        LUI,
        AUIPC: imm = {inst[31:12], 12'b0};

        // J-type: JAL — bit 0 always 0
        JAL:   imm = {{11{inst[31]}}, inst[31], inst[19:12],
                       inst[20], inst[30:21], 1'b0};

        default: imm = 32'b0;
    endcase
end

endmodule