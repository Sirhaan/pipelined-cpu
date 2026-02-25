module HDU( // @suppress "File contains multiple design units"
    input [4:0] IF_ID_rs,
    input [4:0] IF_ID_rt,
    input [4:0] ID_EX_rt,
    input [4:0] ID_EX_rd,
    input [4:0] EX_MEM_rd,
    input       ID_EX_regWrite,
    input       EX_MEM_regWrite,
    input       MEM_WB_regWrite,  // Fixed: Added this port
    input       ID_EX_memRead,
    input       isBranch,
    input       ic_ready,
    input       dc_ready,
    input       mem_read_EX,
    input       mem_write_EX,
    input [1:0] forwardA,      // From forwarding unit
    input [1:0] forwardB,      // From forwarding unit
    output reg  pcWrite,
    output reg  IF_ID_write,
    output reg  hazardSel,
    output reg  ic_stall,
    output reg  dc_stall
);

    wire load_use_hazard;
    wire branch_hazard_EX, branch_hazard_MEM;

    // Detect hazards
    assign load_use_hazard = ID_EX_memRead && 
                            ((ID_EX_rt == IF_ID_rs) || (ID_EX_rt == IF_ID_rt));
    
    assign branch_hazard_EX = isBranch && ID_EX_regWrite && (ID_EX_rd != 0) &&
                            ((ID_EX_rd == IF_ID_rs) || (ID_EX_rd == IF_ID_rt));
    
    assign branch_hazard_MEM = isBranch && EX_MEM_regWrite && (EX_MEM_rd != 0) &&
                             ((EX_MEM_rd == IF_ID_rs) || (EX_MEM_rd == IF_ID_rt));

    always_comb begin
        // Default: no stalls
        ic_stall = 1'b0;
        dc_stall = 1'b0;
        pcWrite = 1'b1;
        IF_ID_write = 1'b1;
        hazardSel = 1'b1;

        // Priority 1: Cache stalls
        if (!ic_ready) begin
            ic_stall = 1'b1;
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 2: Data cache stall (only when actually accessing memory)
        else if ((mem_read_EX || mem_write_EX) && !dc_ready) begin
            dc_stall = 1'b1;
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 3: Load-use hazard (check if forwarding can't resolve it)
        else if (load_use_hazard && (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
        // Priority 4: Branch hazards
        else if ((branch_hazard_EX || branch_hazard_MEM) && 
                (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel = 1'b0;
        end
    end

    always @(*) begin
        $display("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b → pcWrite=%b",
                 ic_stall, dc_stall, mem_read_EX, dc_ready, pcWrite);
        $display("HDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b",
                 load_use_hazard, branch_hazard_EX, branch_hazard_MEM);
    end
endmodule