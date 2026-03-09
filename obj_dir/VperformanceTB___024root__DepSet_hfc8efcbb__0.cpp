// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VperformanceTB.h for the primary calling header

#include "VperformanceTB__pch.h"
#include "VperformanceTB___024root.h"

VL_ATTR_COLD void VperformanceTB___024root___eval_initial__TOP(VperformanceTB___024root* vlSelf);
VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__0(VperformanceTB___024root* vlSelf);
VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__1(VperformanceTB___024root* vlSelf);
VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__2(VperformanceTB___024root* vlSelf);
VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__3(VperformanceTB___024root* vlSelf);
VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__4(VperformanceTB___024root* vlSelf);

void VperformanceTB___024root___eval_initial(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial\n"); );
    // Body
    VperformanceTB___024root___eval_initial__TOP(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0 
        = vlSelf->performanceTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__rst__0 
        = vlSelf->performanceTB__DOT__rst;
}

VL_INLINE_OPT VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->performanceTB__DOT__clk = 0U;
    vlSelf->performanceTB__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "tb/performanceTB.sv", 
                                       9);
    vlSelf->performanceTB__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__1(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    VL_WRITEF("=============================================================\n  PERFORMANCE BENCHMARK TESTBENCH\n  Program : program/hex/loop.hex\n  Timeout : 500000 ns\n  Config  : ICache=256B/2-way lat=20  DCache=256B/2-way lat=20\n=============================================================\n");
    vlSelf->performanceTB__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "tb/performanceTB.sv", 
                                       61);
    co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge performanceTB.clk)", 
                                                       "tb/performanceTB.sv", 
                                                       62);
    vlSelf->performanceTB__DOT__rst = 0U;
    VL_WRITEF("T=%0t | Reset released, benchmark running...\n\n",
              64,VL_TIME_UNITED_Q(1),-12);
}

VL_INLINE_OPT VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__2(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x7a120ULL, 
                                       nullptr, "tb/performanceTB.sv", 
                                       121);
    VL_WRITEF("\n[TIMEOUT] %0t ns \342\200\224 benchmark did not terminate!\n[TIMEOUT] Last PC=%08x instID=%08x\n[TIMEOUT] x28=%0x (1=pass, other=failing test number)\n",
              64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister,
              32,vlSelf->performanceTB__DOT__dut__DOT__instID,
              32,vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
              [0x1cU]);
    VL_WRITEF("=============================================================\n  BENCHMARK CONFIGURATION\n=============================================================\n  Clock period      : 10 ns  (100 MHz)\n  ICache size       : 256 bytes,  2-way,  latency=20 cycles\n  DCache size       : 256 bytes,  2-way,  latency=20 cycles\n  Branch resolution : EX stage (flush penalty=2 cycle)\n=============================================================\nCycles: %0d  Instructions: %0d  CPI: %0.2f\n",
              32,vlSelf->performanceTB__DOT__cycle_count,
              32,vlSelf->performanceTB__DOT__instr_count,
              64,(VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__cycle_count) 
                  / VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__instr_count)));
    VL_FINISH_MT("tb/performanceTB.sv", 127, "");
}

VL_INLINE_OPT VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__3(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/performanceTB.sv", 
                                           12);
        vlSelf->performanceTB__DOT__clk = (1U & (~ (IData)(vlSelf->performanceTB__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VperformanceTB___024root___eval_initial__TOP__Vtiming__4(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge performanceTB.clk)", 
                                                           "tb/performanceTB.sv", 
                                                           91);
        if (VL_UNLIKELY(vlSelf->performanceTB__DOT__break_detected)) {
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               93);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               93);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               93);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               93);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               93);
            VL_WRITEF("T=%0t | [EBREAK] Benchmark complete \342\200\224 pipeline drained\n",
                      64,VL_TIME_UNITED_Q(1),-12);
            if ((1U == vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                 [0x1cU])) {
                VL_WRITEF("  RESULT: PASS\n");
            } else {
                VL_WRITEF("  RESULT: FAIL \342\200\224 test number %0# failed (x28 = %0x)\n",
                          32,vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                          [0x1cU],32,vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                          [0x1cU]);
            }
            VL_WRITEF("=============================================================\n  BENCHMARK CONFIGURATION\n=============================================================\n  Clock period      : 10 ns  (100 MHz)\n  ICache size       : 256 bytes,  2-way,  latency=20 cycles\n  DCache size       : 256 bytes,  2-way,  latency=20 cycles\n  Branch resolution : EX stage (flush penalty=2 cycle)\n=============================================================\nCycles: %0d  Instructions: %0d  CPI: %0.2f\n",
                      32,vlSelf->performanceTB__DOT__cycle_count,
                      32,vlSelf->performanceTB__DOT__instr_count,
                      64,(VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__cycle_count) 
                          / VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__instr_count)));
            VL_FINISH_MT("tb/performanceTB.sv", 105, "");
        }
    }
}

