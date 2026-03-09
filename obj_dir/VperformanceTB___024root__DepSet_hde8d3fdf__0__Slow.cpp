// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VperformanceTB.h for the primary calling header

#include "VperformanceTB__pch.h"
#include "VperformanceTB__Syms.h"
#include "VperformanceTB___024root.h"

VL_ATTR_COLD void VperformanceTB___024root___eval_initial__TOP(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x63655442U;
    __Vtemp_1[2U] = 0x726d616eU;
    __Vtemp_1[3U] = 0x6572666fU;
    __Vtemp_1[4U] = 0x696d2f70U;
    __Vtemp_1[5U] = 0x73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    VL_PRINTF_MT("-Info: tb/performanceTB.sv:38: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][0U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][1U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][2U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][3U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][4U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][5U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][6U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][7U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][0U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][1U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][2U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][3U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][4U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][5U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][6U] = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][7U] = 0U;
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6c6f6f70U;
    __Vtemp_2[2U] = 0x6865782fU;
    __Vtemp_2[3U] = 0x72616d2fU;
    __Vtemp_2[4U] = 0x70726f67U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__stl(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VperformanceTB___024root___eval_triggers__stl(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VperformanceTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
