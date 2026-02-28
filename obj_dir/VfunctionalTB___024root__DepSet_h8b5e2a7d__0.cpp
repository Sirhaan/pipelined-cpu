// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfunctionalTB.h for the primary calling header

#include "VfunctionalTB__pch.h"
#include "VfunctionalTB__Syms.h"
#include "VfunctionalTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__act(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfunctionalTB___024root___eval_triggers__act(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h8e614511__0;
    __Vtrigcurrexpr_h8e614511__0 = 0;
    __Vtrigcurrexpr_h8e614511__0 = (1U & (~ (IData)(vlSelf->functionalTB__DOT__rst)));
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->functionalTB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__functionalTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(__Vtrigcurrexpr_h8e614511__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h8e614511__0)));
    vlSelf->__Vtrigprevexpr___TOP__functionalTB__DOT__clk__0 
        = vlSelf->functionalTB__DOT__clk;
    vlSelf->__Vtrigprevexpr_h8e614511__0 = __Vtrigcurrexpr_h8e614511__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VfunctionalTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
