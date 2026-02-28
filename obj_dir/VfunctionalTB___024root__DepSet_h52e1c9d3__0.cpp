// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfunctionalTB.h for the primary calling header

#include "VfunctionalTB__pch.h"
#include "VfunctionalTB___024root.h"

VL_ATTR_COLD void VfunctionalTB___024root___eval_initial__TOP(VfunctionalTB___024root* vlSelf);
VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__0(VfunctionalTB___024root* vlSelf);
VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__1(VfunctionalTB___024root* vlSelf);
VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__2(VfunctionalTB___024root* vlSelf);
VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__3(VfunctionalTB___024root* vlSelf);

void VfunctionalTB___024root___eval_initial(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial\n"); );
    // Body
    VfunctionalTB___024root___eval_initial__TOP(vlSelf);
    VfunctionalTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VfunctionalTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VfunctionalTB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VfunctionalTB___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__functionalTB__DOT__clk__0 
        = vlSelf->functionalTB__DOT__clk;
    vlSelf->__Vtrigprevexpr_h8e614511__0 = (1U & (~ (IData)(vlSelf->functionalTB__DOT__rst)));
}

VL_INLINE_OPT VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__0(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("=============================================================\n  FUNCTIONAL VALIDATION TESTBENCH\n  Program: programs/program.hex\n  Timeout: 50000 ns\n=============================================================\n");
    vlSelf->functionalTB__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "tb/functionalTB.sv", 
                                       104);
    co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge functionalTB.clk)", 
                                                       "tb/functionalTB.sv", 
                                                       105);
    vlSelf->functionalTB__DOT__rst = 0U;
    VL_WRITEF("T=%0t | Reset released, CPU running...\n",
              64,VL_TIME_UNITED_Q(1),-12);
}

