// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VpipelinedCpuTest.h for the primary calling header

#include "VpipelinedCpuTest__pch.h"
#include "VpipelinedCpuTest__Syms.h"
#include "VpipelinedCpuTest___024root.h"

VL_ATTR_COLD void VpipelinedCpuTest___024root___eval_initial__TOP(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x7573696dU;
    __Vtemp_1[2U] = 0x6370U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:28: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:30: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF("Cache config: SIZE=        256, WAYS=          2\nT=%0t | DCACHE state=%0# | cpu_read=%b | cpu_addr=%x | dc_ready=%b | mem_ready=%b\nT=%0t | [EX] EXEX=%b RtEX=%0# RdEX=%0# WrtReg=%0#\n",
              64,VL_TIME_UNITED_Q(1000),-9,3,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),
              1,vlSelf->pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read,
              32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM,
              1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready),
              1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready,
              64,VL_TIME_UNITED_Q(1000),-9,5,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX),
              5,vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX,
              5,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX),
              5,((0x10U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX))
                  ? (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX)
                  : (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX)));
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram)
                 , 0, ~0ULL);
    VL_WRITEF("SlowMemoryI ram[0]=%x\nSlowMemoryI ram[1]=%x\nSlowMemoryI ram[2]=%x\n",
              32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram
              [0U],32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram
              [1U],32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram
              [2U]);
    VL_READMEM_N(true, 32, 1024, 0, std::string{"data.hex"}
                 ,  &(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VpipelinedCpuTest___024root___dump_triggers__stl(VpipelinedCpuTest___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VpipelinedCpuTest___024root___eval_triggers__stl(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VpipelinedCpuTest___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*3:0*/, 512> VpipelinedCpuTest__ConstPool__TABLE_h1e3acbf7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_h74e48922_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_h468a064c_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_hac88bb16_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_h9c50cc6f_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_h3e8a5fce_0;
extern const VlUnpacked<CData/*0:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_h9fb9a08b_0;
extern const VlUnpacked<CData/*2:0*/, 64> VpipelinedCpuTest__ConstPool__TABLE_ha574114e_0;

VL_ATTR_COLD void VpipelinedCpuTest___024root___stl_sequent__TOP__0(VpipelinedCpuTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VpipelinedCpuTest___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__ic_ready;
    pipelinedCpuTest__DOT__dut__DOT__ic_ready = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hazardSel;
    pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__forwardA;
    pipelinedCpuTest__DOT__dut__DOT__forwardA = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__forwardB;
    pipelinedCpuTest__DOT__dut__DOT__forwardB = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_rdata;
    pipelinedCpuTest__DOT__dut__DOT__dc_rdata = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__dc_ready_eff;
    pipelinedCpuTest__DOT__dut__DOT__dc_ready_eff = 0;
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
    CData/*2:0*/ pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp;
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard;
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX;
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM;
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM = 0;
    CData/*1:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current = 0;
    IData/*31:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0;
    pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT____Vlvbound_h62af0cb0__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__branchTargetID 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr 
        = (0xfffffffcU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
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
    __Vtableidx3 = (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX) 
                     << 3U) | (7U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX 
        = VpipelinedCpuTest__ConstPool__TABLE_h1e3acbf7_0
        [__Vtableidx3];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read 
        = (1U & ((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_done)) 
                 & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                    >> 1U)));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write 
        = (1U & ((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_done)) 
                 & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM)));
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard 
        = (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
            >> 1U) & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX) 
                       == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                    >> 0x15U))) | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                                       >> 0x10U)))));
    pipelinedCpuTest__DOT__dut__DOT__forwardA = 0U;
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
    pipelinedCpuTest__DOT__dut__DOT__forwardB = 0U;
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
    __Vtableidx2 = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                    >> 0x1aU);
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite 
        = VpipelinedCpuTest__ConstPool__TABLE_h74e48922_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg 
        = VpipelinedCpuTest__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch 
        = VpipelinedCpuTest__ConstPool__TABLE_hac88bb16_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead 
        = VpipelinedCpuTest__ConstPool__TABLE_h468a064c_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite 
        = VpipelinedCpuTest__ConstPool__TABLE_h9c50cc6f_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst 
        = VpipelinedCpuTest__ConstPool__TABLE_h3e8a5fce_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc 
        = VpipelinedCpuTest__ConstPool__TABLE_h9fb9a08b_0
        [__Vtableidx2];
    pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp 
        = VpipelinedCpuTest__ConstPool__TABLE_ha574114e_0
        [__Vtableidx2];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) 
           & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX) 
               >> 1U) & ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX)) 
                         & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX) 
                             == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                          >> 0x15U))) 
                            | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX) 
                               == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                            >> 0x10U)))))));
    pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) 
           & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM) 
               >> 1U) & ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM)) 
                         & (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
                             == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                          >> 0x15U))) 
                            | ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM) 
                               == (0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                                            >> 0x10U)))))));
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
                goto __Vlabel1;
            }
            pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state;
    pipelinedCpuTest__DOT__dut__DOT__ic_ready = 0U;
    if ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
            pipelinedCpuTest__DOT__dut__DOT__ic_ready = 1U;
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit)))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 1U;
        }
    } else {
        if ((1U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = 1U;
                pipelinedCpuTest__DOT__dut__DOT__ic_ready = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            if (vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready) {
                vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 2U;
            }
        } else {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = 0U;
        }
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
                goto __Vlabel2;
            }
            pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel2: ;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_stall = 0U;
    if ((1U & (~ (IData)(pipelinedCpuTest__DOT__dut__DOT__ic_ready)))) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_stall = 1U;
    }
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
        } else if (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read) 
                    | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = 1U;
        }
    }
    pipelinedCpuTest__DOT__dut__DOT__dc_ready_eff = 
        ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_done) 
         | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB))
            ? pipelinedCpuTest__DOT__dut__DOT__dc_rdata
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 1U;
    pipelinedCpuTest__DOT__dut__DOT__hazardSel = 1U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 1U;
    if (pipelinedCpuTest__DOT__dut__DOT__ic_ready) {
        if ((1U & ((((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                     >> 1U) | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM)) 
                   & (~ (IData)(pipelinedCpuTest__DOT__dut__DOT__dc_ready_eff))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
            pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall = 1U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
        } else if (((IData)(pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard) 
                    & ((0U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardB))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
            pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
        } else if ((((IData)(pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX) 
                     | (IData)(pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM)) 
                    & ((0U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardA)) 
                       | (0U == (IData)(pipelinedCpuTest__DOT__dut__DOT__forwardB))))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
            pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
        }
    } else {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = 0U;
        pipelinedCpuTest__DOT__dut__DOT__hazardSel = 0U;
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = 0U;
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
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__hazardSel)
            ? ((((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegWrite) 
                 << 9U) | ((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemtoReg) 
                           << 8U)) | ((((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) 
                                        << 7U) | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead) 
                                                   << 6U) 
                                                  | ((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite) 
                                                     << 5U))) 
                                      | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__RegDst) 
                                          << 4U) | 
                                         (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUOp) 
                                           << 1U) | (IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__ALUSrc)))))
            : 0U);
    VL_WRITEF("HDU: ic_stall=%b dc_stall=%b mem_read_EX=%b dc_ready=%b \342\206\222 pcWrite=%b\nHDU: hazards: load_use=%b branch_EX=%b branch_MEM=%b\n",
              1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_stall,
              1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall),
              1,(1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                       >> 1U)),1,(IData)(pipelinedCpuTest__DOT__dut__DOT__dc_ready_eff),
              1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite,
              1,(IData)(pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard),
              1,pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX,
              1,(IData)(pipelinedCpuTest__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM));
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("T=%0t | PC=%x | ic_ready=%b | ic_stall=%b | dc_stall=%b | pcWrite=%b | instID=%x | WBWB=%b | RegWrite=%b | WriteReg=%0# | WriteData=%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister,
                  1,(IData)(pipelinedCpuTest__DOT__dut__DOT__ic_ready),
                  1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_stall,
                  1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall),
                  1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite,
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID,
                  2,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB),
                  1,(1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB) 
                           >> 1U)),5,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB),
                  32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB);
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
           + ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
               ? ((~ vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb) 
                  + (1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX)))
               : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcSrcEX 
        = (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX) 
            >> 2U) & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
                      == vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflushEX 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcSrcEX;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__nextPc 
        = ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcSrcEX)
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__branchTargetEX
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF);
}
