// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIcachecontroller.h for the primary calling header

#include "VIcachecontroller__pch.h"
#include "VIcachecontroller___024root.h"

VL_ATTR_COLD void VIcachecontroller___024root___eval_initial__TOP(VIcachecontroller___024root* vlSelf);
VlCoroutine VIcachecontroller___024root___eval_initial__TOP__Vtiming__0(VIcachecontroller___024root* vlSelf);
VlCoroutine VIcachecontroller___024root___eval_initial__TOP__Vtiming__1(VIcachecontroller___024root* vlSelf);

void VIcachecontroller___024root___eval_initial(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_initial\n"); );
    // Body
    VIcachecontroller___024root___eval_initial__TOP(vlSelf);
    VIcachecontroller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VIcachecontroller___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0 
        = vlSelf->pipelinedCpuTest__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VIcachecontroller___024root___eval_initial__TOP__Vtiming__0(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->pipelinedCpuTest__DOT__clk = 0U;
    VL_WRITEF("T=%0t | INITIAL PC=%x\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    vlSelf->pipelinedCpuTest__DOT__rst = 1U;
    VL_WRITEF("--- CPU Resetting ---\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "pipelinedCpuTest.sv", 
                                       16);
    vlSelf->pipelinedCpuTest__DOT__rst = 0U;
    VL_WRITEF("T=%0t | AFTER RESET PC=%x\n--- CPU Running ---\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    co_await vlSelf->__VdlySched.delay(0x1312d00ULL, 
                                       nullptr, "pipelinedCpuTest.sv", 
                                       22);
    VL_WRITEF("--- Simulation Finished ---\n");
    VL_FINISH_MT("pipelinedCpuTest.sv", 24, "");
}

VL_INLINE_OPT VlCoroutine VIcachecontroller___024root___eval_initial__TOP__Vtiming__1(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_initial__TOP__Vtiming__1\n"); );
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

VL_INLINE_OPT void VIcachecontroller___024root___ico_sequent__TOP__0(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ BPLRU__DOT__unnamedblk1__DOT__i;
    BPLRU__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->Read_data = ((IData)(vlSelf->MemRead) ? 
                         vlSelf->Memory__DOT__memory
                         [(0xffU & (vlSelf->address 
                                    >> 2U))] : 0U);
    vlSelf->victim_way = 0U;
    BPLRU__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, BPLRU__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (~ ((IData)(vlSelf->valid_ways) 
                          >> (3U & BPLRU__DOT__unnamedblk1__DOT__i))))) {
                vlSelf->victim_way = (3U & BPLRU__DOT__unnamedblk1__DOT__i);
                goto __Vlabel3;
            }
            BPLRU__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + BPLRU__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel3: ;
    }
    if ((0xfU == (IData)(vlSelf->valid_ways))) {
        vlSelf->BPLRU__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->BPLRU__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ (vlSelf->BPLRU__DOT__lru_bits
                              [vlSelf->set_idx] >> 
                              (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i))))) {
                    vlSelf->victim_way = (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
                    goto __Vlabel4;
                }
                vlSelf->BPLRU__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel4: ;
        }
    }
}