VL_INLINE_OPT VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__1(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_3;
    std::string __Vtemp_5;
    std::string __Vtemp_7;
    std::string __Vtemp_9;
    std::string __Vtemp_11;
    std::string __Vtemp_13;
    std::string __Vtemp_15;
    std::string __Vtemp_17;
    std::string __Vtemp_19;
    std::string __Vtemp_21;
    std::string __Vtemp_23;
    std::string __Vtemp_25;
    std::string __Vtemp_27;
    std::string __Vtemp_29;
    std::string __Vtemp_31;
    // Body
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/functionalTB.sv", 
                                       111);
    VL_WRITEF("\n[TIMEOUT] %0t ns elapsed \342\200\224 CPU did not halt!\n[TIMEOUT] Last PC=%08x instID=%08x\n",
              64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister,
              32,vlSelf->functionalTB__DOT__dut__DOT__instID);
    vlSelf->functionalTB__DOT__perf_print = 1U;
    co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge functionalTB.clk)", 
                                                       "tb/functionalTB.sv", 
                                                       115);
    vlSelf->functionalTB__DOT__perf_print = 0U;
    vlSelf->functionalTB__DOT__pass_count = 0U;
    vlSelf->functionalTB__DOT__fail_count = 0U;
    VL_WRITEF("\n=============================================================\n  REGISTER FILE CHECK\n=============================================================\n  Instruction               REG   EXPECTED    ACTUAL      STATUS\n  ------------------------------------------------------------\n");
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [0U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [0U]))) {
        __Vtemp_1 = vlSelf->functionalTB__DOT__check_names
            [0U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_1),5,(0x1fU & (IData)(
                                                     (vlSelf->functionalTB__DOT__checks
                                                      [0U] 
                                                      >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [0U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_3 = vlSelf->functionalTB__DOT__check_names
            [0U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_3),5,(0x1fU & (IData)(
                                                     (vlSelf->functionalTB__DOT__checks
                                                      [0U] 
                                                      >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [0U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [1U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [1U]))) {
        __Vtemp_5 = vlSelf->functionalTB__DOT__check_names
            [1U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_5),5,(0x1fU & (IData)(
                                                     (vlSelf->functionalTB__DOT__checks
                                                      [1U] 
                                                      >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [1U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_7 = vlSelf->functionalTB__DOT__check_names
            [1U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_7),5,(0x1fU & (IData)(
                                                     (vlSelf->functionalTB__DOT__checks
                                                      [1U] 
                                                      >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [1U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [2U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [2U]))) {
        __Vtemp_9 = vlSelf->functionalTB__DOT__check_names
            [2U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_9),5,(0x1fU & (IData)(
                                                     (vlSelf->functionalTB__DOT__checks
                                                      [2U] 
                                                      >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [2U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_11 = vlSelf->functionalTB__DOT__check_names
            [2U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_11),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [2U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [2U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [3U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [3U]))) {
        __Vtemp_13 = vlSelf->functionalTB__DOT__check_names
            [3U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_13),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [3U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [3U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_15 = vlSelf->functionalTB__DOT__check_names
            [3U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_15),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [3U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [3U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [4U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [4U]))) {
        __Vtemp_17 = vlSelf->functionalTB__DOT__check_names
            [4U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_17),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [4U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [4U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_19 = vlSelf->functionalTB__DOT__check_names
            [4U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_19),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [4U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [4U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [5U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [5U]))) {
        __Vtemp_21 = vlSelf->functionalTB__DOT__check_names
            [5U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_21),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [5U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [5U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_23 = vlSelf->functionalTB__DOT__check_names
            [5U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_23),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [5U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [5U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [6U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [6U]))) {
        __Vtemp_25 = vlSelf->functionalTB__DOT__check_names
            [6U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_25),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [6U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [6U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_27 = vlSelf->functionalTB__DOT__check_names
            [6U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_27),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [6U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [6U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
        = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
        [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                           [7U] >> 0x20U)))];
    if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
         == (IData)(vlSelf->functionalTB__DOT__checks
                    [7U]))) {
        __Vtemp_29 = vlSelf->functionalTB__DOT__check_names
            [7U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                  -1,&(__Vtemp_29),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [7U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [7U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__pass_count);
    } else {
        __Vtemp_31 = vlSelf->functionalTB__DOT__check_names
            [7U];
        VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                  -1,&(__Vtemp_31),5,(0x1fU & (IData)(
                                                      (vlSelf->functionalTB__DOT__checks
                                                       [7U] 
                                                       >> 0x20U))),
                  32,(IData)(vlSelf->functionalTB__DOT__checks
                             [7U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
        vlSelf->functionalTB__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->functionalTB__DOT__fail_count);
    }
    VL_WRITEF("  ------------------------------------------------------------\n");
    if ((0U == vlSelf->functionalTB__DOT__fail_count)) {
        VL_WRITEF("  RESULT: ALL %0d CHECKS PASSED \342\234\223\n",
                  32,vlSelf->functionalTB__DOT__pass_count);
    } else {
        VL_WRITEF("  RESULT: %0d PASSED  %0d FAILED \342\234\227\n",
                  32,vlSelf->functionalTB__DOT__pass_count,
                  32,vlSelf->functionalTB__DOT__fail_count);
    }
    VL_WRITEF("=============================================================\n\n");
    VL_FINISH_MT("tb/functionalTB.sv", 118, "");
}

VL_INLINE_OPT VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__2(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    std::string __Vtemp_2;
    std::string __Vtemp_4;
    std::string __Vtemp_6;
    std::string __Vtemp_8;
    std::string __Vtemp_10;
    std::string __Vtemp_12;
    std::string __Vtemp_14;
    std::string __Vtemp_16;
    std::string __Vtemp_18;
    std::string __Vtemp_20;
    std::string __Vtemp_22;
    std::string __Vtemp_24;
    std::string __Vtemp_26;
    std::string __Vtemp_28;
    std::string __Vtemp_30;
    std::string __Vtemp_32;
    // Body
    vlSelf->functionalTB__DOT__prev_pc = 0xffffffffU;
    vlSelf->functionalTB__DOT__stable_count = 0U;
    while (vlSelf->functionalTB__DOT__rst) {
        co_await vlSelf->__VtrigSched_h1a6779af__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ functionalTB.rst))", 
                                                           "tb/functionalTB.sv", 
                                                           128);
    }
    while (1U) {
        co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge functionalTB.clk)", 
                                                           "tb/functionalTB.sv", 
                                                           130);
        if ((((vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister 
               == vlSelf->functionalTB__DOT__prev_pc) 
              & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)))) {
            vlSelf->functionalTB__DOT__stable_count 
                = ((IData)(1U) + vlSelf->functionalTB__DOT__stable_count);
            if (VL_UNLIKELY(VL_LTES_III(32, 5U, vlSelf->functionalTB__DOT__stable_count))) {
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   134);
                VL_WRITEF("T=%0t | [HALT] PC stable at %08x\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          32,vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister);
                vlSelf->functionalTB__DOT__perf_print = 1U;
                co_await vlSelf->__VtrigSched_h447abc80__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge functionalTB.clk)", 
                                                                   "tb/functionalTB.sv", 
                                                                   137);
                vlSelf->functionalTB__DOT__perf_print = 0U;
                vlSelf->functionalTB__DOT__pass_count = 0U;
                vlSelf->functionalTB__DOT__fail_count = 0U;
                VL_WRITEF("\n=============================================================\n  REGISTER FILE CHECK\n=============================================================\n  Instruction               REG   EXPECTED    ACTUAL      STATUS\n  ------------------------------------------------------------\n");
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [0U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [0U]))) {
                    __Vtemp_2 = vlSelf->functionalTB__DOT__check_names
                        [0U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_2),5,(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->functionalTB__DOT__checks
                                                            [0U] 
                                                            >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [0U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_4 = vlSelf->functionalTB__DOT__check_names
                        [0U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_4),5,(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->functionalTB__DOT__checks
                                                            [0U] 
                                                            >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [0U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [1U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [1U]))) {
                    __Vtemp_6 = vlSelf->functionalTB__DOT__check_names
                        [1U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_6),5,(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->functionalTB__DOT__checks
                                                            [1U] 
                                                            >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [1U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_8 = vlSelf->functionalTB__DOT__check_names
                        [1U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_8),5,(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->functionalTB__DOT__checks
                                                            [1U] 
                                                            >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [1U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [2U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [2U]))) {
                    __Vtemp_10 = vlSelf->functionalTB__DOT__check_names
                        [2U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_10),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [2U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [2U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_12 = vlSelf->functionalTB__DOT__check_names
                        [2U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_12),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [2U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [2U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [3U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [3U]))) {
                    __Vtemp_14 = vlSelf->functionalTB__DOT__check_names
                        [3U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_14),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [3U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [3U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_16 = vlSelf->functionalTB__DOT__check_names
                        [3U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_16),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [3U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [3U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [4U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [4U]))) {
                    __Vtemp_18 = vlSelf->functionalTB__DOT__check_names
                        [4U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_18),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [4U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [4U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_20 = vlSelf->functionalTB__DOT__check_names
                        [4U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_20),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [4U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [4U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [5U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [5U]))) {
                    __Vtemp_22 = vlSelf->functionalTB__DOT__check_names
                        [5U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_22),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [5U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [5U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_24 = vlSelf->functionalTB__DOT__check_names
                        [5U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_24),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [5U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [5U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [6U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [6U]))) {
                    __Vtemp_26 = vlSelf->functionalTB__DOT__check_names
                        [6U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_26),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [6U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [6U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_28 = vlSelf->functionalTB__DOT__check_names
                        [6U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_28),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [6U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [6U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                    = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                    [(0x1fU & (IData)((vlSelf->functionalTB__DOT__checks
                                       [7U] >> 0x20U)))];
                if ((vlSelf->functionalTB__DOT__run_checks__Vstatic__actual 
                     == (IData)(vlSelf->functionalTB__DOT__checks
                                [7U]))) {
                    __Vtemp_30 = vlSelf->functionalTB__DOT__check_names
                        [7U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  PASS\n",
                              -1,&(__Vtemp_30),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [7U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [7U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__pass_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__pass_count);
                } else {
                    __Vtemp_32 = vlSelf->functionalTB__DOT__check_names
                        [7U];
                    VL_WRITEF("  %-24@  $%-2#   0x%08x  0x%08x  FAIL <<<\n",
                              -1,&(__Vtemp_32),5,(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->functionalTB__DOT__checks
                                                             [7U] 
                                                             >> 0x20U))),
                              32,(IData)(vlSelf->functionalTB__DOT__checks
                                         [7U]),32,vlSelf->functionalTB__DOT__run_checks__Vstatic__actual);
                    vlSelf->functionalTB__DOT__fail_count 
                        = ((IData)(1U) + vlSelf->functionalTB__DOT__fail_count);
                }
                VL_WRITEF("  ------------------------------------------------------------\n");
                if ((0U == vlSelf->functionalTB__DOT__fail_count)) {
                    VL_WRITEF("  RESULT: ALL %0d CHECKS PASSED \342\234\223\n",
                              32,vlSelf->functionalTB__DOT__pass_count);
                } else {
                    VL_WRITEF("  RESULT: %0d PASSED  %0d FAILED \342\234\227\n",
                              32,vlSelf->functionalTB__DOT__pass_count,
                              32,vlSelf->functionalTB__DOT__fail_count);
                }
                VL_WRITEF("=============================================================\n\n");
                VL_FINISH_MT("tb/functionalTB.sv", 140, "");
            }
        } else {
            vlSelf->functionalTB__DOT__stable_count = 0U;
            vlSelf->functionalTB__DOT__prev_pc = vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister;
        }
    }
}

VL_INLINE_OPT VlCoroutine VfunctionalTB___024root___eval_initial__TOP__Vtiming__3(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/functionalTB.sv", 
                                           11);
        vlSelf->__Vdlyvval__functionalTB__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->functionalTB__DOT__clk)));
        vlSelf->__Vdlyvset__functionalTB__DOT__clk__v0 = 1U;
    }
}

void VfunctionalTB___024root___eval_act(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 128> VfunctionalTB__ConstPool__TABLE_ha69390be_0;
extern const VlUnpacked<CData/*0:0*/, 128> VfunctionalTB__ConstPool__TABLE_h99f9b8cb_0;
extern const VlUnpacked<CData/*3:0*/, 512> VfunctionalTB__ConstPool__TABLE_h1e3acbf7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h74e48922_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h9fb9a08b_0;
extern const VlUnpacked<CData/*2:0*/, 64> VfunctionalTB__ConstPool__TABLE_ha574114e_0;

VL_INLINE_OPT void VfunctionalTB___024root___nba_sequent__TOP__0(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0;
    IData/*31:0*/ __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = 0;
    CData/*0:0*/ __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = 0;
    IData/*22:0*/ __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = 0;
    CData/*6:0*/ __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*22:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 0;
    IData/*22:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v8;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v9;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v10;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v11;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v12;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v13;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v14;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v15;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v16;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v17;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v18;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v19;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v20;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v21;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v22;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v23;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v24;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v25;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v26;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v27;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v28;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v29;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v30;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v31;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v32;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v33;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v34;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v35;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v36;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v37;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v38;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v39;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v40;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v41;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v42;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v43;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v44;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v45;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v46;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v47;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v48;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v49;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v50;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v51;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v52;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v53;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v54;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v55;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v56;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v57;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v58;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v59;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v60;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v61;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v62;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v63;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v64;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v65;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v66;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v67;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v68;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v69;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v70;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v71;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v72;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v73;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v74;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v75;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v76;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v77;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v78;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v79;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v80;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v81;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v82;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v83;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v84;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v85;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v86;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v87;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v88;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v89;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v90;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v91;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v92;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v93;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v94;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v95;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v96;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v97;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v98;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v99;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v100;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v101;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v102;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v103;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v104;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v105;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v106;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v107;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v108;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v109;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v110;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v111;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v112;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v113;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v114;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v115;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v116;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v117;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v118;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v119;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v120;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v121;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v122;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v123;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v124;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v125;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v126;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v127;
    __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 0;
    CData/*0:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*22:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v8;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v9;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v10;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v11;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v12;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v13;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v14;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v15;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v16;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v17;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v18;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v19;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v20;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v21;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v22;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v23;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v24;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v25;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v26;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v27;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v28;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v29;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v30;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v31;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v32;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v33;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v34;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v35;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v36;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v37;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v38;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v39;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v40;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v41;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v42;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v43;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v44;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v45;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v46;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v47;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v48;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v49;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v50;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v51;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v52;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v53;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v54;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v55;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v56;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v57;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v58;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v59;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v60;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v61;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v62;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v63;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v64;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v65;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v66;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v67;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v68;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v69;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v70;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v71;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v72;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v73;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v74;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v75;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v76;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v77;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v78;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v79;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v80;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v81;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v82;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v83;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v84;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v85;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v86;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v87;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v88;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v89;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v90;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v91;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v92;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v93;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v94;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v95;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v96;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v97;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v98;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v99;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v100;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v101;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v102;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v103;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v104;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v105;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v106;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v107;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v108;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v109;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v110;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v111;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v112;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v113;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v114;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v115;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v116;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v117;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v118;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v119;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v120;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v121;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v122;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v123;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v124;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v125;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v126;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 = 0;
    CData/*1:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v127;
    __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 = 0;
    CData/*0:0*/ __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0;
    CData/*4:0*/ __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0;
    SData/*9:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvval__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    __Vdlyvset__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1;
    __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvdim0__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    IData/*31:0*/ __Vdlyvval__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvval__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    CData/*0:0*/ __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles;
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits;
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses;
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired;
    __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired = 0;
    QData/*63:0*/ __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions;
    __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions = 0;
    // Body
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->functionalTB__DOT__rst))))) {
        VL_WRITEF("T=%0t [DCACHE]  mem_read=%b, mem_write=%b, mem_ready=%b, addr=%08x\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid),
                  1,vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write,
                  1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready),
                  32,vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr);
    }
    __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
        = vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy 
        = vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    __Vdlyvset__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 0U;
    __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses;
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses;
    __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits;
    __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set 
        = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
        = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way 
        = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 0U;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg 
        = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
    __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
        = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->functionalTB__DOT__rst)) 
                     & (0U != vlSelf->functionalTB__DOT__dut__DOT__instID)))) {
        VL_WRITEF("T=%0t | [ID ] instID=%08x\n",64,
                  VL_TIME_UNITED_Q(1),-12,32,vlSelf->functionalTB__DOT__dut__DOT__instID);
    }
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelf->functionalTB__DOT__rst)) 
                     & ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX)) 
                        | (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMEX)))))) {
        VL_WRITEF("T=%0t | [EX ] WBEX=%02b MEMEX=%03b AluRes=%08x WrtReg=%0#\n",
                  64,VL_TIME_UNITED_Q(1),-12,2,(IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX),
                  3,vlSelf->functionalTB__DOT__dut__DOT__MEMEX,
                  32,((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                       ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                           ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                               ? 0U : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                        ? 0U : (~ (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                   | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                           : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                               ? 0U : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                        ? 0U : VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                       : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                           ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                               ? ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                   ? ((vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                       >> 0x1fU) ? 1U
                                       : 0U) : 0U) : 0U)
                           : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                               ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                               : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                   ? (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                      | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                   : (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                      & vlSelf->functionalTB__DOT__dut__DOT__AluInb))))),
                  5,((0x10U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX))
                      ? (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)
                      : (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX)));
    }
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelf->functionalTB__DOT__rst)) 
                      & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                         >> 1U)) & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB))))) {
        VL_WRITEF("T=%0t | [WB ] Writing reg[%0#] = %08x\n",
                  64,VL_TIME_UNITED_Q(1),-12,5,(IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB),
                  32,vlSelf->functionalTB__DOT__dut__DOT__finalResultWB);
    }
    __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired 
        = vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired;
    __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 0U;
    __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 0U;
    VL_WRITEF("T=%0t | PC=%08x ic_stall=%b dc_stall=%b pcWrite=%b instID=%08x WBWB=%02b WriteReg=%0# WriteData=%08x\n",
              64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister,
              1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall),
              1,vlSelf->functionalTB__DOT__dut__DOT__dc_stall,
              1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__pcWrite),
              32,vlSelf->functionalTB__DOT__dut__DOT__instID,
              2,(IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB),
              5,vlSelf->functionalTB__DOT__dut__DOT__writeRegWB,
              32,vlSelf->functionalTB__DOT__dut__DOT__finalResultWB);
    if (vlSelf->functionalTB__DOT__rst) {
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY(vlSelf->functionalTB__DOT__perf_print)) {
        vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI 
            = ((0ULL < vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired)
                ? (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles) 
                   / VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired))
                : 0.0);
        vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate 
            = ((0ULL < (vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits 
                        + vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses))
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses) 
                            / VL_ITOR_D_Q(64, (vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits 
                                               + vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses))))
                : 0.0);
        vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate 
            = ((0ULL < (vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits 
                        + vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses))
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses) 
                            / VL_ITOR_D_Q(64, (vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits 
                                               + vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses))))
                : 0.0);
        vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate 
            = ((0ULL < vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions)
                ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions) 
                            / VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions)))
                : 0.0);
        VL_WRITEF("\n=============================================================\n  PERFORMANCE COUNTER REPORT\n=============================================================\n  Total cycles            : %0#\n  Instructions retired    : %0#\n  CPI                     : %.3f\n-------------------------------------------------------------\n  ICache hits             : %0#\n  ICache misses           : %0#\n  ICache miss rate        : %.1f%%\n  ICache stall cycles     : %0#  (%.1f%% of total)\n",
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles,
                  64,((0ULL < vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles)
                       ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles) 
                                   / VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles)))
                       : 0.0));
        VL_WRITEF("-------------------------------------------------------------\n  DCache hits             : %0#\n  DCache misses           : %0#\n  DCache miss rate        : %.1f%%\n  DCache stall cycles     : %0#  (%.1f%% of total)\n-------------------------------------------------------------\n  Branches executed       : %0#\n  Branch mispredicts      : %0#\n  Mispredict rate         : %.1f%%\n  Flush penalty/mispredict: 2 cycles\n  Total branch penalty    : %0# cycles\n",
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles,
                  64,((0ULL < vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles)
                       ? (100.0 * (VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles) 
                                   / VL_ITOR_D_Q(64, vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles)))
                       : 0.0),64,vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions,
                  64,vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate,
                  64,VL_SHIFTL_QQI(64,64,32, vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions, 1U));
        VL_WRITEF("=============================================================\n\n");
    }
    if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__rst)))) {
        if ((((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        }
        if (((3U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready))) {
            __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op)
                    ? vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg
                    : vlSelf->functionalTB__DOT__dut__DOT__umem_rdata);
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
    }
    vlSelf->functionalTB__DOT__perfCounter__DOT__branch_taken_prev = 0U;
    __Vtableidx1 = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall) 
                     << 6U) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall) 
                                << 5U) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                           << 2U) | 
                                          (((IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready) 
                                            << 1U) 
                                           | (IData)(vlSelf->functionalTB__DOT__rst)))));
    if (((IData)(vlSelf->functionalTB__DOT__rst) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__IFflushEX))) {
        vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID = 0U;
    } else if (vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite) {
        vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID 
            = vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF;
    }
    if (vlSelf->functionalTB__DOT__rst) {
        vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses = 0ULL;
        __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits = 0ULL;
        __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 1U;
        __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 1U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 = 0U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 = 0U;
        __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired = 0ULL;
        __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1 = 1U;
        vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__MEMDataWB = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__AluResWB = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__FuncEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__regData1EX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__regData2EX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__RsEX = 0U;
        vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions = 0ULL;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__WBWB = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__writeRegWB = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__MEMMEM = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__AluResMEM = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__WBMEM = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__MEMEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__WBEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__EXEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__RdEX = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__RtEX = 0U;
    } else {
        vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles 
            = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles);
        if (vlSelf->functionalTB__DOT__dut__DOT__ic_stall) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles);
        }
        if (vlSelf->functionalTB__DOT__dut__DOT__dc_stall) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles);
        }
        if ((IData)(((((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMID) 
                       >> 2U) & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall))) 
                     & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall))))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions);
        }
        if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall) 
             & (~ (IData)(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_prev)))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses);
        }
        if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall) 
             & (~ (IData)(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev)))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses);
        }
        if ((((IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_ready) 
              & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev)))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits);
        }
        if ((((((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                >> 1U) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM)) 
              & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall))) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits);
        }
        if (((3U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready))) {
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op;
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
        if ((((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        }
        if (((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready))) {
            __Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [1U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [2U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [3U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [4U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [5U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [6U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [7U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [8U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [9U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xaU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xbU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xcU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xdU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xeU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xfU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x10U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x11U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x12U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x13U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x14U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x15U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x16U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x17U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x18U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x19U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x20U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x21U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x22U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x23U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x24U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x25U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x26U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x27U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x28U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x29U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x30U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x31U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x32U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x33U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x34U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x35U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x36U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x37U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x38U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x39U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x40U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x41U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x42U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x43U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x44U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x45U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x46U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x47U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x48U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x49U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x50U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x51U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x52U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x53U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x54U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x55U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x56U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x57U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x58U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x59U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x60U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x61U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x62U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x63U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x64U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x65U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x66U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x67U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x68U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x69U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x70U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x71U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x72U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x73U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x74U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x75U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x76U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x77U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x78U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x79U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [1U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [2U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [3U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [4U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [5U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [6U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [7U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v8 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [8U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v9 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [9U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v10 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xaU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v11 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xbU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v12 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xcU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v13 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xdU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v14 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xeU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v15 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0xfU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v16 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x10U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v17 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x11U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v18 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x12U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v19 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x13U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v20 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x14U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v21 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x15U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v22 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x16U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v23 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x17U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v24 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x18U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v25 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x19U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v26 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v27 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v28 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v29 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v30 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v31 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x1fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v32 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x20U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v33 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x21U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v34 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x22U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v35 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x23U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v36 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x24U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v37 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x25U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v38 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x26U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v39 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x27U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v40 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x28U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v41 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x29U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v42 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v43 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v44 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v45 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v46 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v47 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x2fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v48 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x30U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v49 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x31U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v50 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x32U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v51 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x33U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v52 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x34U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v53 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x35U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v54 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x36U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v55 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x37U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v56 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x38U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v57 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x39U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v58 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v59 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v60 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v61 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v62 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v63 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x3fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v64 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x40U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v65 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x41U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v66 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x42U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v67 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x43U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v68 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x44U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v69 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x45U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v70 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x46U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v71 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x47U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v72 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x48U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v73 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x49U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v74 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v75 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v76 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v77 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v78 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v79 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x4fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v80 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x50U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v81 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x51U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v82 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x52U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v83 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x53U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v84 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x54U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v85 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x55U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v86 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x56U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v87 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x57U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v88 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x58U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v89 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x59U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v90 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v91 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v92 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v93 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v94 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v95 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x5fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v96 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x60U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v97 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x61U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v98 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x62U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v99 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x63U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v100 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x64U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v101 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x65U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v102 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x66U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v103 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x67U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v104 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x68U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v105 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x69U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v106 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v107 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v108 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v109 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v110 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v111 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x6fU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v112 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x70U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v113 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x71U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v114 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x72U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v115 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x73U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v116 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x74U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v117 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x75U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v118 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x76U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v119 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x77U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v120 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x78U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v121 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x79U];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v122 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7aU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v123 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7bU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v124 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7cU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v125 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7dU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v126 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7eU];
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v127 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
            [0x7fU];
        if (((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
               & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB))) 
              & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall))) 
             & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)))) {
            __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired 
                = (1ULL + vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired);
        }
        if ((IData)((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                      >> 1U) & (~ ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)) 
                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall)))))) {
            if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB))) {
                __Vdlyvval__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->functionalTB__DOT__dut__DOT__finalResultWB;
                __Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 = 1U;
                __Vdlyvdim0__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33 
                    = vlSelf->functionalTB__DOT__dut__DOT__writeRegWB;
            }
        }
        vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state 
            = vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state;
        if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)))) {
            vlSelf->functionalTB__DOT__dut__DOT__MEMDataWB 
                = vlSelf->functionalTB__DOT__dut__DOT__dc_rdata;
            vlSelf->functionalTB__DOT__dut__DOT__AluResWB 
                = vlSelf->functionalTB__DOT__dut__DOT__AluResMEM;
            vlSelf->functionalTB__DOT__dut__DOT__WBWB 
                = vlSelf->functionalTB__DOT__dut__DOT__WBMEM;
            vlSelf->functionalTB__DOT__dut__DOT__writeRegWB 
                = vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM;
        }
        if (((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & ((IData)(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                | (IData)(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write)))) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op 
                = vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read;
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg 
                = vlSelf->functionalTB__DOT__dut__DOT__AluResMEM;
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op 
                = vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write;
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                = vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM;
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                = (vlSelf->functionalTB__DOT__dut__DOT__AluResMEM 
                   >> 9U);
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set 
                = (0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__AluResMEM 
                            >> 2U));
        }
        if ((1U & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)) 
                   & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall))))) {
            vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX 
                = vlSelf->functionalTB__DOT__dut__DOT__branchTargetID;
            vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX 
                = vlSelf->functionalTB__DOT__dut__DOT__signExtImmID;
            vlSelf->functionalTB__DOT__dut__DOT__FuncEX 
                = (0x3fU & vlSelf->functionalTB__DOT__dut__DOT__instID);
            vlSelf->functionalTB__DOT__dut__DOT__regData1EX 
                = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                           >> 0x15U))];
            vlSelf->functionalTB__DOT__dut__DOT__regData2EX 
                = vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                           >> 0x10U))];
            vlSelf->functionalTB__DOT__dut__DOT__RsEX 
                = (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                            >> 0x15U));
            vlSelf->functionalTB__DOT__dut__DOT__MEMMEM 
                = vlSelf->functionalTB__DOT__dut__DOT__MEMEX;
            vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM 
                = vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd;
            vlSelf->functionalTB__DOT__dut__DOT__AluResMEM 
                = ((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                    ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                        ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                            ? 0U : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                     ? 0U : (~ (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                        : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                            ? 0U : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                     ? 0U : VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                    : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                        ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                            ? ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                ? ((vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                    >> 0x1fU) ? 1U : 0U)
                                : 0U) : 0U) : ((2U 
                                                & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                    ? 
                                                   (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                                    : 
                                                   (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                    & vlSelf->functionalTB__DOT__dut__DOT__AluInb)))));
            vlSelf->functionalTB__DOT__dut__DOT__WBMEM 
                = vlSelf->functionalTB__DOT__dut__DOT__WBEX;
            vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM 
                = ((0x10U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX))
                    ? (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)
                    : (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX));
            vlSelf->functionalTB__DOT__dut__DOT__MEMEX 
                = (7U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID) 
                         >> 5U));
            vlSelf->functionalTB__DOT__dut__DOT__WBEX 
                = (3U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID) 
                         >> 8U));
            vlSelf->functionalTB__DOT__dut__DOT__EXEX 
                = (0x1fU & (IData)(vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID));
            vlSelf->functionalTB__DOT__dut__DOT__RdEX 
                = (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                            >> 0xbU));
            vlSelf->functionalTB__DOT__dut__DOT__RtEX 
                = (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                            >> 0x10U));
        }
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
    }
    if (((IData)(vlSelf->functionalTB__DOT__rst) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__IFflushEX))) {
        vlSelf->functionalTB__DOT__dut__DOT__instID = 0U;
    } else if (vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite) {
        vlSelf->functionalTB__DOT__dut__DOT__instID 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg;
    }
    if (VfunctionalTB__ConstPool__TABLE_ha69390be_0
        [__Vtableidx1]) {
        vlSelf->functionalTB__DOT__dut__DOT__dc_done 
            = VfunctionalTB__ConstPool__TABLE_h99f9b8cb_0
            [__Vtableidx1];
    }
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__ic_stall_cycles;
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__dc_stall_cycles;
    vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__branch_instructions;
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__dc_misses;
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__ic_misses;
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__ic_hits;
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__dc_hits;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][1U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][2U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][3U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][4U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][5U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][6U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][7U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][8U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][9U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xaU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xbU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xcU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xdU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xeU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0xfU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x10U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x11U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x12U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x13U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x14U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x15U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x16U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x17U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x18U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x19U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x1fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x20U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x21U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x22U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x23U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x24U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x25U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x26U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x27U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x28U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x29U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x2fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x30U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x31U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x32U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x33U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x34U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x35U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x36U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x37U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x38U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x39U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x3fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x40U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x41U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x42U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x43U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x44U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x45U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x46U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x47U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x48U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x49U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x4fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x50U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x51U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x52U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x53U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x54U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x55U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x56U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x57U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x58U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x59U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x5fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x60U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x61U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x62U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x63U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x64U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x65U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x66U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x67U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x68U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x69U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x6fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x70U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x71U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x72U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x73U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x74U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x75U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x76U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x77U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x78U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x79U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][0x7fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][1U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][2U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][3U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][4U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][5U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][6U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][7U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][8U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][9U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xaU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xbU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xcU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xdU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xeU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0xfU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x10U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x11U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x12U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x13U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x14U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x15U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x16U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x17U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x18U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x19U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x1fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x20U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x21U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x22U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x23U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x24U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x25U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x26U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x27U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x28U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x29U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x2fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x30U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x31U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x32U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x33U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x34U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x35U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x36U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x37U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x38U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x39U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x3fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x40U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x41U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x42U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x43U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x44U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x45U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x46U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x47U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x48U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x49U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x4fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x50U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x51U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x52U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x53U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x54U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x55U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x56U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x57U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x58U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x59U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x5fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x60U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x61U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x62U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x63U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x64U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x65U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x66U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x67U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x68U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x69U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x6fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x70U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x71U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x72U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x73U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x74U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x75U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x76U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x77U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x78U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x79U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][0x7fU] = 0U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v256] = 1U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][1U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][2U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][3U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][4U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][5U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][6U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][7U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][8U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][9U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xaU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xbU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xcU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xdU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xeU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0xfU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x10U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x11U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x12U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x13U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x14U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x15U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x16U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x17U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x18U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x19U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x1fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x20U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x21U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x22U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x23U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x24U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x25U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x26U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x27U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x28U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x29U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x2fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x30U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x31U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x32U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x33U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x34U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x35U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x36U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x37U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x38U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x39U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x3fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x40U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x41U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x42U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x43U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x44U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x45U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x46U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x47U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x48U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x49U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x4fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x50U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x51U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x52U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x53U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x54U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x55U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x56U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x57U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x58U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x59U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x5fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x60U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x61U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x62U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x63U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x64U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x65U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x66U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x67U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x68U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x69U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x6fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x70U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x71U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x72U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x73U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x74U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x75U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x76U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x77U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x78U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x79U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][0x7fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][1U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][2U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][3U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][4U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][5U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][6U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][7U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][8U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][9U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xaU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xbU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xcU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xdU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xeU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0xfU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x10U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x11U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x12U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x13U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x14U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x15U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x16U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x17U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x18U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x19U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x1fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x20U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x21U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x22U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x23U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x24U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x25U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x26U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x27U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x28U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x29U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x2fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x30U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x31U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x32U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x33U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x34U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x35U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x36U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x37U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x38U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x39U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x3fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x40U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x41U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x42U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x43U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x44U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x45U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x46U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x47U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x48U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x49U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x4fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x50U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x51U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x52U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x53U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x54U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x55U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x56U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x57U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x58U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x59U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x5fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x60U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x61U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x62U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x63U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x64U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x65U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x66U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x67U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x68U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x69U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x6fU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x70U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x71U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x72U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x73U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x74U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x75U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x76U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x77U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x78U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x79U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][0x7fU] = 0U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v256] = 1U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v257;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v258] = 0U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[8U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v8;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[9U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v9;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xaU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v10;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xbU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v11;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xcU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v12;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xdU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v13;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xeU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v14;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0xfU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v15;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x10U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v16;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x11U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v17;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x12U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v18;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x13U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v19;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x14U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v20;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x15U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v21;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x16U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v22;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x17U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v23;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x18U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v24;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x19U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v25;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v26;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v27;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v28;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v29;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v30;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v31;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x20U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v32;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x21U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v33;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x22U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v34;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x23U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v35;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x24U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v36;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x25U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v37;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x26U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v38;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x27U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v39;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x28U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v40;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x29U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v41;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v42;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v43;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v44;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v45;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v46;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v47;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x30U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v48;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x31U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v49;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x32U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v50;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x33U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v51;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x34U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v52;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x35U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v53;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x36U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v54;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x37U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v55;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x38U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v56;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x39U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v57;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v58;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v59;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v60;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v61;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v62;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v63;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x40U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v64;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x41U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v65;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x42U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v66;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x43U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v67;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x44U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v68;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x45U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v69;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x46U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v70;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x47U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v71;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x48U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v72;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x49U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v73;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v74;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v75;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v76;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v77;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v78;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v79;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x50U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v80;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x51U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v81;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x52U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v82;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x53U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v83;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x54U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v84;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x55U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v85;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x56U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v86;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x57U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v87;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x58U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v88;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x59U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v89;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v90;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v91;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v92;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v93;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v94;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v95;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x60U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v96;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x61U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v97;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x62U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v98;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x63U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v99;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x64U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v100;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x65U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v101;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x66U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v102;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x67U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v103;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x68U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v104;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x69U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v105;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v106;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v107;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v108;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v109;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v110;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v111;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x70U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v112;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x71U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v113;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x72U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v114;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x73U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v115;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x74U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v116;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x75U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v117;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x76U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v118;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x77U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v119;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x78U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v120;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x79U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v121;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v122;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v123;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v124;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v125;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v126;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v127;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v1;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v2;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v3;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v4;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v5;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v6;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v7;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[8U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v8;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[9U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v9;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xaU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v10;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xbU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v11;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xcU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v12;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xdU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v13;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xeU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v14;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0xfU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v15;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x10U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v16;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x11U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v17;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x12U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v18;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x13U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v19;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x14U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v20;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x15U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v21;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x16U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v22;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x17U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v23;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x18U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v24;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x19U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v25;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v26;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v27;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v28;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v29;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v30;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x1fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v31;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x20U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v32;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x21U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v33;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x22U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v34;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x23U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v35;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x24U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v36;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x25U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v37;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x26U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v38;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x27U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v39;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x28U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v40;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x29U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v41;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v42;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v43;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v44;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v45;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v46;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x2fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v47;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x30U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v48;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x31U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v49;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x32U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v50;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x33U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v51;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x34U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v52;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x35U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v53;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x36U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v54;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x37U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v55;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x38U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v56;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x39U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v57;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v58;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v59;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v60;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v61;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v62;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x3fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v63;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x40U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v64;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x41U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v65;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x42U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v66;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x43U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v67;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x44U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v68;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x45U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v69;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x46U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v70;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x47U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v71;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x48U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v72;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x49U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v73;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v74;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v75;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v76;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v77;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v78;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x4fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v79;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x50U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v80;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x51U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v81;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x52U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v82;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x53U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v83;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x54U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v84;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x55U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v85;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x56U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v86;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x57U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v87;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x58U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v88;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x59U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v89;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v90;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v91;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v92;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v93;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v94;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x5fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v95;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x60U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v96;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x61U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v97;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x62U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v98;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x63U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v99;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x64U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v100;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x65U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v101;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x66U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v102;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x67U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v103;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x68U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v104;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x69U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v105;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v106;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v107;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v108;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v109;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v110;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x6fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v111;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x70U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v112;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x71U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v113;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x72U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v114;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x73U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v115;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x74U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v116;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x75U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v117;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x76U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v118;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x77U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v119;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x78U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v120;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x79U] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v121;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7aU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v122;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7bU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v123;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7cU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v124;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7dU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v125;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7eU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v126;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0x7fU] 
        = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v127;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired 
        = __Vdly__functionalTB__DOT__perfCounter__DOT__instruction_retired;
    vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0U] = 0U;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v1) {
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[1U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[2U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[3U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[4U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[5U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[6U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[7U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[8U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[9U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xaU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xbU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xcU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xdU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xeU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0xfU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x10U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x11U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x12U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x13U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x14U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x15U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x16U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x17U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x18U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x19U] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1aU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1bU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1cU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1dU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1eU] = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0x1fU] = 0U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33) {
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[__Vdlyvdim0__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register__v33;
    }
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_prev 
        = ((1U & (~ (IData)(vlSelf->functionalTB__DOT__rst))) 
           && (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall));
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev 
        = ((1U & (~ (IData)(vlSelf->functionalTB__DOT__rst))) 
           && (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall));
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read 
        = (1U & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done)) 
                 & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                    >> 1U)));
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write 
        = (1U & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done)) 
                 & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM)));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
        = (0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set];
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = 1U;
            }
            if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
                    = ((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                        << 9U) | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                  << 2U));
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = 1U;
            } else {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
                    = ((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                        [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                        [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                        << 9U) | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                  << 2U));
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->functionalTB__DOT__dut__DOT__AluResMEM
            : vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->functionalTB__DOT__dut__DOT__forwardA = 0U;
    if ((((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->functionalTB__DOT__dut__DOT__RsEX))) 
         & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        vlSelf->functionalTB__DOT__dut__DOT__forwardA = 2U;
    } else if (((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->functionalTB__DOT__dut__DOT__RsEX)))) {
        vlSelf->functionalTB__DOT__dut__DOT__forwardA = 1U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current 
        = ((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
            [1U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))] << 1U) | vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
           [0U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))]);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
              [0U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U))] & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                         [0U][(0x7fU 
                                               & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 2U))] 
                                         == (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                             >> 9U))));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
               [1U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                              >> 2U))] & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                          [1U][(0x7fU 
                                                & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 2U))] 
                                          == (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                              >> 9U))) 
              << 1U));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current)))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current) 
                  >> 1U)))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 
        = (1U & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                      >> 2U))]);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way 
        = functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    __Vtableidx3 = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX 
        = VfunctionalTB__ConstPool__TABLE_h1e3acbf7_0
        [__Vtableidx3];
    vlSelf->functionalTB__DOT__dut__DOT__forwardB = 0U;
    if ((((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
            >> 1U) & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM))) 
          & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
             == (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX))) 
         & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
               >> 1U)))) {
        vlSelf->functionalTB__DOT__dut__DOT__forwardB = 2U;
    } else if (((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX)))) {
        vlSelf->functionalTB__DOT__dut__DOT__forwardB = 1U;
    }
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 1U;
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff 
        = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done) 
           | (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
        = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
    vlSelf->functionalTB__DOT__dut__DOT__dc_rdata = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vilp] 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 1U;
    }
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            }
        }
    }
    if (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(0x7fU 
                                                                                & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 2U))] 
            = (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))] | (3U & ((IData)(1U) 
                                            << (1U 
                                                & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way)
                                  ? 1U : 0U)));
    }
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__dc_rdata 
                    = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op)
                        ? vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                       [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                       [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set]
                        : 0U);
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                vlSelf->functionalTB__DOT__dut__DOT__dc_rdata 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index]
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set];
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB))
            ? vlSelf->functionalTB__DOT__dut__DOT__dc_rdata
            : vlSelf->functionalTB__DOT__dut__DOT__AluResWB);
    vlSelf->functionalTB__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->functionalTB__DOT__dut__DOT__instID));
    vlSelf->functionalTB__DOT__dut__DOT__branchTargetID 
        = (vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard 
        = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
            >> 1U) & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                       == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                    >> 0x15U))) | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                       >> 0x10U)))));
    __Vtableidx2 = (vlSelf->functionalTB__DOT__dut__DOT__instID 
                    >> 0x1aU);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite 
        = VfunctionalTB__ConstPool__TABLE_h74e48922_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg 
        = VfunctionalTB__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch 
        = VfunctionalTB__ConstPool__TABLE_hac88bb16_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemRead 
        = VfunctionalTB__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemWrite 
        = VfunctionalTB__ConstPool__TABLE_h9c50cc6f_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst 
        = VfunctionalTB__ConstPool__TABLE_h3e8a5fce_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc 
        = VfunctionalTB__ConstPool__TABLE_h9fb9a08b_0
        [__Vtableidx2];
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp 
        = VfunctionalTB__ConstPool__TABLE_ha574114e_0
        [__Vtableidx2];
    if (vlSelf->functionalTB__DOT__rst) {
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg = 0U;
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = 0U;
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = 0U;
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = 0U;
    } else if ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                [vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index]
                [(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))];
        } else {
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg 
                = vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister;
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
                = (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                   >> 9U);
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set 
                = (0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                            >> 2U));
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if (vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready) {
            __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__umem_rdata;
            __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg 
                = vlSelf->functionalTB__DOT__dut__DOT__umem_rdata;
            __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 2U;
            __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
            __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
            __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        }
    } else {
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
    }
    if (VL_UNLIKELY(((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
                     & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready)))) {
        VL_WRITEF("T=%0t [ICACHE] mem_ready! addr=%08x mem_rdata=%08x fill_set=%0# way=%0#\n",
                  64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg,
                  32,vlSelf->functionalTB__DOT__dut__DOT__umem_rdata,
                  7,(IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),
                  1,vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way);
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__umem_rdata;
        __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 = 1U;
        __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg 
            = vlSelf->functionalTB__DOT__dut__DOT__umem_rdata;
        __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 2U;
        __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
        __Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 = 1U;
        __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        __Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
        __Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
    }
    if (vlSelf->functionalTB__DOT__rst) {
        __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0U;
        __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__umem_ready = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister = 0U;
    } else {
        vlSelf->functionalTB__DOT__dut__DOT__umem_ready = 0U;
        if (((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy)) 
             & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__umem_read) 
                | (IData)(vlSelf->functionalTB__DOT__dut__DOT__umem_write)))) {
            __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 1U;
            __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer = 0x14U;
        } else if (vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy) {
            __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
                = (0x1fU & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer) 
                            - (IData)(1U)));
            if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer))) {
                __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy = 0U;
                vlSelf->functionalTB__DOT__dut__DOT__umem_ready = 1U;
                if (vlSelf->functionalTB__DOT__dut__DOT__umem_read) {
                    vlSelf->functionalTB__DOT__dut__DOT__umem_rdata 
                        = vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram
                        [(0x3ffU & (vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
                                    >> 2U))];
                }
                if (vlSelf->functionalTB__DOT__dut__DOT__umem_write) {
                    __Vdlyvval__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 
                        = vlSelf->functionalTB__DOT__dut__DOT__umem_wdata;
                    __Vdlyvset__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 = 1U;
                    __Vdlyvdim0__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0 
                        = (0x3ffU & (vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
                                     >> 2U));
                }
            }
        }
        if (vlSelf->functionalTB__DOT__dut__DOT__pcWrite) {
            vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister 
                = vlSelf->functionalTB__DOT__dut__DOT__nextPc;
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
        = ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardA))
            ? vlSelf->functionalTB__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardA))
                ? vlSelf->functionalTB__DOT__dut__DOT__finalResultWB
                : vlSelf->functionalTB__DOT__dut__DOT__regData1EX));
    vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd 
        = ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardB))
            ? vlSelf->functionalTB__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardB))
                ? vlSelf->functionalTB__DOT__dut__DOT__finalResultWB
                : vlSelf->functionalTB__DOT__dut__DOT__regData2EX));
    vlSelf->functionalTB__DOT__dut__DOT__AluInb = (
                                                   (1U 
                                                    & (IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX))
                                                    ? vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX
                                                    : vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd);
    vlSelf->functionalTB__DOT__dut__DOT__MEMID = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemRead) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemWrite)));
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX 
        = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch) 
           & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX) 
               >> 1U) & ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)) 
                         & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX) 
                             == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                          >> 0x15U))) 
                            | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX) 
                               == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                            >> 0x10U)))))));
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM 
        = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch) 
           & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
               >> 1U) & ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM)) 
                         & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
                             == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                          >> 0x15U))) 
                            | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
                               == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                            >> 0x10U)))))));
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way 
        = __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
        = __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set 
        = __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v1;
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg 
        = __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
        = __Vdly__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v1;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1][__Vdlyvdim1__functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v1] = 1U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand 
        = ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
            ? ((IData)(1U) + (~ vlSelf->functionalTB__DOT__dut__DOT__AluInb))
            : vlSelf->functionalTB__DOT__dut__DOT__AluInb);
    vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX = 
        (((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMEX) 
          >> 2U) & (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                    == vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd));
    vlSelf->functionalTB__DOT__dut__DOT__IFflushEX 
        = vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
           + vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand);
    vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy 
        = __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy;
    vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer 
        = __Vdly__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer;
    vlSelf->functionalTB__DOT__dut__DOT__umem_write = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__umem_wdata = 0U;
    if (__Vdlyvset__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0) {
        vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram[__Vdlyvdim0__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0] 
            = __Vdlyvval__functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram__v0;
    }
    vlSelf->functionalTB__DOT__dut__DOT__umem_read = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state 
        = vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
    vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready = 0U;
    if ((2U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if (vlSelf->functionalTB__DOT__dut__DOT__umem_ready) {
                vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready = 1U;
            }
        }
        if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
                if (vlSelf->functionalTB__DOT__dut__DOT__umem_ready) {
                    vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready = 1U;
                }
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->functionalTB__DOT__dut__DOT__nextPc = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX)
                                                    ? vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX
                                                    : vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if (vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 4U;
            }
        } else if (vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
            = ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))
                ? 0U : ((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                         [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                         [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                         & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                         [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                         [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set])
                         ? 2U : 3U));
    } else if (((IData)(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                | (IData)(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 1U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__umem_addr = 0U;
    if ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid) 
             | (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write))) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_write 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
            vlSelf->functionalTB__DOT__dut__DOT__umem_wdata 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            vlSelf->functionalTB__DOT__dut__DOT__umem_read 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
            vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 1U;
        } else if (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_read = 1U;
            vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 0U;
        }
    } else {
        if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
                vlSelf->functionalTB__DOT__dut__DOT__umem_write 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
                vlSelf->functionalTB__DOT__dut__DOT__umem_wdata 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
            }
        }
        if ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_read = 1U;
            if (vlSelf->functionalTB__DOT__dut__DOT__umem_ready) {
                vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_read 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
            if (vlSelf->functionalTB__DOT__dut__DOT__umem_ready) {
                vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
            }
        } else {
            vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = 2U;
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
            ? vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister
            : vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg);
    if ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid) 
             | (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write))) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
        } else if (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
                = (0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active);
        }
    } else if ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
            = (0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active);
    } else if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        vlSelf->functionalTB__DOT__dut__DOT__umem_addr 
            = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr;
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec 
        = ((vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
            [1U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))] << 1U) | vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
           [0U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))]);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
              [0U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U))] & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                         [0U][(0x7fU 
                                               & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 2U))] 
                                         == (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                             >> 9U))));
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
               [1U][(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                              >> 2U))] & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                          [1U][(0x7fU 
                                                & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 2U))] 
                                          == (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                              >> 9U))) 
              << 1U));
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec)))) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec) 
                  >> 1U)))) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 
        = (1U & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                      >> 2U))]);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way 
        = functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 1U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__ic_ready = 0U;
    if ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->functionalTB__DOT__dut__DOT__ic_ready = 1U;
        }
    } else if ((1U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->functionalTB__DOT__dut__DOT__ic_ready = 1U;
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vilp] 
            = vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 1U;
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[(0x7fU 
                                                                                & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                                                >> 2U))] 
            = (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next
               [(0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))] | (3U & ((IData)(1U) 
                                            << (1U 
                                                & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node))));
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node 
            = ((IData)(1U) + (VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node, 1U) 
                              + ((IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index)
                                  ? 1U : 0U)));
    }
    vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 1U;
    vlSelf->functionalTB__DOT__dut__DOT__ic_stall = 0U;
    if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_ready)))) {
        vlSelf->functionalTB__DOT__dut__DOT__ic_stall = 1U;
    }
    vlSelf->functionalTB__DOT__dut__DOT__dc_stall = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__pcWrite = 1U;
    vlSelf->functionalTB__DOT__dut__DOT__hazardSel = 1U;
    if (vlSelf->functionalTB__DOT__dut__DOT__ic_ready) {
        if ((1U & ((((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                     >> 1U) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM)) 
                   & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff))))) {
            vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__dc_stall = 1U;
            vlSelf->functionalTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__hazardSel = 0U;
        } else if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard) 
                    & ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardB))))) {
            vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__hazardSel = 0U;
        } else if ((((IData)(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX) 
                     | (IData)(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM)) 
                    & ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__forwardB))))) {
            vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->functionalTB__DOT__dut__DOT__hazardSel = 0U;
        }
    } else {
        vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__pcWrite = 0U;
        vlSelf->functionalTB__DOT__dut__DOT__hazardSel = 0U;
    }
    VL_WRITEF("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b \342\206\222 pcWrite=%b\nHDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b\n",
              1,vlSelf->functionalTB__DOT__dut__DOT__ic_stall,
              1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall),
              1,(1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                       >> 1U)),1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff),
              1,vlSelf->functionalTB__DOT__dut__DOT__pcWrite,
              1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard),
              1,vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX,
              1,(IData)(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM));
    vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID 
        = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__hazardSel)
            ? ((((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite) 
                 << 9U) | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg) 
                           << 8U)) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMID) 
                                       << 5U) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc)))))
            : 0U);
}