void VperformanceTB___024root___eval_act(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 256> VperformanceTB__ConstPool__TABLE_h6774d5ba_0;
extern const VlUnpacked<CData/*2:0*/, 256> VperformanceTB__ConstPool__TABLE_h9ce5a35f_0;
extern const VlUnpacked<CData/*0:0*/, 256> VperformanceTB__ConstPool__TABLE_h9ca8a42a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VperformanceTB__ConstPool__TABLE_h8af05f84_0;
extern const VlUnpacked<CData/*0:0*/, 128> VperformanceTB__ConstPool__TABLE_h594b7fee_0;
extern const VlUnpacked<CData/*3:0*/, 128> VperformanceTB__ConstPool__TABLE_h39fa20de_0;
extern const VlUnpacked<CData/*1:0*/, 128> VperformanceTB__ConstPool__TABLE_hf4afd3a1_0;
extern const VlUnpacked<CData/*3:0*/, 128> VperformanceTB__ConstPool__TABLE_h6eb401fc_0;
extern const VlUnpacked<CData/*2:0*/, 128> VperformanceTB__ConstPool__TABLE_h26d4c584_0;

VL_INLINE_OPT void VperformanceTB___024root___nba_sequent__TOP__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ performanceTB__DOT__dut__DOT__hazardSel;
    performanceTB__DOT__dut__DOT__hazardSel = 0;
    IData/*31:0*/ __Vilp;
    CData/*1:0*/ performanceTB__DOT__dut__DOT__WBID;
    performanceTB__DOT__dut__DOT__WBID = 0;
    CData/*3:0*/ performanceTB__DOT__dut__DOT__EXID;
    performanceTB__DOT__dut__DOT__EXID = 0;
    CData/*1:0*/ performanceTB__DOT__dut__DOT__forwardA;
    performanceTB__DOT__dut__DOT__forwardA = 0;
    CData/*1:0*/ performanceTB__DOT__dut__DOT__forwardB;
    performanceTB__DOT__dut__DOT__forwardB = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__AluMuxBFwd;
    performanceTB__DOT__dut__DOT__AluMuxBFwd = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__AluInA;
    performanceTB__DOT__dut__DOT__AluInA = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__AluInB;
    performanceTB__DOT__dut__DOT__AluInB = 0;
    CData/*3:0*/ performanceTB__DOT__dut__DOT__AluCtrlEX;
    performanceTB__DOT__dut__DOT__AluCtrlEX = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__loadResult;
    performanceTB__DOT__dut__DOT__loadResult = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0;
    CData/*1:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0;
    CData/*1:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way = 0;
    IData/*31:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0;
    performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*6:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 = 0;
    IData/*23:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64;
    __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64;
    __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 = 0;
    CData/*1:0*/ __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0;
    CData/*1:0*/ __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word;
    __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*24:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0;
    CData/*1:0*/ __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
    __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0;
    CData/*4:0*/ __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7;
    __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0;
    CData/*7:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*24:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0;
    CData/*1:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0;
    CData/*0:0*/ __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0;
    CData/*4:0*/ __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0;
    SData/*9:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1;
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvval__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions;
    __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired;
    __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired = 0;
    QData/*63:0*/ __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions;
    __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))))) {
        VL_WRITEF("T=%0t [DCACHE]  mem_read=%b, mem_write=%b, mem_ready=%b, addr=%08x\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid),
                  1,vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write,
                  1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready),
                  32,vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr);
    }
    __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
        = vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy 
        = vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    __Vdlyvset__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0U;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles;
    __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions;
    __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses;
    __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits;
    __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word;
    __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
    __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 = 0U;
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst)))) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
                         & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))))) {
            VL_WRITEF("T=%0t [ICACHE] HIT  set=%0# way=%0# offset=%0# addr=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U)),1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index),
                      2,(3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                               >> 2U)),32,vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
        }
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
                         & (~ (IData)((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))))))) {
            VL_WRITEF("T=%0t [ICACHE] MISS set=%0# tag=%0x addr=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U)),25,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                         >> 7U),32,
                      vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
        }
        if (VL_UNLIKELY(((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
                         & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready)))) {
            VL_WRITEF("T=%0t [ICACHE] FILL set=%0# way=%0# word=%0# data=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),
                      1,vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way,
                      2,(IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word),
                      32,vlSelf->performanceTB__DOT__dut__DOT__umem_rdata);
        }
    }
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst)))) {
        if (VL_UNLIKELY(((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
                         & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))))) {
            VL_WRITEF("T=%0t [DCACHE] HIT  set=%0# way=%0# offset=%0# addr=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U)),1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index),
                      2,(3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                               >> 2U)),32,vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
        }
        if (VL_UNLIKELY(((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
                         & (~ (IData)((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))))))) {
            VL_WRITEF("T=%0t [DCACHE] MISS set=%0# tag=%0x addr=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U)),25,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                         >> 7U),32,
                      vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
                         & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready)))) {
            VL_WRITEF("T=%0t [DCACHE] FILL set=%0# way=%0# word=%0# data=%08x\n",
                      64,VL_TIME_UNITED_Q(1),-12,3,
                      (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),
                      1,vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way,
                      2,(IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word),
                      32,vlSelf->performanceTB__DOT__dut__DOT__umem_rdata);
        }
    }
    __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelf->performanceTB__DOT__rst)) 
                      & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                         >> 1U)) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))))) {
        VL_WRITEF("T=%0t | [WB ] Writing reg[%0#] = %08x\n",
                  64,VL_TIME_UNITED_Q(1),-12,5,(IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),
                  32,vlSelf->performanceTB__DOT__dut__DOT__finalResultWB);
    }
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 0U;
    if (VL_UNLIKELY(vlSelf->performanceTB__DOT__perf_print)) {
        vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI 
            = ((0ULL < vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired)
                ? (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles) 
                   / VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired))
                : 0.0);
        vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate 
            = ((0ULL < (vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits 
                        + vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses))
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses) 
                            / VL_ITOR_D_Q(64, (vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits 
                                               + vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses))))
                : 0.0);
        vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate 
            = ((0ULL < (vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits 
                        + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses))
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses) 
                            / VL_ITOR_D_Q(64, (vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits 
                                               + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses))))
                : 0.0);
        vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate 
            = ((0ULL < vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions)
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions) 
                            / VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions)))
                : 0.0);
        VL_WRITEF("\n=============================================================\n  PERFORMANCE COUNTER REPORT\n=============================================================\n  Total cycles            : %0#\n  Instructions retired    : %0#\n  CPI                     : %.3f\n-------------------------------------------------------------\n  ICache hits             : %0#\n  ICache misses           : %0#\n  ICache miss rate        : %.1f%%\n  ICache stall cycles     : %0#  (%.1f%% of total)\n",
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles,
                  64,((0ULL < vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles)
                       ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles) 
                                   / VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles)))
                       : 0.0));
        VL_WRITEF("-------------------------------------------------------------\n  DCache hits             : %0#\n  DCache misses           : %0#\n  DCache miss rate        : %.1f%%\n  DCache stall cycles     : %0#  (%.1f%% of total)\n-------------------------------------------------------------\n  Branches executed       : %0#\n  Branch mispredicts      : %0#\n  Mispredict rate         : %.1f%%\n  Flush penalty/mispredict: 2 cycles\n  Total branch penalty    : %0# cycles\n",
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles,
                  64,((0ULL < vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles)
                       ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles) 
                                   / VL_ITOR_D_Q(64, vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles)))
                       : 0.0),64,vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions,
                  64,vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate,
                  64,VL_SHIFTL_QQI(64,64,32, vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions, 1U));
        VL_WRITEF("=============================================================\n\n");
    }
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst)))) {
        vlSelf->performanceTB__DOT__cycle_count = ((IData)(1U) 
                                                   + vlSelf->performanceTB__DOT__cycle_count);
        if (vlSelf->performanceTB__DOT__dut__DOT__pcWrite) {
            vlSelf->performanceTB__DOT__instr_count 
                = ((IData)(1U) + vlSelf->performanceTB__DOT__instr_count);
        }
        if (((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready))) {
            if ((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
            if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op) 
                 & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word) 
                    == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset)))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 
                    = (0xffU & ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))
                                 ? vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg
                                 : vlSelf->performanceTB__DOT__dut__DOT__umem_rdata));
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 1U;
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 = 0U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 
                    = (0xffU & ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))
                                 ? (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                                    >> 8U) : (vlSelf->performanceTB__DOT__dut__DOT__umem_rdata 
                                              >> 8U)));
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 = 8U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 
                    = (0xffU & ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))
                                 ? (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                                    >> 0x10U) : (vlSelf->performanceTB__DOT__dut__DOT__umem_rdata 
                                                 >> 0x10U)));
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 = 0x10U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 
                    = (0xffU & ((8U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))
                                 ? (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                                    >> 0x18U) : (vlSelf->performanceTB__DOT__dut__DOT__umem_rdata 
                                                 >> 0x18U)));
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 = 0x18U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            } else {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 
                    = vlSelf->performanceTB__DOT__dut__DOT__umem_rdata;
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 = 1U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
        }
        if ((((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                    = (0xffU & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg);
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                    = (3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U));
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                    = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U));
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            }
            if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = (0xffU & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                                >> 8U));
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 1U;
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 8U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = (3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U));
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U));
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            }
            if ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 
                    = (0xffU & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                                >> 0x10U));
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 1U;
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 = 0x10U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 
                    = (3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U));
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 
                    = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U));
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            }
            if ((8U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 
                    = (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                       >> 0x18U);
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 1U;
                __Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 = 0x18U;
                __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 
                    = (3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U));
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 
                    = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U));
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            }
        }
        if (((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & ((IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                | (IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write)))) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg 
                = vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->performanceTB__DOT__break_detected) 
                     << 7U) | (((0x100073U == vlSelf->performanceTB__DOT__dut__DOT__instID) 
                                << 6U) | (((IData)(vlSelf->performanceTB__DOT__special_pipe) 
                                           << 3U) | 
                                          (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
                                            << 2U) 
                                           | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall) 
                                               << 1U) 
                                              | (IData)(vlSelf->performanceTB__DOT__rst))))));
    if ((1U & VperformanceTB__ConstPool__TABLE_h6774d5ba_0
         [__Vtableidx1])) {
        vlSelf->performanceTB__DOT__special_pipe = 
            VperformanceTB__ConstPool__TABLE_h9ce5a35f_0
            [__Vtableidx1];
    }
    if ((2U & VperformanceTB__ConstPool__TABLE_h6774d5ba_0
         [__Vtableidx1])) {
        vlSelf->performanceTB__DOT__break_detected 
            = VperformanceTB__ConstPool__TABLE_h9ca8a42a_0
            [__Vtableidx1];
    }
    if (((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
         & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready))) {
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__umem_rdata;
        __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
        __Vdlyvdim2__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word;
        __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        if ((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word))) {
            __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 1U;
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
            __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
            __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        }
    }
    if (vlSelf->performanceTB__DOT__rst) {
        vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles = 0ULL;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0U;
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0U;
        __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses = 0ULL;
        __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = 0U;
        __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v0 = 1U;
        __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v0 = 1U;
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits = 0ULL;
        __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v0 = 1U;
    } else {
        vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles 
            = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles);
        if (vlSelf->performanceTB__DOT__dut__DOT__ic_stall) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles);
        }
        if (vlSelf->performanceTB__DOT__dut__DOT__dc_stall) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles);
        }
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [1U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [2U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [3U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [4U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [5U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [6U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [7U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [1U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [2U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [3U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [4U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [5U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [6U];
        __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 
            = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [7U];
        if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX) 
             & (~ (IData)(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions);
        }
        if ((IData)(((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                       >> 2U) & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))) 
                     & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions);
        }
        if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
             & (~ (IData)(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses);
        }
        if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall) 
             & (~ (IData)(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses);
        }
        if ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_ready) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits);
        }
        if (((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
             & (~ (IData)((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))))) {
            __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word = 0U;
        } else if (((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready))) {
            __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word 
                = (3U & ((IData)(1U) + (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word)));
        }
        if (((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (~ (IData)((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)))))) {
            __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = 0U;
        } else if ((((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
                     | (3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) 
                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready))) {
            __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word 
                = (3U & ((IData)(1U) + (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word)));
        }
        if ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX))) {
            __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64 = 1U;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64 
                = (0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                            >> 2U));
            __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 
                = (vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                   >> 8U);
            __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 = 1U;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64 
                = (0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                            >> 2U));
            __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 
                = vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX;
            __Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 = 1U;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64 
                = (0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                            >> 2U));
        }
        if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                >> 1U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM)) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits);
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                     << 4U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready) 
                                << 3U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall) 
                                            << 1U) 
                                           | (IData)(vlSelf->performanceTB__DOT__rst)))));
    if (vlSelf->performanceTB__DOT__rst) {
        __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 1U;
        __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired = 0ULL;
        __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 1U;
        __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__byteOffWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__funct3WB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__isJumpWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__AluResWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__writeRegWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__WBWB = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__umem_ready = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__funct3MEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__MEMMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__WBMEM = 0U;
    } else {
        if (((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready))) {
            if ((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word))) {
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 1U;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
            if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op) 
                 & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word) 
                    == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset)))) {
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 1U;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            } else if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word))) {
                __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 1U;
                __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
        }
        if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
               & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired);
        }
        if ((((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 1U;
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 
                = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                         >> 4U));
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        }
        if ((((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready)) 
             & (3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word)))) {
            __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 1U;
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
        if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))) {
            if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->performanceTB__DOT__dut__DOT__finalResultWB;
                __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 1U;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->performanceTB__DOT__dut__DOT__writeRegWB;
            }
        }
        vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state 
            = vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state;
        if (((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & ((IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                | (IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write)))) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op 
                = vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg 
                = vlSelf->performanceTB__DOT__dut__DOT__AluResMEM;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                = (vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                   >> 7U);
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op 
                = vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                = vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset 
                = (3U & (vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                         >> 2U));
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set 
                = (7U & (vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                         >> 4U));
        }
        if (vlSelf->performanceTB__DOT__dut__DOT__dc_ready) {
            vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                = vlSelf->performanceTB__DOT__dut__DOT__dc_rdata;
        }
        if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__stall_WB)))) {
            vlSelf->performanceTB__DOT__dut__DOT__byteOffWB 
                = vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM;
            vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB 
                = vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM;
            vlSelf->performanceTB__DOT__dut__DOT__funct3WB 
                = vlSelf->performanceTB__DOT__dut__DOT__funct3MEM;
            vlSelf->performanceTB__DOT__dut__DOT__isJumpWB 
                = vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM;
            vlSelf->performanceTB__DOT__dut__DOT__AluResWB 
                = vlSelf->performanceTB__DOT__dut__DOT__AluResMEM;
            vlSelf->performanceTB__DOT__dut__DOT__writeRegWB 
                = vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM;
            vlSelf->performanceTB__DOT__dut__DOT__WBWB 
                = vlSelf->performanceTB__DOT__dut__DOT__WBMEM;
        }
        if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))))) {
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg 
                    = vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister;
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way 
                    = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
                    = (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                       >> 7U);
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set 
                    = (7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 4U));
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset 
                    = (3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U));
                __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready) 
                 & (3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word)))) {
                __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 2U;
            }
        } else {
            __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
        }
        vlSelf->performanceTB__DOT__dut__DOT__umem_ready = 0U;
        if (((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy)) 
             & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__umem_read) 
                | (IData)(vlSelf->performanceTB__DOT__dut__DOT__umem_write)))) {
            __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 1U;
            __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0x14U;
        } else if (vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy) {
            __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
                = (0x1fU & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer) 
                            - (IData)(1U)));
            if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer))) {
                __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0U;
                vlSelf->performanceTB__DOT__dut__DOT__umem_ready = 1U;
                if (vlSelf->performanceTB__DOT__dut__DOT__umem_read) {
                    vlSelf->performanceTB__DOT__dut__DOT__umem_rdata 
                        = vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram
                        [(0x3ffU & (vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                                    >> 2U))];
                }
                if (vlSelf->performanceTB__DOT__dut__DOT__umem_write) {
                    __Vdlyvval__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 
                        = vlSelf->performanceTB__DOT__dut__DOT__umem_wdata;
                    __Vdlyvset__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 1U;
                    __Vdlyvdim0__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 
                        = (0x3ffU & (vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                                     >> 2U));
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)) 
                   & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))))) {
            vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM 
                = (3U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX);
            vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM 
                = vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX;
            vlSelf->performanceTB__DOT__dut__DOT__funct3MEM 
                = vlSelf->performanceTB__DOT__dut__DOT__funct3EX;
            vlSelf->performanceTB__DOT__dut__DOT__MEMMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__MEMEX;
            vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM 
                = ((0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)) 
                   | (0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)));
            vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__RdEX;
            vlSelf->performanceTB__DOT__dut__DOT__WBMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__WBEX;
        }
    }
    if (((IData)(vlSelf->performanceTB__DOT__rst) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX))) {
        vlSelf->performanceTB__DOT__dut__DOT__predict_target_EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__immEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__EXEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__regData1EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__regData2EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Rs1EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Rs2EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__FuncEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__predict_target_ID = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__predict_taken_ID = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcID = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__funct3EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__MEMEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__instEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__RdEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__WBEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__instID = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)) 
                   & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))))) {
            vlSelf->performanceTB__DOT__dut__DOT__predict_target_EX 
                = vlSelf->performanceTB__DOT__dut__DOT__predict_target_ID;
            vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX 
                = vlSelf->performanceTB__DOT__dut__DOT__predict_taken_ID;
            vlSelf->performanceTB__DOT__dut__DOT__immEX 
                = vlSelf->performanceTB__DOT__dut__DOT__immID;
            vlSelf->performanceTB__DOT__dut__DOT__EXEX 
                = (0xfU & (IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID));
            vlSelf->performanceTB__DOT__dut__DOT__regData1EX 
                = vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                           >> 0xfU))];
            vlSelf->performanceTB__DOT__dut__DOT__regData2EX 
                = vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                           >> 0x14U))];
            vlSelf->performanceTB__DOT__dut__DOT__Rs1EX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0xfU));
            vlSelf->performanceTB__DOT__dut__DOT__Rs2EX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0x14U));
            vlSelf->performanceTB__DOT__dut__DOT__FuncEX 
                = ((8U & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                          >> 0x1bU)) | (7U & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                              >> 0xcU)));
            vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX 
                = (vlSelf->performanceTB__DOT__dut__DOT__pcID 
                   + vlSelf->performanceTB__DOT__dut__DOT__immID);
            vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                = vlSelf->performanceTB__DOT__dut__DOT__pcID;
            vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX 
                = vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID;
            vlSelf->performanceTB__DOT__dut__DOT__funct3EX 
                = (7U & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                         >> 0xcU));
            vlSelf->performanceTB__DOT__dut__DOT__MEMEX 
                = (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID) 
                         >> 4U));
            vlSelf->performanceTB__DOT__dut__DOT__instEX 
                = vlSelf->performanceTB__DOT__dut__DOT__instID;
            vlSelf->performanceTB__DOT__dut__DOT__RdEX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 7U));
            vlSelf->performanceTB__DOT__dut__DOT__WBEX 
                = (3U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID) 
                         >> 7U));
        }
        if (vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite) {
            vlSelf->performanceTB__DOT__dut__DOT__predict_target_ID 
                = vlSelf->performanceTB__DOT__dut__DOT__predict_target;
            vlSelf->performanceTB__DOT__dut__DOT__predict_taken_ID 
                = vlSelf->performanceTB__DOT__dut__DOT__predict_taken;
            vlSelf->performanceTB__DOT__dut__DOT__pcID 
                = vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister;
            vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID 
                = vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF;
            vlSelf->performanceTB__DOT__dut__DOT__instID 
                = vlSelf->performanceTB__DOT__dut__DOT__ic_inst;
        }
    }
    if (vlSelf->performanceTB__DOT__rst) {
        vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__AluResMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)) 
                   & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))))) {
            vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__cpu_ben;
            vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata;
            vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__AluResultEX;
        }
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
        if (vlSelf->performanceTB__DOT__dut__DOT__pcWrite) {
            vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                = vlSelf->performanceTB__DOT__dut__DOT__nextPc;
        }
    }
    if (VperformanceTB__ConstPool__TABLE_h8af05f84_0
        [__Vtableidx2]) {
        vlSelf->performanceTB__DOT__dut__DOT__dc_done 
            = VperformanceTB__ConstPool__TABLE_h594b7fee_0
            [__Vtableidx2];
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles;
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7U] 
        = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__branch_mispredictions;
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions;
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses;
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses;
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64) {
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid[__Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid__v64] = 1U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64) {
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag[__Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag__v64;
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64) {
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target[__Vdlyvdim0__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target__v64;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim2__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][1U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][2U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][3U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][4U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][5U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][6U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][7U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][1U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][2U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][3U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][4U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][5U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][6U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][7U] = 0U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16] = 1U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][1U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][2U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][3U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][4U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][5U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][6U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][7U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][1U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][2U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][3U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][4U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][5U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][6U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][7U] = 0U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16] = 1U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17] = 1U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18] = 0U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19] = 0U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word 
        = __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0))));
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1))));
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v2))));
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v3))));
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v4))));
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v5))));
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v6))));
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7))) 
                & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                [__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7]
                [__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7]
                [__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7) 
                                   << (IData)(__Vdlyvlsb__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v7))));
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v8;
    }
    vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0U] = 0U;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1) {
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[1U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[2U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[3U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[4U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[5U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[6U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[7U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[8U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[9U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xaU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xbU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xcU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xdU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xeU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xfU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x10U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x11U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x12U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x13U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x14U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x15U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x16U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x17U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x18U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x19U] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1aU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1bU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1cU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1dU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1eU] = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1fU] = 0U;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33) {
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[__Vdlyvdim0__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev 
        = ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))) 
           && (IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX));
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev 
        = ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))) 
           && (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev 
        = ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))) 
           && (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
    __Vtableidx68 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                      << 3U) | (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                      >> 1U)));
    performanceTB__DOT__dut__DOT__AluCtrlEX = VperformanceTB__ConstPool__TABLE_h39fa20de_0
        [__Vtableidx68];
    performanceTB__DOT__dut__DOT__loadResult = ((4U 
                                                 & (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3WB))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3WB))
                                                  ? vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3WB))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                     >> 0x10U)
                                                     : 0U)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch)))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3WB))
                                                  ? vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3WB))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                        >> 0x10U))
                                                     : 0U)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch)))))));
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word 
        = __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
        = __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy 
        = __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
        = __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram[__Vdlyvdim0__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    }
    performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__finalResultWB 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__isJumpWB)
            ? vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB
            : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))
                ? performanceTB__DOT__dut__DOT__loadResult
                : vlSelf->performanceTB__DOT__dut__DOT__AluResWB));
    vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready = 0U;
    if ((2U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if (vlSelf->performanceTB__DOT__dut__DOT__umem_ready) {
                vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready = 1U;
            }
        }
        if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
                if (vlSelf->performanceTB__DOT__dut__DOT__umem_ready) {
                    vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready = 1U;
                }
            }
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read 
        = (1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done)) 
                 & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                    >> 1U)));
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write 
        = (1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done)) 
                 & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM)));
    performanceTB__DOT__dut__DOT__forwardA = 0U;
    if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->performanceTB__DOT__dut__DOT__Rs1EX))) 
         & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        performanceTB__DOT__dut__DOT__forwardA = 2U;
    } else if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->performanceTB__DOT__dut__DOT__Rs1EX)))) {
        performanceTB__DOT__dut__DOT__forwardA = 1U;
    }
    performanceTB__DOT__dut__DOT__forwardB = 0U;
    if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->performanceTB__DOT__dut__DOT__Rs2EX))) 
         & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        performanceTB__DOT__dut__DOT__forwardB = 2U;
    } else if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->performanceTB__DOT__dut__DOT__Rs2EX)))) {
        performanceTB__DOT__dut__DOT__forwardB = 1U;
    }
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
        = (0xfffffffcU & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = 0U;
    if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                    [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set]
                    [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word];
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = 1U;
            }
            if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
                    = ((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                        << 7U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                   << 4U) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word) 
                                             << 2U)));
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = 1U;
            } else {
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
                    = ((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                        [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                        [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                        << 7U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                   << 4U) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word) 
                                             << 2U)));
            }
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
            : vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    performanceTB__DOT__dut__DOT__AluInA = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->performanceTB__DOT__dut__DOT__instEX))
                                             ? 0U : 
                                            ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__instEX))
                                              ? vlSelf->performanceTB__DOT__dut__DOT__pcEX
                                              : ((2U 
                                                  == (IData)(performanceTB__DOT__dut__DOT__forwardA))
                                                  ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
                                                  : 
                                                 ((1U 
                                                   == (IData)(performanceTB__DOT__dut__DOT__forwardA))
                                                   ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                                                   : vlSelf->performanceTB__DOT__dut__DOT__regData1EX))));
    performanceTB__DOT__dut__DOT__AluMuxBFwd = ((2U 
                                                 == (IData)(performanceTB__DOT__dut__DOT__forwardB))
                                                 ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
                                                 : 
                                                ((1U 
                                                  == (IData)(performanceTB__DOT__dut__DOT__forwardB))
                                                  ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                                                  : vlSelf->performanceTB__DOT__dut__DOT__regData2EX));
    vlSelf->performanceTB__DOT__dut__DOT__umem_write = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__umem_read = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__umem_wdata = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state 
        = vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
    if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current 
        = ((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
            [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                        >> 4U))] << 1U) | vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
           [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))]);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
              [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                          >> 4U))] & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                      [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 4U))] 
                                      == (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                          >> 7U))));
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
               [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                           >> 4U))] & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                       [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 4U))] 
                                       == (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                           >> 7U))) 
              << 1U));
    vlSelf->performanceTB__DOT__dut__DOT__predict_target 
        = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__target
        [(0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                   >> 2U))];
    performanceTB__DOT__dut__DOT__AluInB = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX))
                                             ? vlSelf->performanceTB__DOT__dut__DOT__immEX
                                             : performanceTB__DOT__dut__DOT__AluMuxBFwd);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current)))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current) 
                  >> 1U)))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 
        = (1U & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                   >> 4U))]);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way 
        = performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
            ? vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister
            : vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg);
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec 
        = ((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
            [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                        >> 4U))] << 1U) | vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
           [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))]);
    performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr 
        = (0xfffffffcU & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active);
    if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr 
                = ((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
                    << 7U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set) 
                               << 4U) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word) 
                                         << 2U)));
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
              [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                          >> 4U))] & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                      [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 4U))] 
                                      == (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                          >> 7U))));
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
               [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                           >> 4U))] & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                       [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 4U))] 
                                       == (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                           >> 7U))) 
              << 1U));
    vlSelf->performanceTB__DOT__dut__DOT__AluResultEX 
        = ((8U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
            ? ((4U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                ? 0U : ((2U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                         ? 0U : ((1U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                                  ? ((performanceTB__DOT__dut__DOT__AluInA 
                                      < performanceTB__DOT__dut__DOT__AluInB)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, performanceTB__DOT__dut__DOT__AluInA, performanceTB__DOT__dut__DOT__AluInB)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
             ? ((2U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                 ? ((1U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                     ? VL_SHIFTRS_III(32,32,5, performanceTB__DOT__dut__DOT__AluInA, 
                                      (0x1fU & performanceTB__DOT__dut__DOT__AluInB))
                     : (performanceTB__DOT__dut__DOT__AluInA 
                        >> (0x1fU & performanceTB__DOT__dut__DOT__AluInB)))
                 : ((1U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                     ? (performanceTB__DOT__dut__DOT__AluInA 
                        << (0x1fU & performanceTB__DOT__dut__DOT__AluInB))
                     : (performanceTB__DOT__dut__DOT__AluInA 
                        ^ performanceTB__DOT__dut__DOT__AluInB)))
             : ((2U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                 ? ((1U & (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                     ? (performanceTB__DOT__dut__DOT__AluInA 
                        | performanceTB__DOT__dut__DOT__AluInB)
                     : (performanceTB__DOT__dut__DOT__AluInA 
                        & performanceTB__DOT__dut__DOT__AluInB))
                 : (performanceTB__DOT__dut__DOT__AluInA 
                    + (((1U == (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))
                         ? (~ performanceTB__DOT__dut__DOT__AluInB)
                         : performanceTB__DOT__dut__DOT__AluInB) 
                       + (IData)((QData)((IData)((1U 
                                                  == (IData)(performanceTB__DOT__dut__DOT__AluCtrlEX))))))))));
    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata = 0U;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
    if ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__dc_rdata 
                    = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op)
                        ? vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set]
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset]
                        : 0U);
                performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
        }
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 1U;
                    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata 
                        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                        [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index]
                        [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                >> 4U))][(3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                >> 2U))];
                    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
                }
            }
        }
        if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if (vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready) {
                    if ((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word))) {
                        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 4U;
                    }
                }
            } else if (vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready) {
                if ((3U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word))) {
                    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
                = ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))
                    ? 0U : ((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                             [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                             [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                             & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                             [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                             [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set])
                             ? 2U : 3U));
        } else if (((IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                    | (IData)(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write))) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 1U;
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec)))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec) 
                  >> 1U)))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 
        = (1U & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                   >> 4U))]);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way 
        = performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    vlSelf->performanceTB__DOT__dut__DOT__umem_addr = 0U;
    if ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid) 
             | (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write))) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_write 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
            vlSelf->performanceTB__DOT__dut__DOT__umem_read 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
            vlSelf->performanceTB__DOT__dut__DOT__umem_wdata 
                = performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        } else if (performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_read = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr;
        }
    } else {
        if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
                vlSelf->performanceTB__DOT__dut__DOT__umem_write 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
                vlSelf->performanceTB__DOT__dut__DOT__umem_wdata 
                    = performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            }
        }
        if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_read = 1U;
            if (vlSelf->performanceTB__DOT__dut__DOT__umem_ready) {
                vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
            }
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr;
        } else if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_read 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
            if (vlSelf->performanceTB__DOT__dut__DOT__umem_ready) {
                vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
            }
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        } else {
            vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
        }
    }
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__immID = (
                                                   (0x40U 
                                                    & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                       ? 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0x15U) 
                                                          | ((0x100000U 
                                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->performanceTB__DOT__dut__DOT__instID) 
                                                                | ((0x800U 
                                                                    & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                         >> 0x14U))))))
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0xdU) 
                                                          | ((0x1000U 
                                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                         >> 7U))))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | ((0xfe0U 
                                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                   >> 7U))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->performanceTB__DOT__dut__DOT__instID)
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U))))));
    performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0 
        = ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)) 
           & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
               == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0xfU))) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                          == (0x1fU 
                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                 >> 0x14U)))));
    __Vtableidx67 = (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instID);
    performanceTB__DOT__dut__DOT__WBID = VperformanceTB__ConstPool__TABLE_hf4afd3a1_0
        [__Vtableidx67];
    performanceTB__DOT__dut__DOT__EXID = VperformanceTB__ConstPool__TABLE_h6eb401fc_0
        [__Vtableidx67];
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = VperformanceTB__ConstPool__TABLE_h26d4c584_0
        [__Vtableidx67];
    vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 0xfU;
    vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
        = performanceTB__DOT__dut__DOT__AluMuxBFwd;
    if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3EX))) {
        if ((2U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)) {
            if ((1U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)) {
                vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 8U;
                vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                    = (performanceTB__DOT__dut__DOT__AluMuxBFwd 
                       << 0x18U);
            } else {
                vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 4U;
                vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                    = (0xff0000U & (performanceTB__DOT__dut__DOT__AluMuxBFwd 
                                    << 0x10U));
            }
        } else if ((1U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)) {
            vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 2U;
            vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                = (0xff00U & (performanceTB__DOT__dut__DOT__AluMuxBFwd 
                              << 8U));
        } else {
            vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                = (0xffU & performanceTB__DOT__dut__DOT__AluMuxBFwd);
        }
    } else if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__funct3EX))) {
        if ((2U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)) {
            if ((2U & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)) {
                vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 0xcU;
                vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                    = (performanceTB__DOT__dut__DOT__AluMuxBFwd 
                       << 0x10U);
            }
        } else {
            vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 3U;
            vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
                = (0xffffU & performanceTB__DOT__dut__DOT__AluMuxBFwd);
        }
    } else {
        vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 0xfU;
        vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
            = performanceTB__DOT__dut__DOT__AluMuxBFwd;
    }
    vlSelf->performanceTB__DOT__dut__DOT__branch_taken 
        = ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
            ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                ? ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                    ? (0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                    : (1U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX))
                : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                    ? (0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                    : (1U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)))
            : ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                         >> 1U))) && ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                                       ? (0U != vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                                       : (0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX))));
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [0U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [1U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [2U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [3U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [4U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [5U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [6U];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7U] 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
        [7U];
    if (performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(7U 
                                                                                & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 4U))] 
            = (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))] | (3U & ((IData)(1U) 
                                         << (1U & performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + ((IData)(performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way)
                                  ? 1U : 0U)));
    }
    vlSelf->performanceTB__DOT__dut__DOT__ic_inst = 0U;
    if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_inst 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index]
                [(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                        >> 4U))][(3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))];
        }
    } else if ((1U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_inst 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way]
                [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set]
                [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset];
        }
    }
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [0U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [1U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [2U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [3U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [4U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [5U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [6U];
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7U] 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
        [7U];
    if (performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(7U 
                                                                                & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 4U))] 
            = (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))] | (3U & ((IData)(1U) 
                                         << (1U & performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + (((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                                   ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                                   : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))
                                  ? 1U : 0U)));
    }
    vlSelf->performanceTB__DOT__dut__DOT__ic_stall = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__dc_stall = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 1U;
    vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 1U;
    performanceTB__DOT__dut__DOT__hazardSel = 1U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_ready)))) {
        vlSelf->performanceTB__DOT__dut__DOT__ic_stall = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
        performanceTB__DOT__dut__DOT__hazardSel = 0U;
    }
    if ((1U & ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                 >> 1U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM)) 
               & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
                     | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready)))))) {
        vlSelf->performanceTB__DOT__dut__DOT__dc_stall = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
        performanceTB__DOT__dut__DOT__hazardSel = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall)) 
               & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))))) {
        if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
               >> 1U) & (IData)(performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0)) 
             & ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                  == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                               >> 0xfU))) & (0U == (IData)(performanceTB__DOT__dut__DOT__forwardA))) 
                | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                    == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                 >> 0x14U))) & (0U 
                                                == (IData)(performanceTB__DOT__dut__DOT__forwardB)))))) {
            vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
            performanceTB__DOT__dut__DOT__hazardSel = 0U;
        } else if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                       >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                  >> 1U) & (IData)(performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0))) 
                     | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                         >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                    >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                                              & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                      >> 0xfU))) 
                                                 | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                        >> 0x14U)))))))) 
                    & ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                         == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                      >> 0xfU))) & 
                        (0U == (IData)(performanceTB__DOT__dut__DOT__forwardA))) 
                       | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                           == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0x14U))) 
                          & (0U == (IData)(performanceTB__DOT__dut__DOT__forwardB)))))) {
            vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
            performanceTB__DOT__dut__DOT__hazardSel = 0U;
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX = 
        ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
           >> 2U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken)) 
         | (0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)));
    vlSelf->performanceTB__DOT__dut__DOT__mispredict 
        = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
            >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                       != (IData)(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX)) 
                      | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                         & (vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX 
                            != vlSelf->performanceTB__DOT__dut__DOT__predict_target_EX))));
    vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID 
        = ((IData)(performanceTB__DOT__dut__DOT__hazardSel)
            ? (((IData)(performanceTB__DOT__dut__DOT__WBID) 
                << 7U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                           << 4U) | (IData)(performanceTB__DOT__dut__DOT__EXID)))
            : 0U);
    vlSelf->performanceTB__DOT__dut__DOT__stall_WB 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
           | (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
    VL_WRITEF("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b \342\206\222 pcWrite=%b\nHDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b\n",
              1,vlSelf->performanceTB__DOT__dut__DOT__ic_stall,
              1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall),
              1,(1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                       >> 1U)),1,((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
                                  | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready)),
              1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__pcWrite),
              1,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                  >> 1U) & (IData)(performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0)),
              1,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                  >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                             >> 1U) & (IData)(performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0))),
              1,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                  >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                             >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                                       & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                           == (0x1fU 
                                               & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                  >> 0xfU))) 
                                          | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                             == (0x1fU 
                                                 & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                    >> 0x14U))))))));
    vlSelf->performanceTB__DOT__dut__DOT__IFflushEX 
        = (((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX)) 
            & (IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX)) 
           | ((0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)) 
              | (IData)(vlSelf->performanceTB__DOT__dut__DOT__mispredict)));
}

