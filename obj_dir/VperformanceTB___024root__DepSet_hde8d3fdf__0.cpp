// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VperformanceTB.h for the primary calling header

#include "VperformanceTB__pch.h"
#include "VperformanceTB__Syms.h"
#include "VperformanceTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__act(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG

void VperformanceTB___024root___eval_triggers__act(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->performanceTB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->performanceTB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0))) 
                                     | ((IData)(vlSelf->performanceTB__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0 
        = vlSelf->performanceTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__rst__0 
        = vlSelf->performanceTB__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VperformanceTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
