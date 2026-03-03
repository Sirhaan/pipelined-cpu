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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VperformanceTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    VperformanceTB___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0 
        = vlSelf->performanceTB__DOT__clk;
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
    VL_WRITEF("=============================================================\n  PERFORMANCE BENCHMARK TESTBENCH\n  Program : programs/program_perf.hex\n  Timeout : 500000 ns\n  Config  : ICache=256B/2-way lat=20  DCache=256B/2-way lat=20\n=============================================================\n");
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
                                       119);
    VL_WRITEF("\n[TIMEOUT] %0t ns elapsed \342\200\224 benchmark did not terminate!\n[TIMEOUT] Last PC=%08x instID=%08x\n[TIMEOUT] Did you forget to end your program with BREAK (0x0000000d)?\n",
              64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister,
              32,vlSelf->performanceTB__DOT__dut__DOT__instID);
    VL_WRITEF("=============================================================\n  BENCHMARK CONFIGURATION\n=============================================================\n  Clock period      : 10 ns  (100 MHz)\n  ICache size       : 256 bytes,  2-way,  latency=20 cycles\n  DCache size       : 256 bytes,  2-way,  latency=20 cycles\n  Branch resolution : EX stage (flush penalty=2 cycle)\n=============================================================\nCycles: %0d  Instructions: %0d  CPI: %0.2f\n",
              32,vlSelf->performanceTB__DOT__cycle_count,
              32,vlSelf->performanceTB__DOT__instr_count,
              64,(VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__cycle_count) 
                  / VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__instr_count)));
    VL_FINISH_MT("tb/performanceTB.sv", 125, "");
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
                                                           97);
        if (VL_UNLIKELY(vlSelf->performanceTB__DOT__break_detected)) {
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               99);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               99);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               99);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               99);
            co_await vlSelf->__VtrigSched_h01766083__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge performanceTB.clk)", 
                                                               "tb/performanceTB.sv", 
                                                               99);
            VL_WRITEF("T=%0t | [BREAK/SYSCALL] Benchmark complete \342\200\224 pipeline drained\n",
                      64,VL_TIME_UNITED_Q(1),-12);
            VL_WRITEF("=============================================================\n  BENCHMARK CONFIGURATION\n=============================================================\n  Clock period      : 10 ns  (100 MHz)\n  ICache size       : 256 bytes,  2-way,  latency=20 cycles\n  DCache size       : 256 bytes,  2-way,  latency=20 cycles\n  Branch resolution : EX stage (flush penalty=2 cycle)\n=============================================================\nCycles: %0d  Instructions: %0d  CPI: %0.2f\n",
                      32,vlSelf->performanceTB__DOT__cycle_count,
                      32,vlSelf->performanceTB__DOT__instr_count,
                      64,(VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__cycle_count) 
                          / VL_ISTOR_D_I(32, vlSelf->performanceTB__DOT__instr_count)));
            VL_FINISH_MT("tb/performanceTB.sv", 104, "");
        }
    }
}

