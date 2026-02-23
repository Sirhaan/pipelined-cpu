// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VpipelinedCpuTest.h for the primary calling header

#ifndef VERILATED_VPIPELINEDCPUTEST___024ROOT_H_
#define VERILATED_VPIPELINEDCPUTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VpipelinedCpuTest___024unit;


class VpipelinedCpuTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VpipelinedCpuTest___024root final : public VerilatedModule {
  public:
    // CELLS
    VpipelinedCpuTest___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ pipelinedCpuTest__DOT__clk;
        CData/*0:0*/ pipelinedCpuTest__DOT__rst;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__pcWrite;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__IFIDwrite;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__WBEX;
        CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__MEMEX;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__EXEX;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__RsEX;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__RtEX;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__RdEX;
        CData/*5:0*/ pipelinedCpuTest__DOT__dut__DOT__FuncEX;
        CData/*3:0*/ pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__pcSrcEX;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__IFflushEX;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__WBMEM;
        CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__MEMMEM;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__writeRegMEM;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_ready;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__WBWB;
        CData/*4:0*/ pipelinedCpuTest__DOT__dut__DOT__writeRegWB;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ic_stall;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_stall;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_done;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        CData/*6:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op;
        CData/*6:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
        CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
        CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en;
        CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ pipelinedCpuTest__DOT__dut__DOT__finalCRLTID;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__nextPc;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__signExtImmID;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__branchTargetID;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__instID;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__regData1EX;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__regData2EX;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__signExtImmEX;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__AluMuxAout;
    };
    struct {
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__AluInb;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__branchTargetEX;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__AluResMEM;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__writeDataMEM;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__AluResWB;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__finalResultWB;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active;
        IData/*22:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_rdata;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
        IData/*22:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s;
        IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<CData/*1:0*/, 128> pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<IData/*31:0*/, 1024> pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array;
        VlUnpacked<VlUnpacked<IData/*22:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 128>, 2> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits;
        VlUnpacked<CData/*1:0*/, 128> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree;
        VlUnpacked<IData/*31:0*/, 1024> pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VpipelinedCpuTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VpipelinedCpuTest___024root(VpipelinedCpuTest__Syms* symsp, const char* v__name);
    ~VpipelinedCpuTest___024root();
    VL_UNCOPYABLE(VpipelinedCpuTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
