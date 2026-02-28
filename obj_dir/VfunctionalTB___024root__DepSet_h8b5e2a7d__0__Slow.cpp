// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfunctionalTB.h for the primary calling header

#include "VfunctionalTB__pch.h"
#include "VfunctionalTB__Syms.h"
#include "VfunctionalTB___024root.h"

VL_ATTR_COLD void VfunctionalTB___024root___eval_initial__TOP(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    vlSelf->functionalTB__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x616c5442U;
    __Vtemp_1[2U] = 0x74696f6eU;
    __Vtemp_1[3U] = 0x66756e63U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s)) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][(0x7fU 
                                                                                & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s)] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s 
            = ((IData)(1U) + vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s);
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s)) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][(0x7fU 
                                                                                & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s)] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s 
            = ((IData)(1U) + vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s);
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w = 2U;
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6772616dU;
    __Vtemp_4[2U] = 0x2f70726fU;
    __Vtemp_4[3U] = 0x72616d73U;
    __Vtemp_4[4U] = 0x70726f67U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_4)
                 ,  &(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__stl(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VfunctionalTB___024root___eval_triggers__stl(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VfunctionalTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