VL_INLINE_OPT void VfunctionalTB___024root___nba_sequent__TOP__1(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__functionalTB__DOT__clk__v0) {
        vlSelf->functionalTB__DOT__clk = vlSelf->__Vdlyvval__functionalTB__DOT__clk__v0;
        vlSelf->__Vdlyvset__functionalTB__DOT__clk__v0 = 0U;
    }
}

void VfunctionalTB___024root___eval_nba(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfunctionalTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfunctionalTB___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VfunctionalTB___024root___timing_resume(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h447abc80__0.resume("@(posedge functionalTB.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h1a6779af__0.resume("@([changed] (~ functionalTB.rst))");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VfunctionalTB___024root___timing_commit(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h447abc80__0.commit("@(posedge functionalTB.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h1a6779af__0.commit("@([changed] (~ functionalTB.rst))");
    }
}

void VfunctionalTB___024root___eval_triggers__act(VfunctionalTB___024root* vlSelf);

bool VfunctionalTB___024root___eval_phase__act(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VfunctionalTB___024root___eval_triggers__act(vlSelf);
    VfunctionalTB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VfunctionalTB___024root___timing_resume(vlSelf);
        VfunctionalTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VfunctionalTB___024root___eval_phase__nba(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VfunctionalTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__nba(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__act(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfunctionalTB___024root___eval(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VfunctionalTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/functionalTB.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VfunctionalTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/functionalTB.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VfunctionalTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VfunctionalTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VfunctionalTB___024root___eval_debug_assertions(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
