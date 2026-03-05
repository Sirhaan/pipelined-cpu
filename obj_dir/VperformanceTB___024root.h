// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VperformanceTB.h for the primary calling header

#ifndef VERILATED_VPERFORMANCETB___024ROOT_H_
#define VERILATED_VPERFORMANCETB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VperformanceTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VperformanceTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ performanceTB__DOT__clk;
        CData/*0:0*/ performanceTB__DOT__rst;
        CData/*0:0*/ performanceTB__DOT__perf_print;
        CData/*0:0*/ performanceTB__DOT__break_detected;
        CData/*2:0*/ performanceTB__DOT__special_pipe;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ic_ready;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__pcWrite;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__IFIDwrite;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__MEMID;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__WBEX;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__MEMEX;
        CData/*3:0*/ performanceTB__DOT__dut__DOT__EXEX;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__Rs1EX;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__Rs2EX;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__RdEX;
        CData/*3:0*/ performanceTB__DOT__dut__DOT__FuncEX;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__pcSrcEX;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__IFflushEX;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__WBMEM;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__MEMMEM;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__writeRegMEM;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__isJumpMEM;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__dc_ready;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__WBWB;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__writeRegWB;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__isJumpWB;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ic_stall;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__dc_stall;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__dc_done;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ic_mem_ready;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__dc_mem_ready;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__umem_read;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__umem_write;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__umem_ready;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__funct3EX;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__funct3MEM;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__funct3WB;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__byteOffMEM;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__byteOffWB;
        CData/*3:0*/ performanceTB__DOT__dut__DOT__cpu_ben;
        CData/*3:0*/ performanceTB__DOT__dut__DOT__cpu_benMEM;
        CData/*0:0*/ performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write;
        CData/*0:0*/ performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__stall_WB;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        CData/*3:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
        CData/*2:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit;
    };
    struct {
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
        CData/*1:0*/ performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state;
        CData/*4:0*/ performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
        CData/*0:0*/ performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
        CData/*0:0*/ performanceTB__DOT__perfCounter__DOT__ic_stall_prev;
        CData/*0:0*/ performanceTB__DOT__perfCounter__DOT__dc_stall_prev;
        CData/*0:0*/ performanceTB__DOT__perfCounter__DOT__branch_taken_prev;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__performanceTB__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ performanceTB__DOT__dut__DOT__finalCRLTID;
        IData/*31:0*/ performanceTB__DOT__cycle_count;
        IData/*31:0*/ performanceTB__DOT__instr_count;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__nextPc;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcPlus4IF;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__ic_inst;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__immID;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__instID;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcPlus4ID;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcID;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__regData1EX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__regData2EX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__immEX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcEX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcPlus4EX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__instEX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__AluResultEX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__branchTargetEX;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__AluResMEM;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcPlus4MEM;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__dc_rdata;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__AluResWB;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pcPlus4WB;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__finalResultWB;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__umem_addr;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__umem_wdata;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__umem_rdata;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__shiftedWdata;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__shiftedWdataMEM;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__dc_rdata_latch;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__pc__DOT__PCRegister;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
        IData/*24:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
        IData/*24:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__total_cycles;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__instruction_retired;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__ic_hits;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__ic_misses;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__ic_stall_cycles;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__dc_hits;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__dc_misses;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__dc_stall_cycles;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__branch_instructions;
        QData/*63:0*/ performanceTB__DOT__perfCounter__DOT__branch_mispredictions;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>, 2> performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*24:0*/, 8>, 2> performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array;
    };
    struct {
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 2> performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<CData/*1:0*/, 8> performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<CData/*1:0*/, 8> performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next;
        VlUnpacked<IData/*31:0*/, 32> performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8>, 2> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*24:0*/, 8>, 2> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 2> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 2> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits;
        VlUnpacked<CData/*1:0*/, 8> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<CData/*1:0*/, 8> performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next;
        VlUnpacked<IData/*31:0*/, 1024> performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram;
    };
    double performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI;
    double performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate;
    double performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate;
    double performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h01766083__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VperformanceTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VperformanceTB___024root(VperformanceTB__Syms* symsp, const char* v__name);
    ~VperformanceTB___024root();
    VL_UNCOPYABLE(VperformanceTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
