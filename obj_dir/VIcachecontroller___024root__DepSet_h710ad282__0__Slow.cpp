// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIcachecontroller.h for the primary calling header

#include "VIcachecontroller__pch.h"
#include "VIcachecontroller__Syms.h"
#include "VIcachecontroller___024root.h"

VL_ATTR_COLD void VIcachecontroller___024root___eval_initial__TOP(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ Memory__DOT__i;
    Memory__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    Memory__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, Memory__DOT__i)) {
        vlSelf->Memory__DOT__memory[(0xffU & Memory__DOT__i)] = 0U;
        Memory__DOT__i = ((IData)(1U) + Memory__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->Memory__DOT__memory), 0
                 , ~0ULL);
    __Vtemp_3[0U] = 0x2e766364U;
    __Vtemp_3[1U] = 0x7573696dU;
    __Vtemp_3[2U] = 0x6370U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_3));
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:29: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_PRINTF_MT("-Info: pipelinedCpuTest.sv:31: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF("Cache config: SIZE=        256, WAYS=          2\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    VL_WRITEF("T=%0t | DCACHE state=%0# | cpu_read=%b | cpu_addr=%x | dc_ready=%b | mem_ready=%b\n",
              64,VL_TIME_UNITED_Q(1000),-9,3,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),
              1,(1U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM) 
                       >> 1U)),32,vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM,
              1,(IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready),
              1,vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6772616dU;
    __Vtemp_4[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_4)
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
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__stl(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VIcachecontroller___024root___eval_triggers__stl(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIcachecontroller___024root___dump_triggers__stl(vlSelf);
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

VL_ATTR_COLD void VIcachecontroller___024root___stl_sequent__TOP__0(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ BPLRU__DOT__unnamedblk1__DOT__i;
    BPLRU__DOT__unnamedblk1__DOT__i = 0;
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
    // Body
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read = 0U;
    vlSelf->Read_data = ((IData)(vlSelf->MemRead) ? 
                         vlSelf->Memory__DOT__memory
                         [(0xffU & (vlSelf->address 
                                    >> 2U))] : 0U);
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
    vlSelf->victim_way = 0U;
    BPLRU__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, BPLRU__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (~ ((IData)(vlSelf->valid_ways) 
                          >> (3U & BPLRU__DOT__unnamedblk1__DOT__i))))) {
                vlSelf->victim_way = (3U & BPLRU__DOT__unnamedblk1__DOT__i);
                goto __Vlabel1;
            }
            BPLRU__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + BPLRU__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if ((0xfU == (IData)(vlSelf->valid_ways))) {
        vlSelf->BPLRU__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->BPLRU__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ (vlSelf->BPLRU__DOT__lru_bits
                              [vlSelf->set_idx] >> 
                              (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i))))) {
                    vlSelf->victim_way = (3U & vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
                    goto __Vlabel2;
                }
                vlSelf->BPLRU__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->BPLRU__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel2: ;
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX) 
                     << 2U) | (3U & ((IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX) 
                                     >> 1U)));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX 
        = VIcachecontroller__ConstPool__TABLE_h0e887d23_0
        [__Vtableidx2];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID 
        = (((- (IData)((1U & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID));
    pipelinedCpuTest__DOT__dut__DOT__branchTargetID 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID 
           + VL_SHIFTL_III(32,32,32, vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID, 2U));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 0U;
    if ((0U != (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = 1U;
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
        [(0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                   >> 0x15U))];
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID 
        = vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register
        [(0x1fU & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID 
                   >> 0x10U))];
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
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
        = ((0U == (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state))
            ? vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg);
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
    pipelinedCpuTest__DOT__dut__DOT__MEMID = (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__Branch) 
                                               << 2U) 
                                              | (((IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemRead) 
                                                  << 1U) 
                                                 | (IData)(pipelinedCpuTest__DOT__dut__DOT__CU__DOT__MemWrite)));
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
                goto __Vlabel3;
            }
            pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel3: ;
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
    pipelinedCpuTest__DOT__dut__DOT__pcSrcID = (((IData)(pipelinedCpuTest__DOT__dut__DOT__MEMID) 
                                                 >> 2U) 
                                                & (vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID 
                                                   == vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID));
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflush 
        = pipelinedCpuTest__DOT__dut__DOT__pcSrcID;
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
                goto __Vlabel4;
            }
            pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel4: ;
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = 0U;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF 
        = ((IData)(4U) + vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__nextPc 
        = ((IData)(pipelinedCpuTest__DOT__dut__DOT__pcSrcID)
            ? pipelinedCpuTest__DOT__dut__DOT__branchTargetID
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF);
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
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB 
        = ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB))
            ? pipelinedCpuTest__DOT__dut__DOT__dc_rdata
            : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB);
    pipelinedCpuTest__DOT__dut__DOT__hdu__DOT____VdfgExtracted_h5d4fe632__0 
        = (1U & ((~ (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready)) 
                 | (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall)));
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
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum 
        = (vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout 
           + ((1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX))
               ? ((~ vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb) 
                  + (1U & (IData)(vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX)))
               : vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb));
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
