// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIcachecontroller.h for the primary calling header

#include "VIcachecontroller__pch.h"
#include "VIcachecontroller__Syms.h"
#include "VIcachecontroller___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__ico(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG

void VIcachecontroller___024root___eval_triggers__ico(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIcachecontroller___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__act(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG

void VIcachecontroller___024root___eval_triggers__act(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->pipelinedCpuTest__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0 
        = vlSelf->pipelinedCpuTest__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIcachecontroller___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*3:0*/, 256> VIcachecontroller__ConstPool__TABLE_h0e887d23_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_h9be1d641_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VIcachecontroller__ConstPool__TABLE_h07955efe_0;
extern const VlUnpacked<CData/*1:0*/, 64> VIcachecontroller__ConstPool__TABLE_h7198fa83_0;

VL_INLINE_OPT void VIcachecontroller___024root___nba_sequent__TOP__2(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hazardSel;
    pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__pcSrcID;
    pipelinedCpuTest__DOT__dut__DOT__pcSrcID = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__branchTargetID;
    pipelinedCpuTest__DOT__dut__DOT__branchTargetID = 0;
    CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__MEMID;
    pipelinedCpuTest__DOT__dut__DOT__MEMID = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__forwardA;
    pipelinedCpuTest__DOT__dut__DOT__forwardA = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__forwardB;
    pipelinedCpuTest__DOT__dut__DOT__forwardB = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_rdata;
    pipelinedCpuTest__DOT__dut__DOT__dc_rdata = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec;
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i;
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0;
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0 = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hdu__DOT____VdfgExtracted_h5d4fe632__0;
    pipelinedCpuTest__DOT__dut__DOT__hdu__DOT____VdfgExtracted_h5d4fe632__0 = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*22:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*0:0*/ __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    IData/*31:0*/ __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer = 0;
    CData/*0:0*/ __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v1;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 = 0;
    IData/*31:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    IData/*31:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0;
    CData/*0:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    IData/*22:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*6:0*/ __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*0:0*/ __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0;
    IData/*31:0*/ __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer = 0;
    CData/*0:0*/ __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy = 0;
    SData/*9:0*/ __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0;
    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0;
    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 = 0;
    // Body
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy;
    __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 0U;
    if (VL_UNLIKELY(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready)) {
        VL_WRITEF("T=%0t | IC_READY_REG=1 | ic_inst=%x | instID=%x | IFIDwrite=%b | IFIDwrite_final=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg,
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite),
                  1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite);
    }
    if (VL_UNLIKELY((0U != vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID))) {
        VL_WRITEF("T=%0t | GOT INSTRUCTION | instID=%x | PC=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID,
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    }
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v1 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 0U;
    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__rst)))) {
        if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update) {
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 1U;
            __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
                = (0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                            >> 2U));
        }
        if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en) {
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 1U;
            __Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 = 0U;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0 
                = (0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                            >> 2U));
        }
        if (((3U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready))) {
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
            if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op) {
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 1U;
                __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 1U;
                __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
                __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
            } else {
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 0U;
                __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 = 1U;
                __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag;
                __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
                __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
                __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
                __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_rdata;
            }
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
        if ((((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
              & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op))) {
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
            __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg;
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index;
        }
        if (((2U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready))) {
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way;
        }
    }
    if (((IData)(vlSelf->pipelinedCpuTest__DOT__rst) 
         | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflush))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID = 0U;
    } else if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID 
            = vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF;
    }
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s)) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s 
                = ((IData)(1U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s);
        }
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0] 
            = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
               [__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0] 
               | (3U & ((IData)(1U) << (IData)(__Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree__v0))));
    }
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s)) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s 
                = ((IData)(1U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s);
        }
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0] 
            = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
               [__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0] 
               | (3U & ((IData)(1U) << (IData)(__Vdlyvlsb__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree__v0))));
    }
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s)) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[0U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[1U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s 
                = ((IData)(1U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s);
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[0U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[0U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s 
                = ((IData)(1U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s);
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[1U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[1U][(0x7fU 
                                                                                & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s)] = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s 
                = ((IData)(1U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s);
        }
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v0] = 1U;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v1;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits__v2] = 0U;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0U] = 0U;
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v1 = 1U;
    } else if ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB))) {
        if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB))) {
            __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB;
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 = 1U;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB;
        }
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v1) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[1U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[2U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[3U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[4U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[5U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[6U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[7U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[8U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[9U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xaU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xbU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xcU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xdU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xeU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0xfU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x10U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x11U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x12U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x13U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x14U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x15U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x16U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x17U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x18U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x19U] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1aU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1bU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1cU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1dU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1eU] = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[0x1fU] = 0U;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register__v33;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v0;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array__v1;
    }
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1EX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2EX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__RsEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB = 0U;
        __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer = 0U;
        __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_rdata = 0U;
    } else {
        if (((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1EX 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmEX 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2EX 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX 
                = (0x3fU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID);
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__RsEX 
                = (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                            >> 0x15U));
        }
        if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM;
        }
        if (((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                 >> 1U) | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op 
                = (1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                         >> 1U));
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM 
                   >> 9U);
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready = 0U;
        if ((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read) 
              | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write)) 
             & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy)))) {
            __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy = 1U;
            __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer = 0x14U;
        } else if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy) {
            if ((1U < vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer)) {
                __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer 
                    = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer 
                       - (IData)(1U));
                if (((2U == vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer) 
                     & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write)))) {
                    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_rdata 
                        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram
                        [(0x3ffU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
                                    >> 2U))];
                }
            } else {
                __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy = 0U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready = 1U;
                if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write) {
                    __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 
                        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata;
                    __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 = 1U;
                    __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0 
                        = (0x3ffU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
                                     >> 2U));
                }
            }
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer 
        = __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy 
        = __Vdly__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy;
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram__v0;
    }
    pipelinedCpuTest__DOT__dut__DOT__forwardA = 0U;
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM = 0U;
    } else {
        if (((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)) 
             & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                 >> 1U) | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op 
                = (1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM));
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeDataMEM;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set 
                = (0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM 
                            >> 2U));
        }
        if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM 
                = ((8U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX))
                    ? (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX)
                    : (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX));
        }
    }
    if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM) 
           >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM))) 
         & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
            == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RsEX)))) {
        pipelinedCpuTest__DOT__dut__DOT__forwardA = 2U;
    } else if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RsEX)))) {
        pipelinedCpuTest__DOT__dut__DOT__forwardA = 1U;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
        = (0xfffffffcU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeDataMEM = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeDataMEM 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM 
                = ((8U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                    ? ((4U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                        ? ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                            ? 0U : ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                     ? 0U : (~ (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
                                                | vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb))))
                        : 0U) : ((4U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                  ? ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                      ? ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                          ? ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum 
                                              >> 0x1fU)
                                              ? 1U : 0U)
                                          : 0U) : 0U)
                                  : ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                      ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum
                                      : ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
                                          ? (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
                                             | vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb)
                                          : (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
                                             & vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb)))));
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state 
            = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state;
    }
    if ((1U & (~ ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write = 1U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata 
                    = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                    [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                    [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set];
            }
            if ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read = 1U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
                    = ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag 
                        << 9U) | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                  << 2U));
            } else {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
                    = ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                        [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                        [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                        << 9U) | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set) 
                                  << 2U));
            }
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current 
        = ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
            [1U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))] << 1U) | vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
           [0U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))]);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
              [0U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U))] & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                         [0U][(0x7fU 
                                               & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 2U))] 
                                         == (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                             >> 9U))));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
               [1U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                              >> 2U))] & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                          [1U][(0x7fU 
                                                & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 2U))] 
                                          == (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                              >> 9U))) 
              << 1U));
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX = 0U;
    } else if (((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)) 
                & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX 
            = (3U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID) 
                     >> 7U));
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX 
            = (0xfU & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID));
    }
    __Vtableidx2 = (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX) 
                     << 2U) | (3U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX 
        = VIcachecontroller__ConstPool__TABLE_h0e887d23_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__forwardB = 0U;
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX = 0U;
    } else if (((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)) 
                & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX 
            = (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                        >> 0xbU));
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX 
            = (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                        >> 0x10U));
    }
    if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM) 
           >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM))) 
         & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
            == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX)))) {
        pipelinedCpuTest__DOT__dut__DOT__forwardB = 2U;
    } else if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB) 
                  >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB))) 
                & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB) 
                   == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX)))) {
        pipelinedCpuTest__DOT__dut__DOT__forwardB = 1U;
    }
    if (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflush) 
         | (IData)(vlSelf->pipelinedCpuTest__DOT__rst))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID = 0U;
    } else if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
            = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg;
    }
    if (vlSelf->pipelinedCpuTest__DOT__rst) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg = 0U;
        __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer = 0U;
        __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = 0U;
    } else {
        if (((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX 
                = (7U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID) 
                         >> 4U));
        }
        if (((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
             & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array
                [vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index]
                [(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))];
        }
        if (((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
             & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready))) {
            __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag;
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata;
            __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata;
            __Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 = 1U;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
            __Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set;
            __Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way;
        }
        if (((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state)) 
             & (~ (IData)((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag 
                = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                   >> 9U);
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set 
                = (0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                            >> 2U));
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready = 0U;
        if (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read) 
             & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy)))) {
            __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy = 1U;
            __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer = 0x14U;
        } else if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy) {
            if ((1U < vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer)) {
                __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer 
                    = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer 
                       - (IData)(1U));
                if ((2U == vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer)) {
                    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata 
                        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram
                        [(0x3ffU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                    >> 2U))];
                }
            } else {
                __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy = 0U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready = 1U;
            }
        }
        if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister 
                = vlSelf->pipelinedCpuTest__DOT__dut__DOT__nextPc;
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state 
            = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current)))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current) 
                  >> 1U)))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0 
        = (1U & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                      >> 2U))]);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way 
        = pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit) 
                       >> (1U & pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index 
                    = (1U & pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
                goto __Vlabel1;
            }
            pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = 0U;
    pipelinedCpuTest__DOT__dut__DOT__dc_rdata = 0U;
    if ((4U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state)))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = 1U;
                pipelinedCpuTest__DOT__dut__DOT__dc_rdata 
                    = ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op)
                        ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                       [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                       [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set]
                        : 0U);
            }
        }
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))) {
                    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = 1U;
                    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = 1U;
                    pipelinedCpuTest__DOT__dut__DOT__dc_rdata 
                        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array
                        [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index]
                        [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set];
                }
            }
        }
        if ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
                if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready) {
                    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 4U;
                }
            } else if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state 
                = ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))
                    ? 0U : ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                             [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                             [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set] 
                             & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                             [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way]
                             [vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set])
                             ? 2U : 3U));
        } else if ((IData)((0U != (3U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 1U;
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall 
        = (1U & ((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready)) 
                 & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                     >> 1U) | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM))));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID));
    pipelinedCpuTest__DOT__dut__DOT__branchTargetID 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
        [(0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                   >> 0x15U))];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
        [(0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                   >> 0x10U))];
    __Vtableidx1 = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                    >> 0x1aU);
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite 
        = VIcachecontroller__ConstPool__TABLE_h9be1d641_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg 
        = VIcachecontroller__ConstPool__TABLE_h468a064c_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch 
        = VIcachecontroller__ConstPool__TABLE_hac88bb16_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead 
        = VIcachecontroller__ConstPool__TABLE_h468a064c_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite 
        = VIcachecontroller__ConstPool__TABLE_h9c50cc6f_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst 
        = VIcachecontroller__ConstPool__TABLE_h3e8a5fce_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc 
        = VIcachecontroller__ConstPool__TABLE_h07955efe_0
        [__Vtableidx1];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp 
        = VIcachecontroller__ConstPool__TABLE_h7198fa83_0
        [__Vtableidx1];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB))
            ? pipelinedCpuTest__DOT__dut__DOT__dc_rdata
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB);
    pipelinedCpuTest__DOT__dut__DOT__MEMID = (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) 
                                               << 2U) 
                                              | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead) 
                                                  << 1U) 
                                                 | (IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite)));
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array__v0;
    }
    if (__Vdlyvset__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0] 
            = __Vdlyvval__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array__v0;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vdlyvdim0__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0][__Vdlyvdim1__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid__v0] = 1U;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
        = ((2U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardA))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardA))
                ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB
                : vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1EX));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd 
        = ((2U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardB))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM
            : ((1U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardB))
                ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB
                : vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2EX));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmEX
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd);
    pipelinedCpuTest__DOT__dut__DOT__pcSrcID = (((IData)(pipelinedCpuTest__DOT__dut__DOT__MEMID) 
                                                 >> 2U) 
                                                & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID 
                                                   == vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflush 
        = pipelinedCpuTest__DOT__dut__DOT__pcSrcID;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
           + ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
               ? ((~ vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb) 
                  + (1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX)))
               : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer 
        = __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy 
        = __Vdly__pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__nextPc 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__pcSrcID)
            ? pipelinedCpuTest__DOT__dut__DOT__branchTargetID
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg);
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec 
        = ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
            [1U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                           >> 2U))] << 1U) | vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
           [0U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                          >> 2U))]);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((2U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
              [0U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                             >> 2U))] & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                         [0U][(0x7fU 
                                               & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                  >> 2U))] 
                                         == (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                             >> 9U))));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)) 
           | ((vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
               [1U][(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                              >> 2U))] & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                          [1U][(0x7fU 
                                                & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                   >> 2U))] 
                                          == (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                              >> 9U))) 
              << 1U));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    if ((1U & (~ (IData)(pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec)))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 0U;
    }
    if ((1U & (~ ((IData)(pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec) 
                  >> 1U)))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = 1U;
    }
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0 
        = (1U & vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
           [(0x7fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                      >> 2U))]);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way 
        = pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = 0U;
    pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit) 
                       >> (1U & pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index 
                    = (1U & pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
                goto __Vlabel2;
            }
            pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready = 0U;
    if ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready = 1U;
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 1U;
        }
    } else {
        if ((1U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    pipelinedCpuTest__DOT__dut__DOT__hdu__DOT____VdfgExtracted_h5d4fe632__0 
        = (1U & ((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready)) 
                 | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 1U;
    pipelinedCpuTest__DOT__dut__DOT__hazardSel = 1U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 1U;
    if (pipelinedCpuTest__DOT__dut__DOT__hdu__DOT____VdfgExtracted_h5d4fe632__0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
        pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
    } else if ((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX) 
                 >> 1U) & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX) 
                            == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                         >> 0x15U))) 
                           | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX) 
                              == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                           >> 0x10U)))))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
        pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
    } else if (pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) {
        if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX) 
               >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX))) 
             & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX) 
                 == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                              >> 0x15U))) | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX) 
                                             == (0x1fU 
                                                 & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                                    >> 0x10U)))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
            pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
        } else if (((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM) 
                      >> 1U) & (0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM))) 
                    & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
                        == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                     >> 0x15U))) | 
                       ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
                        == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                     >> 0x10U)))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
            pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__hazardSel)
            ? ((((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite) 
                 << 8U) | ((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg) 
                           << 7U)) | (((IData)(pipelinedCpuTest__DOT__dut__DOT__MEMID) 
                                       << 4U) | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst) 
                                                  << 3U) 
                                                 | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp) 
                                                     << 1U) 
                                                    | (IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc)))))
            : 0U);
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("T=%0t | PC=%x | ic_ready=%b | m_read=%b | sm_busy=%b | sm_timer=%0# | dc_stall=%b | $s0=%x | $s1=%x | pcWrite=%b | pcWrite_final=%b \n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready),
                  1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy),
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall),
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
                  [0x10U],32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
                  [0x11U],1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite));
    }
}