void VIcachecontroller___024root___eval_ico(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIcachecontroller___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VIcachecontroller___024root___eval_triggers__ico(VIcachecontroller___024root* vlSelf);

bool VIcachecontroller___024root___eval_phase__ico(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIcachecontroller___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIcachecontroller___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIcachecontroller___024root___eval_act(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_act\n"); );
}

VL_INLINE_OPT void VIcachecontroller___024root___nba_sequent__TOP__0(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__Memory__DOT__memory__v0;
    __Vdlyvdim0__Memory__DOT__memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Memory__DOT__memory__v0;
    __Vdlyvval__Memory__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Memory__DOT__memory__v0;
    __Vdlyvset__Memory__DOT__memory__v0 = 0;
    // Body
    __Vdlyvset__Memory__DOT__memory__v0 = 0U;
    if (vlSelf->MemWrite) {
        __Vdlyvval__Memory__DOT__memory__v0 = vlSelf->Write_data;
        __Vdlyvset__Memory__DOT__memory__v0 = 1U;
        __Vdlyvdim0__Memory__DOT__memory__v0 = (0xffU 
                                                & (vlSelf->address 
                                                   >> 2U));
    }
    if (__Vdlyvset__Memory__DOT__memory__v0) {
        vlSelf->Memory__DOT__memory[__Vdlyvdim0__Memory__DOT__memory__v0] 
            = __Vdlyvval__Memory__DOT__memory__v0;
    }
    vlSelf->Read_data = ((IData)(vlSelf->MemRead) ? 
                         vlSelf->Memory__DOT__memory
                         [(0xffU & (vlSelf->address 
                                    >> 2U))] : 0U);
}

VL_INLINE_OPT void VIcachecontroller___024root___nba_sequent__TOP__1(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ BPLRU__DOT__unnamedblk1__DOT__i;
    BPLRU__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vdlyvset__BPLRU__DOT__lru_bits__v0;
    __Vdlyvset__BPLRU__DOT__lru_bits__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__BPLRU__DOT__lru_bits__v16;
    __Vdlyvdim0__BPLRU__DOT__lru_bits__v16 = 0;
    CData/*0:0*/ __Vdlyvset__BPLRU__DOT__lru_bits__v16;
    __Vdlyvset__BPLRU__DOT__lru_bits__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__BPLRU__DOT__lru_bits__v17;
    __Vdlyvdim0__BPLRU__DOT__lru_bits__v17 = 0;
    CData/*1:0*/ __Vdlyvlsb__BPLRU__DOT__lru_bits__v17;
    __Vdlyvlsb__BPLRU__DOT__lru_bits__v17 = 0;
    CData/*0:0*/ __Vdlyvset__BPLRU__DOT__lru_bits__v17;
    __Vdlyvset__BPLRU__DOT__lru_bits__v17 = 0;
    // Body
    __Vdlyvset__BPLRU__DOT__lru_bits__v0 = 0U;
    __Vdlyvset__BPLRU__DOT__lru_bits__v16 = 0U;
    __Vdlyvset__BPLRU__DOT__lru_bits__v17 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__BPLRU__DOT__lru_bits__v0 = 1U;
    } else if (vlSelf->update) {
        if ((0xfU == vlSelf->BPLRU__DOT__lru_bits[vlSelf->set_idx])) {
            __Vdlyvset__BPLRU__DOT__lru_bits__v16 = 1U;
            __Vdlyvdim0__BPLRU__DOT__lru_bits__v16 
                = vlSelf->set_idx;
        }
        __Vdlyvset__BPLRU__DOT__lru_bits__v17 = 1U;
        __Vdlyvlsb__BPLRU__DOT__lru_bits__v17 = vlSelf->access_way;
        __Vdlyvdim0__BPLRU__DOT__lru_bits__v17 = vlSelf->set_idx;
    }
    if (__Vdlyvset__BPLRU__DOT__lru_bits__v0) {
        vlSelf->BPLRU__DOT__lru_bits[0U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[1U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[2U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[3U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[4U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[5U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[6U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[7U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[8U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[9U] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xaU] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xbU] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xcU] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xdU] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xeU] = 0U;
        vlSelf->BPLRU__DOT__lru_bits[0xfU] = 0U;
    }
    if (__Vdlyvset__BPLRU__DOT__lru_bits__v16) {
        vlSelf->BPLRU__DOT__lru_bits[__Vdlyvdim0__BPLRU__DOT__lru_bits__v16] = 0U;
    }
    if (__Vdlyvset__BPLRU__DOT__lru_bits__v17) {
        vlSelf->BPLRU__DOT__lru_bits[__Vdlyvdim0__BPLRU__DOT__lru_bits__v17] 
            = (vlSelf->BPLRU__DOT__lru_bits[__Vdlyvdim0__BPLRU__DOT__lru_bits__v17] 
               | (0xfU & ((IData)(1U) << (IData)(__Vdlyvlsb__BPLRU__DOT__lru_bits__v17))));
    }
    vlSelf->victim_way = 0U;
    BPLRU__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, BPLRU__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (~ ((IData)(vlSelf->valid_ways) 
                          >> (3U & BPLRU__DOT__unnamedblk1__DOT__i))))) {
                vlSelf->victim_way = (3U & BPLRU__DOT__unnamedblk1__DOT__i);
                goto __Vlabel5;
            }
            BPLRU__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + BPLRU__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel5: ;
    }
    if ((0xfU == (IData)(vlSelf->valid_ways))) {
        vlSelf->BPLRU__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->BPLRU__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ (vlSelf->BPLRU__DOT__lru_bits
                              [vlSelf->set_idx] >> 
                              (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i))))) {
                    vlSelf->victim_way = (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
                    goto __Vlabel6;
                }
                vlSelf->BPLRU__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel6: ;
        }
    }
}

void VIcachecontroller___024root___nba_sequent__TOP__2(VIcachecontroller___024root* vlSelf);

void VIcachecontroller___024root___eval_nba(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIcachecontroller___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIcachecontroller___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIcachecontroller___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void VIcachecontroller___024root___timing_resume(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VIcachecontroller___024root___eval_triggers__act(VIcachecontroller___024root* vlSelf);

bool VIcachecontroller___024root___eval_phase__act(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIcachecontroller___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIcachecontroller___024root___timing_resume(vlSelf);
        VIcachecontroller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIcachecontroller___024root___eval_phase__nba(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIcachecontroller___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__ico(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__nba(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__act(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG

void VIcachecontroller___024root___eval(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VIcachecontroller___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("cache/lruPOL.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIcachecontroller___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIcachecontroller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cache/lruPOL.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIcachecontroller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cache/lruPOL.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIcachecontroller___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIcachecontroller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIcachecontroller___024root___eval_debug_assertions(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->access_way & 0xfcU))) {
        Verilated::overWidthError("access_way");}
    if (VL_UNLIKELY((vlSelf->set_idx & 0xf0U))) {
        Verilated::overWidthError("set_idx");}
    if (VL_UNLIKELY((vlSelf->update & 0xfeU))) {
        Verilated::overWidthError("update");}
    if (VL_UNLIKELY((vlSelf->valid_ways & 0xf0U))) {
        Verilated::overWidthError("valid_ways");}
    if (VL_UNLIKELY((vlSelf->MemWrite & 0xfeU))) {
        Verilated::overWidthError("MemWrite");}
    if (VL_UNLIKELY((vlSelf->MemRead & 0xfeU))) {
        Verilated::overWidthError("MemRead");}
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
