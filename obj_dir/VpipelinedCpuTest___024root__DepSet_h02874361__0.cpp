// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VpipelinedCpuTest.h for the primary calling header

#include "VpipelinedCpuTest__pch.h"
#include "VpipelinedCpuTest___024root.h"

VL_ATTR_COLD void VpipelinedCpuTest___024root___eval_initial__TOP(VpipelinedCpuTest___024root* vlSelf);
VlCoroutine VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__0(VpipelinedCpuTest___024root* vlSelf);
VlCoroutine VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__1(VpipelinedCpuTest___024root* vlSelf);

void VpipelinedCpuTest___024root___eval_initial(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_initial\n"); );
    // Body
    VpipelinedCpuTest___024root___eval_initial__TOP(vlSelf);
    VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0 
        = vlSelf->pipelinedCpuTest__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__0(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->pipelinedCpuTest__DOT__clk = 0U;
    VL_WRITEF("T=%0t | INITIAL PC=%x\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    vlSelf->pipelinedCpuTest__DOT__rst = 1U;
    VL_WRITEF("--- CPU Resetting ---\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "pipelinedCpuTest.sv", 
                                       18);
    vlSelf->pipelinedCpuTest__DOT__rst = 0U;
    VL_WRITEF("T=%0t | AFTER RESET PC=%x\n--- CPU Running ---\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    co_await vlSelf->__VdlySched.delay(0x4c4b40ULL, 
                                       nullptr, "pipelinedCpuTest.sv", 
                                       21);
    VL_WRITEF("--- Simulation Finished ---\n");
    VL_FINISH_MT("pipelinedCpuTest.sv", 23, "");
}

VL_INLINE_OPT VlCoroutine VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__1(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "pipelinedCpuTest.sv", 
                                           9);
        vlSelf->pipelinedCpuTest__DOT__clk = (1U & 
                                              (~ (IData)(vlSelf->pipelinedCpuTest__DOT__clk)));
    }
}

void VpipelinedCpuTest___024root___eval_act(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_act\n"); );
}

void VpipelinedCpuTest___024root___nba_sequent__TOP__0(VpipelinedCpuTest___024root* vlSelf);

void VpipelinedCpuTest___024root___eval_nba(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VpipelinedCpuTest___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VpipelinedCpuTest___024root___timing_resume(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VpipelinedCpuTest___024root___eval_triggers__act(VpipelinedCpuTest___024root* vlSelf);

bool VpipelinedCpuTest___024root___eval_phase__act(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VpipelinedCpuTest___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VpipelinedCpuTest___024root___timing_resume(vlSelf);
        VpipelinedCpuTest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VpipelinedCpuTest___024root___eval_phase__nba(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VpipelinedCpuTest___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VpipelinedCpuTest___024root___dump_triggers__nba(VpipelinedCpuTest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VpipelinedCpuTest___024root___dump_triggers__act(VpipelinedCpuTest___024root* vlSelf);
#endif  // VL_DEBUG

void VpipelinedCpuTest___024root___eval(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VpipelinedCpuTest___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pipelinedCpuTest.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VpipelinedCpuTest___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pipelinedCpuTest.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VpipelinedCpuTest___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VpipelinedCpuTest___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VpipelinedCpuTest___024root___eval_debug_assertions(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
