module HDU( 
    input [4:0] IF_ID_rs,
    input [4:0] IF_ID_rt,
    input [4:0] ID_EX_rt,
    input [4:0] ID_EX_rd,
    input [4:0] EX_MEM_rd,
    input       ID_EX_regWrite,
    input       EX_MEM_regWrite,
    input       MEM_WB_regWrite,
    input       ID_EX_memRead,
    input       isBranch,
    input       ic_ready,
    input       dc_ready,
    input       mem_read_EX,
    input       mem_write_EX,
    input [1:0] forwardA,
    input [1:0] forwardB,
    output reg  pcWrite,
    output reg  IF_ID_write,
    output reg  hazardSel,
    output reg  ic_stall,
    output reg  dc_stall
);

    wire load_use_hazard;
    wire branch_hazard_EX, branch_hazard_MEM;

    // -------------------------------------------------------------------------
    // Hazard detection
    // -------------------------------------------------------------------------

    // Load-use: LW in EX, dependent instruction in ID
    assign load_use_hazard = ID_EX_memRead && !dc_ready &&
                             ((ID_EX_rt == IF_ID_rs) || (ID_EX_rt == IF_ID_rt));

    // Branch with pending result in EX stage
    assign branch_hazard_EX  = isBranch && ID_EX_regWrite  && (ID_EX_rd  != 5'b0) &&
                                ((ID_EX_rd  == IF_ID_rs) || (ID_EX_rd  == IF_ID_rt));

    // Branch with pending result in MEM stage
    assign branch_hazard_MEM = isBranch && EX_MEM_regWrite && (EX_MEM_rd != 5'b0) &&
                                ((EX_MEM_rd == IF_ID_rs) || (EX_MEM_rd == IF_ID_rt));

    // -------------------------------------------------------------------------
    // Stall / control logic — strict priority order
    // -------------------------------------------------------------------------
    always_comb begin
        // Defaults: pipeline running freely
        ic_stall    = 1'b0;
        dc_stall    = 1'b0;
        pcWrite     = 1'b1;
        IF_ID_write = 1'b1;
        hazardSel   = 1'b1;

        // ----------------------------------------------------------------
        // Priority 1: I-cache miss
        //   Freeze entire pipeline; let the icache fill complete.
        //   dc_stall is NOT raised here — the MEM stage is already frozen
        //   by ic_stall in the pipeline registers, so a pending SW/LW in
        //   MEM will quietly complete its dcache transaction in the
        //   background. When ic_stall finally drops, priority 2 will catch
        //   any still-pending dcache operation.
        // ----------------------------------------------------------------
        if (!ic_ready) begin
            ic_stall    = 1'b1;
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end

        // ----------------------------------------------------------------
        // Priority 2: D-cache not ready (load OR store)
        //   FIX: was previously only mem_read_EX — stores were never stalled,
        //   so SW would sit in MEM without dc_stall being raised, causing the
        //   pipeline to keep advancing while the write never committed.
        // ----------------------------------------------------------------
         if ((mem_read_EX || mem_write_EX) && !dc_ready) begin
            dc_stall    = 1'b1;
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end

        // ----------------------------------------------------------------
        // Priority 3: Load-use hazard
        //   Insert a bubble when LW result needed immediately and
        //   forwarding cannot resolve it (result not yet available).
        // ----------------------------------------------------------------
        if(!ic_stall && !dc_stall) begin
         if (load_use_hazard && (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end
           else if ((branch_hazard_EX || branch_hazard_MEM) &&
                 (forwardA == 2'b00 || forwardB == 2'b00)) begin
            pcWrite     = 1'b0;
            IF_ID_write = 1'b0;
            hazardSel   = 1'b0;
        end
    end

        // ----------------------------------------------------------------
        // Priority 4: Branch hazards
        //   Stall if branch depends on a result still in flight and
        //   forwarding cannot supply it in time.
        // ----------------------------------------------------------------
     
    end

    // -------------------------------------------------------------------------
    // Debug display
    // -------------------------------------------------------------------------
    always @(*) begin
        $display("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b → pcWrite=%b",
                 ic_stall, dc_stall, mem_read_EX, dc_ready, pcWrite);
        $display("HDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b",
                 load_use_hazard, branch_hazard_EX, branch_hazard_MEM);
    end

endmodule