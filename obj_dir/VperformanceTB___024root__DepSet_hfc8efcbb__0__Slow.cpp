// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VperformanceTB.h for the primary calling header

#include "VperformanceTB__pch.h"
#include "VperformanceTB___024root.h"

VL_ATTR_COLD void VperformanceTB___024root___eval_static__TOP(VperformanceTB___024root* vlSelf);

VL_ATTR_COLD void VperformanceTB___024root___eval_static(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_static\n"); );
    // Body
    VperformanceTB___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VperformanceTB___024root___eval_static__TOP(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->performanceTB__DOT__cycle_count = 0U;
    vlSelf->performanceTB__DOT__instr_count = 0U;
}

VL_ATTR_COLD void VperformanceTB___024root___eval_final(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__stl(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VperformanceTB___024root___eval_phase__stl(VperformanceTB___024root* vlSelf);

VL_ATTR_COLD void VperformanceTB___024root___eval_settle(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VperformanceTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/performanceTB.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VperformanceTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__stl(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> VperformanceTB__ConstPool__TABLE_h39fa20de_0;
extern const VlUnpacked<CData/*1:0*/, 128> VperformanceTB__ConstPool__TABLE_hf4afd3a1_0;
extern const VlUnpacked<CData/*3:0*/, 128> VperformanceTB__ConstPool__TABLE_h6eb401fc_0;
extern const VlUnpacked<CData/*2:0*/, 128> VperformanceTB__ConstPool__TABLE_h26d4c584_0;

VL_ATTR_COLD void VperformanceTB___024root___stl_sequent__TOP__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ performanceTB__DOT__dut__DOT__hazardSel;
    performanceTB__DOT__dut__DOT__hazardSel = 0;
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
    CData/*0:0*/ performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0;
    performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0 = 0;
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
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
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
    vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready = 0U;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
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
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
        = (0xfffffffcU & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
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
    __Vtableidx4 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    performanceTB__DOT__dut__DOT__AluCtrlEX = VperformanceTB__ConstPool__TABLE_h39fa20de_0
        [__Vtableidx4];
    performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0 
        = ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)) 
           & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
               == (0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                            >> 0xfU))) | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                          == (0x1fU 
                                              & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                 >> 0x14U)))));
    __Vtableidx3 = (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instID);
    performanceTB__DOT__dut__DOT__WBID = VperformanceTB__ConstPool__TABLE_hf4afd3a1_0
        [__Vtableidx3];
    performanceTB__DOT__dut__DOT__EXID = VperformanceTB__ConstPool__TABLE_h6eb401fc_0
        [__Vtableidx3];
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = VperformanceTB__ConstPool__TABLE_h26d4c584_0
        [__Vtableidx3];
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
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
            : vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
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
    vlSelf->performanceTB__DOT__dut__DOT__finalResultWB 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__isJumpWB)
            ? vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB
            : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))
                ? performanceTB__DOT__dut__DOT__loadResult
                : vlSelf->performanceTB__DOT__dut__DOT__AluResWB));
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
    performanceTB__DOT__dut__DOT__AluInB = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX))
                                             ? vlSelf->performanceTB__DOT__dut__DOT__immEX
                                             : performanceTB__DOT__dut__DOT__AluMuxBFwd);
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
             & ((0U == (IData)(performanceTB__DOT__dut__DOT__forwardA)) 
                | (0U == (IData)(performanceTB__DOT__dut__DOT__forwardB))))) {
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
                    & ((0U == (IData)(performanceTB__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(performanceTB__DOT__dut__DOT__forwardB))))) {
            vlSelf->performanceTB__DOT__dut__DOT__pcWrite = 0U;
            vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = 0U;
            performanceTB__DOT__dut__DOT__hazardSel = 0U;
        }
    }
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
    } else {
        vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = 0xfU;
        vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata 
            = performanceTB__DOT__dut__DOT__AluMuxBFwd;
    }
    vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX = 
        ((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
           >> 2U) & ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                      ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                          ? ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                              ? (0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                              : (1U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX))
                          : ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                              ? (0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                              : (1U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)))
                      : ((1U & (~ ((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                                   >> 1U))) && ((1U 
                                                 & (IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX))
                                                 ? 
                                                (0U 
                                                 != vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
                                                 : 
                                                (0U 
                                                 == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX))))) 
         | (0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)));
    vlSelf->performanceTB__DOT__dut__DOT__IFflushEX 
        = ((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX) 
           | (0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)));
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = 
        ((0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))
          ? (0xfffffffeU & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)
          : ((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX)
              ? vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX
              : vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF));
}

VL_ATTR_COLD void VperformanceTB___024root___eval_stl(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VperformanceTB___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VperformanceTB___024root___eval_triggers__stl(VperformanceTB___024root* vlSelf);

VL_ATTR_COLD bool VperformanceTB___024root___eval_phase__stl(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VperformanceTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VperformanceTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__act(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge performanceTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VperformanceTB___024root___dump_triggers__nba(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge performanceTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VperformanceTB___024root___ctor_var_reset(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->performanceTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__perf_print = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__break_detected = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__special_pipe = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__instr_count = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ic_inst = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ic_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__pcWrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__immID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__instID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID = VL_RAND_RESET_I(9);
    vlSelf->performanceTB__DOT__dut__DOT__WBEX = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MEMEX = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__EXEX = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__regData1EX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__regData2EX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__immEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__Rs1EX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__Rs2EX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__RdEX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__FuncEX = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__pcEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__instEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__AluResultEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__IFflushEX = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__WBMEM = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MEMMEM = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__AluResMEM = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__WBWB = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__AluResWB = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__writeRegWB = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__isJumpWB = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__finalResultWB = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ic_stall = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_stall = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_done = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__umem_read = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__umem_write = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__umem_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__umem_addr = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__umem_wdata = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__umem_rdata = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__funct3EX = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__funct3MEM = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__funct3WB = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__byteOffWB = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__cpu_ben = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__stall_WB = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(25);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(25);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(25);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(25);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions = VL_RAND_RESET_Q(64);
    vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI = 0;
    vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate = 0;
    vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate = 0;
    vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate = 0;
    vlSelf->__Vtrigprevexpr___TOP__performanceTB__DOT__clk__0 = VL_RAND_RESET_I(1);
}