VL_INLINE_OPT void VperformanceTB___024root___nba_sequent__TOP__1(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->performanceTB__DOT__rst) {
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state = 0U;
    } else {
        if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 1U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 2U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 3U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 4U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 5U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 6U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 7U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 8U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 9U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xaU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xbU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xcU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xdU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xeU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0xfU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x10U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x11U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x12U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x13U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x14U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x15U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x16U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x17U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x18U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x19U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1aU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1bU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1cU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1dU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1eU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x1fU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x20U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x21U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x22U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x23U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x24U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x25U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x26U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x27U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x28U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x29U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2aU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2bU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2cU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2dU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2eU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x2fU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x30U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x31U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x32U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x33U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x34U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x35U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x36U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x37U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x38U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x39U)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3aU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3bU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3cU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3dU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3eU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__new_state;
        }
        if ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                           >> 0x3fU)))) {
            vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state 
                = vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__new_state;
        }
    }
}

VL_INLINE_OPT void VperformanceTB___024root___nba_sequent__TOP__2(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en = 0ULL;
    if ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX))) {
        vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
            = (vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
               | ((QData)((IData)(1U)) << (0x3fU & 
                                           (vlSelf->performanceTB__DOT__dut__DOT__pcEX 
                                            >> 2U))));
    }
}

