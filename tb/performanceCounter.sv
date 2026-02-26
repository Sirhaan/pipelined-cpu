`include "config.svh"


module performanceCounter (
    input logic clk , rst ,
    // cache stall hit and miss signals
    input logic ic_stall , dc_stall , ic_ready , dc_ready ,
    // for instruction retired from Wb stage
    input logic reg_write_wb ,
    input logic [4:0] write_reg_wb ,
    //from mem stage
    input logic mem_read_mem, //MEMEM[1]
    input logic mem_write_mem,//MEMEM[0]
    // BRANCH PREDICT : for our static predictor every branch is mispredicted
    input logic branch_taken, // from pcsrcID
    input logic is_branchID , // MEMID[2] branch instruction in ID stage
  );
  logic [63:0] total_cycles ;
  logic [63:0] instruction_retired ;
  //cache performance counters
  logic [63:0] ic_stall_cycles ;
  logic[63:0] ic_misses;
  logic [63:0] ic_hits ;

  logic [63:0] dc_hits ;
  logic [63:0] dc_misses ;
  logic [63:0] dc_stall_cycles ;
  //branch performance counters
  logic [63:0] branch_instructions ;
  logic [63:0] branch_mispredictions ;
  // to calculate edge of clock
  logic ic_stall_cycles_prev;
  logic  dc_stall_cycles_prev;
  logic branch_taken_prev;
  logic ic_stall_prev;
  logic dc_stall_prev;

  //pipeline
  always_ff @(posedge clk or posedge rst)
  begin
    if (rst)
    begin
      total_cycles <= 0;
      instruction_retired <= 0;
      ic_stall_cycles <= 0;
      ic_misses <= 0;
      ic_hits <= 0;
      dc_hits <= 0;
      dc_misses <= 0;
      dc_stall_cycles <= 0;
      branch_instructions <= 0;
      branch_mispredictions <= 0;
      ic_stall_cycles_prev <= 0;
      dc_stall_cycles_prev <= 0;
      branch_taken_prev <= 0;
    end
    else
    begin
      total_cycles <= total_cycles + 1;
      ic_stall_prev <= ic_stall;
      dc_stall_prev <= dc_stall;
      branch_taken_prev <= branch_taken;


      // Count instruction retired
      if(reg_write_wb && write_reg_wb != 0 && !ic_stall && !dc_stall)
      begin
        instruction_retired <= instruction_retired + 1;
      end
      // cache performance counters
      if(ic_stall)
      begin
        if(!ic_stall_prev)
          ic_misses <= ic_misses +1;
        else
          ic_stall_cycles <= ic_stall_cycles_prev + 1;
      end
      if (ic_ready && !ic_stall && !ic_stall_prev)
      begin
        ic_hits <= ic_hits + 1;
      end
      if(dc_stall)
      begin
        if(!dc_stall_prev)
          dc_misses <= dc_misses +1;
        else
          dc_stall_cycles <= dc_stall_cycles_prev + 1;
      end
      if((mem_read_mem || mem_write_mem) && !dc_stall && dc_ready)
      begin
        dc_hits <= dc_hits + 1;
      end
      // branch instructions
      if(is_branchID && !ic_stall && !dc_stall)
      begin
        branch_instructions <= branch_instructions + 1;
      end
      if(branch_taken && !branch_taken_prev)
      begin
        branch_mispredictions <= branch_mispredictions + 1;
      end
    end
  end
  // task called by module
  task report;
    real ic_miss_rate;
    real dc_miss_rate;
    real branch_misprediction_rate;
    real CPI;
    begin
      CPI = instruction_retired > 0 ? (real'(total_cycles) / real'(instruction_retired)) : 0;
      ic_miss_rate = ic_hits + ic_misses > 0 ? (real'(ic_misses) / real'(ic_hits + ic_misses))*100 : 0;
      dc_miss_rate = dc_hits + dc_misses > 0 ? (real'(dc_misses) / real'(dc_hits + dc_misses))*100 : 0;
      branch_misprediction_rate = branch_instructions > 0 ? (real'(branch_mispredictions) / real'(branch_instructions))*100 : 0;

      $display("");
      $display("=============================================================");
      $display("  PERFORMANCE COUNTER REPORT");
      $display("=============================================================");
      $display("  Total cycles           : %0d", total_cycles);
      $display("  Instructions retired   : %0d", instr_retired);
      $display("  CPI                    : %.3f", cpi);
      $display("-------------------------------------------------------------");
      $display("  ICache hits            : %0d", ic_hits);
      $display("  ICache misses          : %0d", ic_misses);
      $display("  ICache miss rate       : %.1f%%", ic_miss_rate);
      $display("  ICache stall cycles    : %0d  (%.1f%% of total)",
               ic_stall_cycles,
               (total_cycles > 0) ? real'(ic_stall_cycles)/real'(total_cycles)*100.0 : 0.0);
      $display("-------------------------------------------------------------");
      $display("  DCache hits            : %0d", dc_hits);
      $display("  DCache misses          : %0d", dc_misses);
      $display("  DCache miss rate       : %.1f%%", dc_miss_rate);
      $display("  DCache stall cycles    : %0d  (%.1f%% of total)",
               dc_stall_cycles,
               (total_cycles > 0) ? real'(dc_stall_cycles)/real'(total_cycles)*100.0 : 0.0);
      $display("-------------------------------------------------------------");
      $display("  Branches executed      : %0d", branch_total);
      $display("  Branch mispredicts     : %0d", branch_mispredicts);
      $display("  Mispredict rate        : %.1f%%", branch_mispredict_rate);
      $display("  Flush penalty/mispredict: %0d cycles (static)",
               `BRANCH_STAGE - 1);
      $display("  Total branch penalty   : %0d cycles",
               branch_mispredicts * (`BRANCH_STAGE - 1));
      $display("=============================================================");
      $display("");
    end
  endtask

endmodule
