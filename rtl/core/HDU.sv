module HDU( 
    input  logic [4:0] IF_ID_rs1,      // was IF_ID_rs  — inst[19:15]
    input  logic [4:0] IF_ID_rs2,      // was IF_ID_rt  — inst[24:20]
    input  logic [4:0] ID_EX_rd,       // write dest in EX (always rd in RV32I)
    input  logic [4:0] EX_MEM_rd,
    input  logic       ID_EX_regWrite,
    input  logic       EX_MEM_regWrite,
    input  logic       MEM_WB_regWrite,
    input  logic       ID_EX_memRead,
    input  logic       isBranch,
    input  logic       ic_ready,
    input  logic       dc_ready,
    input  logic       mem_read_EX,
    input  logic       mem_write_EX,
    input  logic [1:0] forwardA,
    input  logic [1:0] forwardB,
    output logic       pcWrite,
    output logic       IF_ID_write,
    output logic       hazardSel,
    output logic       ic_stall,
    output logic       dc_stall
);

    logic load_use_hazard;
    logic branch_hazard_EX, branch_hazard_MEM;

    // -------------------------------------------------------------------------
    // Hazard detection
    // -------------------------------------------------------------------------

    // Load-use: LW in EX, dependent instruction in ID
    // Note: removed !dc_ready — dc_stall handles that separately
    assign load_use_hazard = ID_EX_memRead &&
                             (ID_EX_rd != 5'b0) &&
                             ((ID_EX_rd == IF_ID_rs1) ||
                              (ID_EX_rd == IF_ID_rs2));

    // Branch with result still in EX
    assign branch_hazard_EX  = isBranch &&
                                ID_EX_regWrite && (ID_EX_rd != 5'b0) &&
                                ((ID_EX_rd == IF_ID_rs1) ||
                                 (ID_EX_rd == IF_ID_rs2));

    // Branch with result still in MEM
    assign branch_hazard_MEM = isBranch &&
                                EX_MEM_regWrite && (EX_MEM_rd != 5'b0) &&
                                ((EX_MEM_rd == IF_ID_rs1) ||
                                 (EX_MEM_rd == IF_ID_rs2));

    // -------------------------------------------------------------------------
    // Stall / control logic
    // -------------------------------------------------------------------------
    always_comb begin
        ic_stall    = 1'b0;
        dc_stall    = 1'b0;
        pcWrite     = 1'b1;
        IF_ID_write = 1'b1;
        hazardSel   = 1'b1;

        // Priority 1: I-cache miss
        if (!ic_ready) begin
            ic_stall    = 1'b1;
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end

        // Priority 2: D-cache not ready
        if ((mem_read_EX || mem_write_EX) && !dc_ready) begin
            dc_stall    = 1'b1;
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end

        // Priority 3: Load-use / branch hazards
        // Only check when caches are happy
        if (!ic_stall && !dc_stall) begin
            // Load-use hazard
if (load_use_hazard &&
    ((ID_EX_rd == IF_ID_rs1 && forwardA == 2'b00) ||
     (ID_EX_rd == IF_ID_rs2 && forwardB == 2'b00))) begin
    pcWrite     = 1'b0;
    IF_ID_write = 1'b0;
    hazardSel   = 1'b0;
end
else if ((branch_hazard_EX || branch_hazard_MEM) &&
    ((ID_EX_rd == IF_ID_rs1 && forwardA == 2'b00) ||
     (ID_EX_rd == IF_ID_rs2 && forwardB == 2'b00))) begin
    pcWrite     = 1'b0;
    IF_ID_write = 1'b0;
    hazardSel   = 1'b0;
end
        end
    end

    // -------------------------------------------------------------------------
    // Debug
    // -------------------------------------------------------------------------
    always @(*) begin
        $display("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b → pcWrite=%b",
                 ic_stall, dc_stall, mem_read_EX, dc_ready, pcWrite);
        $display("HDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b",
                 load_use_hazard, branch_hazard_EX, branch_hazard_MEM);
    end

endmodule