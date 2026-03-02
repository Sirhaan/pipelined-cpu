// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VfunctionalTB.h for the primary calling header

#ifndef VERILATED_VFUNCTIONALTB___024ROOT_H_
#define VERILATED_VFUNCTIONALTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VfunctionalTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VfunctionalTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ functionalTB__DOT__clk;
        CData/*0:0*/ functionalTB__DOT__rst;
        CData/*0:0*/ functionalTB__DOT__perf_print;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ic_ready;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__pcWrite;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__hazardSel;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__IFIDwrite;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__MEMID;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__WBEX;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__MEMEX;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__EXEX;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__RsEX;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__RtEX;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__RdEX;
        CData/*5:0*/ functionalTB__DOT__dut__DOT__FuncEX;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__forwardA;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__forwardB;
        CData/*3:0*/ functionalTB__DOT__dut__DOT__AluCtrlEX;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__pcSrcEX;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__IFflushEX;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__WBMEM;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__MEMMEM;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__writeRegMEM;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__dc_ready;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__WBWB;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__writeRegWB;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ic_stall;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__dc_stall;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__dc_done;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ic_mem_ready;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__dc_mem_ready;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__umem_read;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__umem_write;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__umem_ready;
        CData/*0:0*/ functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write;
        CData/*0:0*/ functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__dc_ready_eff;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__stall_WB;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        CData/*6:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op;
        CData/*6:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
        CData/*1:0*/ functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state;
        CData/*4:0*/ functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    };
    struct {
        CData/*0:0*/ functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__RegWrite;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__Branch;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__MemRead;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__MemWrite;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__RegDst;
        CData/*0:0*/ functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc;
        CData/*2:0*/ functionalTB__DOT__dut__DOT__CU__DOT__ALUOp;
        CData/*0:0*/ functionalTB__DOT__perfCounter__DOT__ic_stall_prev;
        CData/*0:0*/ functionalTB__DOT__perfCounter__DOT__dc_stall_prev;
        CData/*0:0*/ functionalTB__DOT__perfCounter__DOT__branch_taken_prev;
        CData/*0:0*/ __Vdlyvval__functionalTB__DOT__clk__v0;
        CData/*0:0*/ __Vdlyvset__functionalTB__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__functionalTB__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h8e614511__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ functionalTB__DOT__dut__DOT__finalCRLTID;
        IData/*31:0*/ functionalTB__DOT__prev_pc;
        IData/*31:0*/ functionalTB__DOT__stable_count;
        IData/*31:0*/ functionalTB__DOT__pass_count;
        IData/*31:0*/ functionalTB__DOT__fail_count;
        IData/*31:0*/ functionalTB__DOT__run_checks__Vstatic__actual;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__nextPc;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__pcPlus4IF;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__signExtImmID;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__branchTargetID;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__instID;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__pcPlus4ID;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__regData1EX;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__regData2EX;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__signExtImmEX;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__AluMuxAout;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__AluMuxBFwd;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__AluInb;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__branchTargetEX;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__AluResMEM;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__writeDataMEM;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__dc_rdata;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__AluResWB;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__MEMDataWB;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__finalResultWB;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__umem_addr;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__umem_wdata;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__umem_rdata;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__dc_rdata_latch;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__pc__DOT__PCRegister;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active;
        IData/*22:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
        IData/*22:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node;
    };
    struct {
        IData/*31:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__Reg_Files__DOT__i;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum;
        IData/*31:0*/ functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__total_cycles;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__instruction_retired;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__ic_hits;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__ic_misses;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__ic_stall_cycles;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__dc_hits;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__dc_misses;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__dc_stall_cycles;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__branch_instructions;
        QData/*63:0*/ functionalTB__DOT__perfCounter__DOT__branch_mispredictions;
        VlUnpacked<QData/*36:0*/, 8> functionalTB__DOT__checks;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 128>, 2> functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 128>, 2> functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<CData/*1:0*/, 128> functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<CData/*1:0*/, 128> functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 128>, 2> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 128>, 2> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits;
        VlUnpacked<CData/*1:0*/, 128> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<CData/*1:0*/, 128> functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next;
        VlUnpacked<IData/*31:0*/, 1024> functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    double functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI;
    double functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate;
    double functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate;
    double functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h447abc80__0;
    VlTriggerScheduler __VtrigSched_h1a6779af__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlUnpacked<std::string, 8> functionalTB__DOT__check_names;

    // INTERNAL VARIABLES
    VfunctionalTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VfunctionalTB___024root(VfunctionalTB__Syms* symsp, const char* v__name);
    ~VfunctionalTB___024root();
    VL_UNCOPYABLE(VfunctionalTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
