// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfunctionalTB.h for the primary calling header

#include "VfunctionalTB__pch.h"
#include "VfunctionalTB___024root.h"

VL_ATTR_COLD void VfunctionalTB___024root___eval_static__TOP(VfunctionalTB___024root* vlSelf);

VL_ATTR_COLD void VfunctionalTB___024root___eval_static(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_static\n"); );
    // Body
    VfunctionalTB___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VfunctionalTB___024root___eval_static__TOP(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->functionalTB__DOT__check_names[0U] = std::string{"ORI  $t0, $zero, 5   "};
    vlSelf->functionalTB__DOT__check_names[1U] = std::string{"ORI  $t1, $zero, 10  "};
    vlSelf->functionalTB__DOT__check_names[2U] = std::string{"ADD  $t2, $t0, $t1   "};
    vlSelf->functionalTB__DOT__check_names[3U] = std::string{"ADDI $t3, $t0, 100   "};
    vlSelf->functionalTB__DOT__check_names[4U] = std::string{"LW   $t4, 64($zero)  "};
    vlSelf->functionalTB__DOT__check_names[5U] = std::string{"OR   $t6, $t0, $t1   "};
    vlSelf->functionalTB__DOT__check_names[6U] = std::string{"SLT  $t7, $t1, $t0   "};
    vlSelf->functionalTB__DOT__check_names[7U] = std::string{"AND  $t5, $t0, $t1   "};
    vlSelf->functionalTB__DOT__checks[0U] = 0x800000005ULL;
    vlSelf->functionalTB__DOT__checks[1U] = 0x90000000aULL;
    vlSelf->functionalTB__DOT__checks[2U] = 0xa0000000fULL;
    vlSelf->functionalTB__DOT__checks[3U] = 0xb00000069ULL;
    vlSelf->functionalTB__DOT__checks[4U] = 0xc0000000fULL;
    vlSelf->functionalTB__DOT__checks[5U] = 0xd00000000ULL;
    vlSelf->functionalTB__DOT__checks[6U] = 0xe0000000fULL;
    vlSelf->functionalTB__DOT__checks[7U] = 0xf00000000ULL;
}

VL_ATTR_COLD void VfunctionalTB___024root___eval_final(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__stl(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VfunctionalTB___024root___eval_phase__stl(VfunctionalTB___024root* vlSelf);

VL_ATTR_COLD void VfunctionalTB___024root___eval_settle(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_settle\n"); );
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
            VfunctionalTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/functionalTB.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VfunctionalTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__stl(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 512> VfunctionalTB__ConstPool__TABLE_h1e3acbf7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h74e48922_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VfunctionalTB__ConstPool__TABLE_h9fb9a08b_0;
extern const VlUnpacked<CData/*2:0*/, 64> VfunctionalTB__ConstPool__TABLE_ha574114e_0;

VL_ATTR_COLD void VfunctionalTB___024root___stl_sequent__TOP__0(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0;
    functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_he7efbe5b__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->functionalTB__DOT__dut__DOT__instID));
    vlSelf->functionalTB__DOT__dut__DOT__branchTargetID 
        = (vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = 0U;
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
    __Vtableidx3 = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX 
        = VfunctionalTB__ConstPool__TABLE_h1e3acbf7_0
        [__Vtableidx3];
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read 
        = (1U & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done)) 
                 & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                    >> 1U)));
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write 
        = (1U & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done)) 
                 & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM)));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr 
        = (0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
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
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard 
        = (((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
            >> 1U) & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                       == (0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                    >> 0x15U))) | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                       >> 0x10U)))));
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
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->functionalTB__DOT__dut__DOT__AluResMEM
            : vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    vlSelf->functionalTB__DOT__dut__DOT__umem_write = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__umem_read = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__umem_wdata = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state 
        = vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state;
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
    vlSelf->functionalTB__DOT__dut__DOT__umem_addr = 0U;
    if ((2U == (IData)(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state))) {
        if (((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid) 
             | (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write))) {
            vlSelf->functionalTB__DOT__dut__DOT__umem_write 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write;
            vlSelf->functionalTB__DOT__dut__DOT__umem_read 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid;
            vlSelf->functionalTB__DOT__dut__DOT__umem_wdata 
                = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata;
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
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    }
    if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 1U;
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
    vlSelf->functionalTB__DOT__dut__DOT__ic_stall = 0U;
    if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_ready)))) {
        vlSelf->functionalTB__DOT__dut__DOT__ic_stall = 1U;
    }
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 0U;
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
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
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                    vlSelf->functionalTB__DOT__dut__DOT__dc_ready = 1U;
                }
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff 
        = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_done) 
           | (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready));
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
        = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
    vlSelf->functionalTB__DOT__dut__DOT__dc_rdata = 0U;
    if ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
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
                vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
                vlSelf->functionalTB__DOT__dut__DOT__dc_rdata 
                    = vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index]
                    [vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set];
            }
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = 1U;
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
    vlSelf->functionalTB__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB))
            ? vlSelf->functionalTB__DOT__dut__DOT__dc_rdata
            : vlSelf->functionalTB__DOT__dut__DOT__AluResWB);
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
    vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
           + vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand);
    vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister);
    vlSelf->functionalTB__DOT__dut__DOT__nextPc = ((IData)(vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX)
                                                    ? vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX
                                                    : vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF);
}