extern const VlUnpacked<CData/*1:0*/, 8> VperformanceTB__ConstPool__TABLE_h33d05a79_0;

VL_INLINE_OPT void VperformanceTB___024root___nba_comb__TOP__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*2:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*2:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*2:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*2:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*2:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*2:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*2:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*2:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*2:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*2:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*2:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*2:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*2:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*2:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*2:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*2:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*2:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*2:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*2:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*2:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*2:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*2:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*2:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*2:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*2:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*2:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*2:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*2:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*2:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*2:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*2:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*2:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*2:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*2:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*2:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*2:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*2:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*2:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*2:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*2:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*2:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*2:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*2:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*2:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*2:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*2:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*2:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*2:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    // Body
    __Vtableidx66 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx66];
    __Vtableidx65 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx65];
    __Vtableidx64 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx64];
    __Vtableidx63 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx63];
    __Vtableidx62 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx62];
    __Vtableidx61 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx61];
    __Vtableidx60 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx60];
    __Vtableidx59 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx59];
    __Vtableidx58 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx58];
    __Vtableidx57 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx57];
    __Vtableidx56 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx56];
    __Vtableidx55 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx55];
    __Vtableidx54 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx54];
    __Vtableidx53 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx53];
    __Vtableidx52 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx52];
    __Vtableidx51 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx51];
    __Vtableidx50 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx50];
    __Vtableidx49 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx49];
    __Vtableidx48 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx48];
    __Vtableidx47 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx47];
    __Vtableidx46 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx46];
    __Vtableidx45 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx45];
    __Vtableidx44 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx44];
    __Vtableidx43 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx43];
    __Vtableidx42 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx42];
    __Vtableidx41 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx41];
    __Vtableidx40 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx40];
    __Vtableidx39 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx39];
    __Vtableidx38 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx38];
    __Vtableidx37 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx37];
    __Vtableidx36 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx36];
    __Vtableidx35 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx35];
    __Vtableidx34 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx34];
    __Vtableidx33 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx33];
    __Vtableidx32 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx32];
    __Vtableidx31 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx31];
    __Vtableidx30 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx30];
    __Vtableidx29 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx29];
    __Vtableidx28 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx28];
    __Vtableidx27 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx27];
    __Vtableidx26 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx26];
    __Vtableidx25 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx25];
    __Vtableidx24 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx24];
    __Vtableidx23 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx23];
    __Vtableidx22 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx22];
    __Vtableidx21 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx21];
    __Vtableidx20 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx20];
    __Vtableidx19 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx19];
    __Vtableidx18 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx18];
    __Vtableidx17 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx17];
    __Vtableidx16 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx16];
    __Vtableidx15 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx15];
    __Vtableidx14 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx14];
    __Vtableidx13 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx13];
    __Vtableidx12 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx12];
    __Vtableidx11 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx11];
    __Vtableidx10 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                      << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx10];
    __Vtableidx9 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx9];
    __Vtableidx8 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx8];
    __Vtableidx7 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx7];
    __Vtableidx6 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx6];
    __Vtableidx5 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx5];
    __Vtableidx4 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx4];
    vlSelf->performanceTB__DOT__dut__DOT__predict_taken 
        = (1U & (IData)(((((QData)((IData)((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state) 
                                                  >> 1U)))) 
                           << 0x3fU) | (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state) 
                                                             >> 1U)))) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state) 
                                                                >> 1U)))) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state) 
                                                                   >> 1U)))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state) 
                                                                      >> 1U)))) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state) 
                                                                         >> 1U)))) 
                                                     << 0x3aU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state) 
                                                                            >> 1U)))) 
                                                        << 0x39U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state) 
                                                                               >> 1U)))) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                 << 0x36U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                    << 0x35U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                       << 0x34U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                          << 0x33U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                             << 0x32U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state) 
                                                                                >> 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                         >> (0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                      >> 2U)))));
    __Vtableidx3 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken) 
                     << 2U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state));
    vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__new_state 
        = VperformanceTB__ConstPool__TABLE_h33d05a79_0
        [__Vtableidx3];
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = 
        ((0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))
          ? (0xfffffffeU & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
          : (((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX)))
              ? vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX
              : (((IData)(vlSelf->performanceTB__DOT__dut__DOT__mispredict) 
                  & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__branch_taken)))
                  ? vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX
                  : (((IData)(vlSelf->performanceTB__DOT__dut__DOT__predict_taken) 
                      & (vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid
                         [(0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                    >> 2U))] & (vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag
                                                [(0x3fU 
                                                  & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                                     >> 2U))] 
                                                == 
                                                (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                                 >> 8U))))
                      ? vlSelf->performanceTB__DOT__dut__DOT__predict_target
                      : vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF))));
}

void VperformanceTB___024root___eval_nba(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VperformanceTB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VperformanceTB___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VperformanceTB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VperformanceTB___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VperformanceTB___024root___timing_resume(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h01766083__0.resume("@(posedge performanceTB.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VperformanceTB___024root___timing_commit(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h01766083__0.commit("@(posedge performanceTB.clk)");
    }
}

void VperformanceTB___024root___eval_triggers__act(VperformanceTB___024root* vlSelf);

bool VperformanceTB___024root___eval_phase__act(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VperformanceTB___024root___eval_triggers__act(vlSelf);
    VperformanceTB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VperformanceTB___024root___timing_resume(vlSelf);
        VperformanceTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VperformanceTB___024root___eval_phase__nba(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VperformanceTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__nba(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__act(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG

void VperformanceTB___024root___eval(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VperformanceTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/performanceTB.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VperformanceTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/performanceTB.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VperformanceTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VperformanceTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VperformanceTB___024root___eval_debug_assertions(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