void VperformanceTB___024root___eval_act(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 128> VperformanceTB__ConstPool__TABLE_h8af05f84_0;
extern const VlUnpacked<CData/*0:0*/, 128> VperformanceTB__ConstPool__TABLE_h594b7fee_0;
extern const VlUnpacked<CData/*3:0*/, 512> VperformanceTB__ConstPool__TABLE_h1e3acbf7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h74e48922_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h9fb9a08b_0;
extern const VlUnpacked<CData/*2:0*/, 64> VperformanceTB__ConstPool__TABLE_ha574114e_0;

VL_INLINE_OPT void VperformanceTB___024root___nba_sequent__TOP__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vdly__performanceTB__DOT__special_pipe;
    __Vdly__performanceTB__DOT__special_pipe = 0;
    CData/*0:0*/ __Vdly__performanceTB__DOT__break_detected;
    __Vdly__performanceTB__DOT__break_detected = 0;
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
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*2:0*/ __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*1:0*/ __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    IData/*31:0*/ __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
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
    __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits;
    __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
    __Vdly__performanceTB__DOT__break_detected = vlSelf->performanceTB__DOT__break_detected;
    __Vdly__performanceTB__DOT__special_pipe = vlSelf->performanceTB__DOT__special_pipe;
    __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
        = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelf->performanceTB__DOT__rst)) 
                      & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                         >> 1U)) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))))) {
        VL_WRITEF("T=%0t | [WB ] Writing reg[%0#] = %08x\n",
                  64,VL_TIME_UNITED_Q(1),-12,5,(IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),
                  32,vlSelf->performanceTB__DOT__dut__DOT__finalResultWB);
    }
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
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0U;
    __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired 
        = vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v16 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
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
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v16 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v17 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v18 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v19 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0U;
    if (vlSelf->performanceTB__DOT__rst) {
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i = 0x20U;
    }
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
            __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op) 
                    & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word) 
                       == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset)))
                    ? vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg
                    : vlSelf->performanceTB__DOT__dut__DOT__umem_rdata);
            __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 1U;
            __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
        if ((((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
            __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
            __Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = (3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                         >> 2U));
            __Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = (7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                         >> 4U));
            __Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        }
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
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev = 0U;
    __Vtableidx1 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                     << 4U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready) 
                                << 3U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall) 
                                            << 1U) 
                                           | (IData)(vlSelf->performanceTB__DOT__rst)))));
    if (vlSelf->performanceTB__DOT__rst) {
        vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions = 0ULL;
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
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits = 0ULL;
        __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses = 0ULL;
        __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word = 0U;
        __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits = 0ULL;
        __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = 0U;
        __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 1U;
        __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired = 0ULL;
        __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 1U;
        __Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__signExtImmEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__FuncEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__regData1EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__regData2EX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__RsEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__AluResWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = 0U;
        __Vdly__performanceTB__DOT__special_pipe = 0U;
        __Vdly__performanceTB__DOT__break_detected = 0U;
        vlSelf->performanceTB__DOT__break_pc = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions = 0ULL;
        vlSelf->performanceTB__DOT__dut__DOT__WBWB = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__writeRegWB = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0U;
        __Vdly__performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__umem_ready = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__MEMMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__WBMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__AluResMEM = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__MEMEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__WBEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__EXEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__RdEX = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__RtEX = 0U;
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
        if ((IData)(((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                       >> 2U) & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))) 
                     & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions);
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
        if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                >> 1U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM)) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))) 
             & (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits);
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
        if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))) {
            if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) {
                __Vdlyvval__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->performanceTB__DOT__dut__DOT__finalResultWB;
                __Vdlyvset__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 1U;
                __Vdlyvdim0__performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->performanceTB__DOT__dut__DOT__writeRegWB;
            }
        }
        if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
               & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
              & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)))) {
            __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired 
                = (1ULL + vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired);
        }
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
        vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state 
            = vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state;
        if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__stall_WB)))) {
            vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB 
                = vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch;
            vlSelf->performanceTB__DOT__dut__DOT__AluResWB 
                = vlSelf->performanceTB__DOT__dut__DOT__AluResMEM;
            vlSelf->performanceTB__DOT__dut__DOT__WBWB 
                = vlSelf->performanceTB__DOT__dut__DOT__WBMEM;
            vlSelf->performanceTB__DOT__dut__DOT__writeRegWB 
                = vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM;
        }
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
                = vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM;
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset 
                = (3U & (vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                         >> 2U));
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set 
                = (7U & (vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                         >> 4U));
        }
        if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall)) 
                   & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))))) {
            __Vdly__performanceTB__DOT__special_pipe 
                = ((6U & ((IData)(vlSelf->performanceTB__DOT__special_pipe) 
                          << 1U)) | ((0U == (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                             >> 0x1aU)) 
                                     & ((0xdU == (0x3fU 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__instID)) 
                                        | (0xcU == 
                                           (0x3fU & vlSelf->performanceTB__DOT__dut__DOT__instID)))));
            if ((IData)((((IData)(vlSelf->performanceTB__DOT__special_pipe) 
                          >> 2U) & (~ (IData)(vlSelf->performanceTB__DOT__break_detected))))) {
                __Vdly__performanceTB__DOT__break_detected = 1U;
                vlSelf->performanceTB__DOT__break_pc 
                    = vlSelf->performanceTB__DOT__dut__DOT__AluResMEM;
            }
        }
        if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall)) 
                   & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall))))) {
            vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX 
                = vlSelf->performanceTB__DOT__dut__DOT__branchTargetID;
            vlSelf->performanceTB__DOT__dut__DOT__signExtImmEX 
                = vlSelf->performanceTB__DOT__dut__DOT__signExtImmID;
            vlSelf->performanceTB__DOT__dut__DOT__FuncEX 
                = (0x3fU & vlSelf->performanceTB__DOT__dut__DOT__instID);
            vlSelf->performanceTB__DOT__dut__DOT__regData1EX 
                = vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                           >> 0x15U))];
            vlSelf->performanceTB__DOT__dut__DOT__regData2EX 
                = vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                           >> 0x10U))];
            vlSelf->performanceTB__DOT__dut__DOT__RsEX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0x15U));
            vlSelf->performanceTB__DOT__dut__DOT__MEMMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__MEMEX;
            vlSelf->performanceTB__DOT__dut__DOT__WBMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__WBEX;
            vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM 
                = ((0x10U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX))
                    ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)
                    : (IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX));
            vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM 
                = vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd;
            vlSelf->performanceTB__DOT__dut__DOT__AluResMEM 
                = ((8U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                    ? ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                        ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                            ? 0U : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                     ? 0U : (~ (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                | vlSelf->performanceTB__DOT__dut__DOT__AluInb))))
                        : ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                            ? 0U : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                     ? 0U : VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__AluInb, 0x10U))))
                    : ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                        ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                            ? ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                ? ((vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                    >> 0x1fU) ? 1U : 0U)
                                : 0U) : 0U) : ((2U 
                                                & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                ? vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                    ? 
                                                   (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->performanceTB__DOT__dut__DOT__AluInb)
                                                    : 
                                                   (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                    & vlSelf->performanceTB__DOT__dut__DOT__AluInb)))));
            vlSelf->performanceTB__DOT__dut__DOT__MEMEX 
                = (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID) 
                         >> 5U));
            vlSelf->performanceTB__DOT__dut__DOT__WBEX 
                = (3U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID) 
                         >> 8U));
            vlSelf->performanceTB__DOT__dut__DOT__EXEX 
                = (0x1fU & (IData)(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID));
            vlSelf->performanceTB__DOT__dut__DOT__RdEX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0xbU));
            vlSelf->performanceTB__DOT__dut__DOT__RtEX 
                = (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0x10U));
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
        if (vlSelf->performanceTB__DOT__dut__DOT__dc_ready) {
            vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch 
                = vlSelf->performanceTB__DOT__dut__DOT__dc_rdata;
        }
        if (vlSelf->performanceTB__DOT__dut__DOT__pcWrite) {
            vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                = vlSelf->performanceTB__DOT__dut__DOT__nextPc;
        }
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
    }
    if (((IData)(vlSelf->performanceTB__DOT__rst) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX))) {
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__instID = 0U;
    } else if (vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite) {
        vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID 
            = vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF;
        vlSelf->performanceTB__DOT__dut__DOT__instID 
            = vlSelf->performanceTB__DOT__dut__DOT__ic_inst;
    }
    if (VperformanceTB__ConstPool__TABLE_h8af05f84_0
        [__Vtableidx1]) {
        vlSelf->performanceTB__DOT__dut__DOT__dc_done 
            = VperformanceTB__ConstPool__TABLE_h594b7fee_0
            [__Vtableidx1];
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_stall_cycles;
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_stall_cycles;
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__branch_instructions;
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
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_misses;
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_misses;
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__ic_hits;
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__dc_hits;
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim2__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0] = 1U;
    }
    vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired 
        = __Vdly__performanceTB__DOT__perfCounter__DOT__instruction_retired;
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
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    }
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
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim1__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim2__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1] 
            = __Vdlyvval__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word 
        = __Vdly__performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word;
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
    vlSelf->performanceTB__DOT__special_pipe = __Vdly__performanceTB__DOT__special_pipe;
    vlSelf->performanceTB__DOT__break_detected = __Vdly__performanceTB__DOT__break_detected;
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev 
        = ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))) 
           && (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev 
        = ((1U & (~ (IData)(vlSelf->performanceTB__DOT__rst))) 
           && (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
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
    vlSelf->performanceTB__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))
            ? vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB
            : vlSelf->performanceTB__DOT__dut__DOT__AluResWB);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
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
    vlSelf->performanceTB__DOT__dut__DOT__forwardA = 0U;
    if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->performanceTB__DOT__dut__DOT__RsEX))) 
         & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        vlSelf->performanceTB__DOT__dut__DOT__forwardA = 2U;
    } else if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->performanceTB__DOT__dut__DOT__RsEX)))) {
        vlSelf->performanceTB__DOT__dut__DOT__forwardA = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
        = (0xfffffffcU & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = 0U;
    if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata 
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
    vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
        = ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
            ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                : vlSelf->performanceTB__DOT__dut__DOT__regData1EX));
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
            ? vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister
            : vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec 
        = ((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
            [1U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                        >> 4U))] << 1U) | vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
           [0U][(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))]);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr 
        = (0xfffffffcU & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active);
    if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr 
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
    vlSelf->performanceTB__DOT__dut__DOT__umem_write = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__umem_read = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__umem_wdata = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state 
        = vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current 
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
    __Vtableidx3 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX 
        = VperformanceTB__ConstPool__TABLE_h1e3acbf7_0
        [__Vtableidx3];
    vlSelf->performanceTB__DOT__dut__DOT__forwardB = 0U;
    if ((((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX))) 
         & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        vlSelf->performanceTB__DOT__dut__DOT__forwardB = 2U;
    } else if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX)))) {
        vlSelf->performanceTB__DOT__dut__DOT__forwardB = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec)))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec) 
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
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        } else if (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_read = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr;
        }
    } else {
        if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
                vlSelf->performanceTB__DOT__dut__DOT__umem_write 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
                vlSelf->performanceTB__DOT__dut__DOT__umem_wdata 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            }
        }
        if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            vlSelf->performanceTB__DOT__dut__DOT__umem_read = 1U;
            if (vlSelf->performanceTB__DOT__dut__DOT__umem_ready) {
                vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
            }
            vlSelf->performanceTB__DOT__dut__DOT__umem_addr 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr;
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
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current)))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current) 
                  >> 1U)))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 
        = (1U & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                   >> 4U))]);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way 
        = performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd 
        = ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardB))
            ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardB))
                ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                : vlSelf->performanceTB__DOT__dut__DOT__regData2EX));
    vlSelf->performanceTB__DOT__dut__DOT__AluInb = 
        ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX))
          ? vlSelf->performanceTB__DOT__dut__DOT__signExtImmEX
          : vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd);
    if ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        vlSelf->performanceTB__DOT__dut__DOT__ic_inst = 0U;
        if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 1U;
            vlSelf->performanceTB__DOT__dut__DOT__ic_inst 
                = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index]
                [(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                        >> 4U))][(3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))];
        }
    } else {
        vlSelf->performanceTB__DOT__dut__DOT__ic_inst = 0U;
        if ((1U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__ic_ready = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__ic_inst 
                    = vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way]
                    [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set]
                    [vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset];
            }
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
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
    if (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(7U 
                                                                                & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 4U))] 
            = (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))] | (3U & ((IData)(1U) 
                                         << (1U & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + (((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                                   ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                                   : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))
                                  ? 1U : 0U)));
    }
    if ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__dc_rdata = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 1U;
                vlSelf->performanceTB__DOT__dut__DOT__dc_rdata 
                    = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op)
                        ? vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set]
                       [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset]
                        : 0U);
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
        }
    } else {
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
        vlSelf->performanceTB__DOT__dut__DOT__dc_rdata = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
            = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        if ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = 1U;
                    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata 
                        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                        [vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index]
                        [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                >> 4U))][(3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                >> 2U))];
                    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                        = vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
                }
            }
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
           | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready));
    vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand 
        = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
            ? ((IData)(1U) + (~ vlSelf->performanceTB__DOT__dut__DOT__AluInb))
            : vlSelf->performanceTB__DOT__dut__DOT__AluInb);
    vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX = 
        (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
          >> 2U) & (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                    == vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd));
    vlSelf->performanceTB__DOT__dut__DOT__IFflushEX 
        = vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX;
    vlSelf->performanceTB__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->performanceTB__DOT__dut__DOT__instID));
    vlSelf->performanceTB__DOT__dut__DOT__branchTargetID 
        = (vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__signExtImmID, 2U));
    __Vtableidx2 = (vlSelf->performanceTB__DOT__dut__DOT__instID 
                    >> 0x1aU);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegWrite 
        = VperformanceTB__ConstPool__TABLE_h74e48922_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemtoReg 
        = VperformanceTB__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch 
        = VperformanceTB__ConstPool__TABLE_hac88bb16_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemRead 
        = VperformanceTB__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemWrite 
        = VperformanceTB__ConstPool__TABLE_h9c50cc6f_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegDst 
        = VperformanceTB__ConstPool__TABLE_h3e8a5fce_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUSrc 
        = VperformanceTB__ConstPool__TABLE_h9fb9a08b_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUOp 
        = VperformanceTB__ConstPool__TABLE_ha574114e_0
        [__Vtableidx2];
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
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
    if (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(7U 
                                                                                & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 4U))] 
            = (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                       >> 4U))] | (3U & ((IData)(1U) 
                                         << (1U & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + ((IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way)
                                  ? 1U : 0U)));
    }
    vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
           + vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = 
        ((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX)
          ? vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX
          : vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF);
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = (
                                                   ((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemRead) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemWrite)));
    vlSelf->performanceTB__DOT__dut__DOT__ic_stall = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__dc_stall = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 1U;
    vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 1U;
    vlSelf->performanceTB__DOT__dut__DOT__hazardSel = 1U;
    if ((1U & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_ready)))) {
        vlSelf->performanceTB__DOT__dut__DOT__ic_stall = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__hazardSel = 0U;
    }
    if ((1U & ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                 >> 1U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM)) 
               & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff))))) {
        vlSelf->performanceTB__DOT__dut__DOT__dc_stall = 1U;
        vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
        vlSelf->performanceTB__DOT__dut__DOT__hazardSel = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall)) 
               & (~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall))))) {
        if (((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
               >> 1U) & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff)) 
                         & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                             == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                          >> 0x15U))) 
                            | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                               == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                            >> 0x10U)))))) 
             & ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA)) 
                | (0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardB))))) {
            vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__hazardSel = 0U;
        } else if ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                     & ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                          >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)) 
                                    & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                        == (0x1fU & 
                                            (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                             >> 0x15U))) 
                                       | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                          == (0x1fU 
                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                 >> 0x10U)))))) 
                        | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                            >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                                      & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                          == (0x1fU 
                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                 >> 0x15U))) 
                                         | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                            == (0x1fU 
                                                & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                   >> 0x10U)))))))) 
                    & ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardB))))) {
            vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__hazardSel = 0U;
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__hazardSel)
            ? ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegWrite) 
                 << 9U) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemtoReg) 
                           << 8U)) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                       << 5U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegDst) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUOp) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUSrc)))))
            : 0U);
    vlSelf->performanceTB__DOT__dut__DOT__stall_WB 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall) 
           | (IData)(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
    VL_WRITEF("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b \342\206\222 pcWrite=%b\nHDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b\n",
              1,vlSelf->performanceTB__DOT__dut__DOT__ic_stall,
              1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_stall),
              1,(1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                       >> 1U)),1,(IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff),
              1,vlSelf->performanceTB__DOT__dut__DOT__pcWrite,
              1,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                  >> 1U) & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff)) 
                            & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                                == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                             >> 0x15U))) 
                               | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                                  == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                               >> 0x10U)))))),
              1,((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                 & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                     >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)) 
                               & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                   == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                >> 0x15U))) 
                                  | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                     == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                  >> 0x10U))))))),
              1,((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                 & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                     >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                               & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                   == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                >> 0x15U))) 
                                  | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                     == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                  >> 0x10U))))))));
}

void VperformanceTB___024root___eval_nba(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VperformanceTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
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
    VlTriggerVec<2> __VpreTriggered;
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
