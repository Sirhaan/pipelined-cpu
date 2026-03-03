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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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

extern const VlUnpacked<CData/*3:0*/, 512> VperformanceTB__ConstPool__TABLE_h1e3acbf7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h74e48922_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VperformanceTB__ConstPool__TABLE_h9fb9a08b_0;
extern const VlUnpacked<CData/*2:0*/, 64> VperformanceTB__ConstPool__TABLE_ha574114e_0;

VL_ATTR_COLD void VperformanceTB___024root___stl_sequent__TOP__0(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*0:0*/ performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready = 0U;
    vlSelf->performanceTB__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->performanceTB__DOT__dut__DOT__instID));
    vlSelf->performanceTB__DOT__dut__DOT__branchTargetID 
        = (vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
    __Vtableidx3 = (((IData)(vlSelf->performanceTB__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX 
        = VperformanceTB__ConstPool__TABLE_h1e3acbf7_0
        [__Vtableidx3];
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
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
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
    vlSelf->performanceTB__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))
            ? vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB
            : vlSelf->performanceTB__DOT__dut__DOT__AluResWB);
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
            vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
        = ((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
            ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                : vlSelf->performanceTB__DOT__dut__DOT__regData1EX));
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
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = (
                                                   ((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemRead) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemWrite)));
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
    vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
           + vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = 
        ((IData)(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX)
          ? vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX
          : vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF);
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

VL_ATTR_COLD void VperformanceTB___024root___eval_stl(VperformanceTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VperformanceTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->performanceTB__DOT__break_pc = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__special_pipe = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__instr_count = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__nextPc = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ic_inst = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ic_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__pcWrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__hazardSel = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__signExtImmID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__branchTargetID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__instID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__MEMID = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID = VL_RAND_RESET_I(10);
    vlSelf->performanceTB__DOT__dut__DOT__WBEX = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MEMEX = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__EXEX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__regData1EX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__regData2EX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__signExtImmEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__RsEX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__RtEX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__RdEX = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__FuncEX = VL_RAND_RESET_I(6);
    vlSelf->performanceTB__DOT__dut__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__AluInb = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX = VL_RAND_RESET_I(4);
    vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__IFflushEX = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__WBMEM = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MEMMEM = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__AluResMEM = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__WBWB = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__AluResWB = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__writeRegWB = VL_RAND_RESET_I(5);
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
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__stall_WB = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read = VL_RAND_RESET_I(1);
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
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w = 0;
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 0;
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = VL_RAND_RESET_I(32);
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
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 0;
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer = VL_RAND_RESET_I(5);
    vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegDst = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUOp = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand = VL_RAND_RESET_I(32);
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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