VL_ATTR_COLD void VfunctionalTB___024root___eval_stl(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VfunctionalTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VfunctionalTB___024root___eval_triggers__stl(VfunctionalTB___024root* vlSelf);

VL_ATTR_COLD bool VfunctionalTB___024root___eval_phase__stl(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VfunctionalTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VfunctionalTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__act(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge functionalTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] (~ functionalTB.rst))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VfunctionalTB___024root___dump_triggers__nba(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge functionalTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] (~ functionalTB.rst))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VfunctionalTB___024root___ctor_var_reset(VfunctionalTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->functionalTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__perf_print = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->functionalTB__DOT__checks[__Vi0] = VL_RAND_RESET_Q(37);
    }
    vlSelf->functionalTB__DOT__prev_pc = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__stable_count = 0;
    vlSelf->functionalTB__DOT__pass_count = 0;
    vlSelf->functionalTB__DOT__fail_count = 0;
    vlSelf->functionalTB__DOT__run_checks__Vstatic__actual = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__nextPc = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ic_ready = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__pcWrite = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__hazardSel = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__signExtImmID = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__branchTargetID = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__instID = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__MEMID = VL_RAND_RESET_I(3);
    vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID = VL_RAND_RESET_I(10);
    vlSelf->functionalTB__DOT__dut__DOT__WBEX = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__MEMEX = VL_RAND_RESET_I(3);
    vlSelf->functionalTB__DOT__dut__DOT__EXEX = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__regData1EX = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__regData2EX = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__RsEX = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__RtEX = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__RdEX = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__FuncEX = VL_RAND_RESET_I(6);
    vlSelf->functionalTB__DOT__dut__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__AluInb = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX = VL_RAND_RESET_I(4);
    vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__IFflushEX = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__WBMEM = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__MEMMEM = VL_RAND_RESET_I(3);
    vlSelf->functionalTB__DOT__dut__DOT__AluResMEM = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__dc_rdata = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__WBWB = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__AluResWB = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__MEMDataWB = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__writeRegWB = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__finalResultWB = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ic_stall = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__dc_stall = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__dc_done = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__umem_read = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__umem_write = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__umem_ready = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__umem_addr = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__umem_wdata = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__umem_rdata = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(23);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(23);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(7);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w = 0;
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 0;
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(23);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(23);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(7);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator = 0;
    vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer = VL_RAND_RESET_I(5);
    vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand = VL_RAND_RESET_I(32);
    vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions = VL_RAND_RESET_Q(64);
    vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_prev = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__perfCounter__DOT__branch_taken_prev = VL_RAND_RESET_I(1);
    vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI = 0;
    vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate = 0;
    vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate = 0;
    vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate = 0;
    vlSelf->__Vdlyvval__functionalTB__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__functionalTB__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__functionalTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h8e614511__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
