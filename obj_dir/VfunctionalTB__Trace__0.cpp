// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfunctionalTB__Syms.h"


void VfunctionalTB___024root__trace_chg_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VfunctionalTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_chg_0\n"); );
    // Init
    VfunctionalTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfunctionalTB___024root*>(voidSelf);
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VfunctionalTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VfunctionalTB___024root__trace_chg_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->functionalTB__DOT__checks
                               [0U]),37);
        bufp->chgQData(oldp+2,(vlSelf->functionalTB__DOT__checks
                               [1U]),37);
        bufp->chgQData(oldp+4,(vlSelf->functionalTB__DOT__checks
                               [2U]),37);
        bufp->chgQData(oldp+6,(vlSelf->functionalTB__DOT__checks
                               [3U]),37);
        bufp->chgQData(oldp+8,(vlSelf->functionalTB__DOT__checks
                               [4U]),37);
        bufp->chgQData(oldp+10,(vlSelf->functionalTB__DOT__checks
                                [5U]),37);
        bufp->chgQData(oldp+12,(vlSelf->functionalTB__DOT__checks
                                [6U]),37);
        bufp->chgQData(oldp+14,(vlSelf->functionalTB__DOT__checks
                                [7U]),37);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+16,(vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
        bufp->chgIData(oldp+17,(vlSelf->functionalTB__DOT__dut__DOT__nextPc),32);
        bufp->chgIData(oldp+18,(vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF),32);
        bufp->chgIData(oldp+19,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg),32);
        bufp->chgBit(oldp+20,(vlSelf->functionalTB__DOT__dut__DOT__ic_ready));
        bufp->chgBit(oldp+21,(vlSelf->functionalTB__DOT__dut__DOT__pcWrite));
        bufp->chgBit(oldp+22,(vlSelf->functionalTB__DOT__dut__DOT__hazardSel));
        bufp->chgBit(oldp+23,(vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite));
        bufp->chgIData(oldp+24,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                           >> 0x15U))]),32);
        bufp->chgIData(oldp+25,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                           >> 0x10U))]),32);
        bufp->chgIData(oldp+26,(vlSelf->functionalTB__DOT__dut__DOT__signExtImmID),32);
        bufp->chgIData(oldp+27,(vlSelf->functionalTB__DOT__dut__DOT__branchTargetID),32);
        bufp->chgIData(oldp+28,(vlSelf->functionalTB__DOT__dut__DOT__instID),32);
        bufp->chgIData(oldp+29,(vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID),32);
        bufp->chgCData(oldp+30,((((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite) 
                                  << 1U) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg))),2);
        bufp->chgCData(oldp+31,(vlSelf->functionalTB__DOT__dut__DOT__MEMID),3);
        bufp->chgCData(oldp+32,((((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst) 
                                  << 4U) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp) 
                                             << 1U) 
                                            | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc)))),5);
        bufp->chgSData(oldp+33,(vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID),10);
        bufp->chgCData(oldp+34,(vlSelf->functionalTB__DOT__dut__DOT__WBEX),2);
        bufp->chgCData(oldp+35,(vlSelf->functionalTB__DOT__dut__DOT__MEMEX),3);
        bufp->chgCData(oldp+36,(vlSelf->functionalTB__DOT__dut__DOT__EXEX),5);
        bufp->chgIData(oldp+37,(vlSelf->functionalTB__DOT__dut__DOT__regData1EX),32);
        bufp->chgIData(oldp+38,(vlSelf->functionalTB__DOT__dut__DOT__regData2EX),32);
        bufp->chgIData(oldp+39,(vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX),32);
        bufp->chgCData(oldp+40,(vlSelf->functionalTB__DOT__dut__DOT__RsEX),5);
        bufp->chgCData(oldp+41,(vlSelf->functionalTB__DOT__dut__DOT__RtEX),5);
        bufp->chgCData(oldp+42,(vlSelf->functionalTB__DOT__dut__DOT__RdEX),5);
        bufp->chgCData(oldp+43,(vlSelf->functionalTB__DOT__dut__DOT__FuncEX),6);
        bufp->chgCData(oldp+44,(vlSelf->functionalTB__DOT__dut__DOT__forwardA),2);
        bufp->chgCData(oldp+45,(vlSelf->functionalTB__DOT__dut__DOT__forwardB),2);
        bufp->chgIData(oldp+46,(vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout),32);
        bufp->chgIData(oldp+47,(vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd),32);
        bufp->chgIData(oldp+48,(vlSelf->functionalTB__DOT__dut__DOT__AluInb),32);
        bufp->chgIData(oldp+49,(((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                  ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                      ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                                      : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                                  : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                      ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                          ? ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                              ? ((vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                  >> 0x1fU)
                                                  ? 1U
                                                  : 0U)
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                    ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                     ? 
                                                    (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                     | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                                     : 
                                                    (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                     & vlSelf->functionalTB__DOT__dut__DOT__AluInb)))))),32);
        bufp->chgCData(oldp+50,(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX),4);
        bufp->chgCData(oldp+51,(((0x10U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX))
                                  ? (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)
                                  : (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX))),5);
        bufp->chgIData(oldp+52,(vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX),32);
        bufp->chgBit(oldp+53,(vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX));
        bufp->chgBit(oldp+54,(vlSelf->functionalTB__DOT__dut__DOT__IFflushEX));
        bufp->chgCData(oldp+55,(vlSelf->functionalTB__DOT__dut__DOT__WBMEM),2);
        bufp->chgCData(oldp+56,(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM),3);
        bufp->chgIData(oldp+57,(vlSelf->functionalTB__DOT__dut__DOT__AluResMEM),32);
        bufp->chgIData(oldp+58,(vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM),32);
        bufp->chgCData(oldp+59,(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM),5);
        bufp->chgIData(oldp+60,(vlSelf->functionalTB__DOT__dut__DOT__dc_rdata),32);
        bufp->chgBit(oldp+61,(vlSelf->functionalTB__DOT__dut__DOT__dc_ready));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                     >> 1U))));
        bufp->chgBit(oldp+63,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgCData(oldp+64,(vlSelf->functionalTB__DOT__dut__DOT__WBWB),2);
        bufp->chgIData(oldp+65,(vlSelf->functionalTB__DOT__dut__DOT__AluResWB),32);
        bufp->chgIData(oldp+66,(vlSelf->functionalTB__DOT__dut__DOT__MEMDataWB),32);
        bufp->chgCData(oldp+67,(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB),5);
        bufp->chgIData(oldp+68,(vlSelf->functionalTB__DOT__dut__DOT__finalResultWB),32);
        bufp->chgBit(oldp+69,(vlSelf->functionalTB__DOT__dut__DOT__ic_stall));
        bufp->chgBit(oldp+70,(vlSelf->functionalTB__DOT__dut__DOT__dc_stall));
        bufp->chgBit(oldp+71,(vlSelf->functionalTB__DOT__dut__DOT__dc_done));
        bufp->chgIData(oldp+72,((0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active)),32);
        bufp->chgIData(oldp+73,(vlSelf->functionalTB__DOT__dut__DOT__umem_rdata),32);
        bufp->chgBit(oldp+74,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read));
        bufp->chgBit(oldp+75,(vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready));
        bufp->chgIData(oldp+76,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
        bufp->chgIData(oldp+77,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
        bufp->chgBit(oldp+78,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
        bufp->chgBit(oldp+79,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
        bufp->chgBit(oldp+80,(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready));
        bufp->chgBit(oldp+81,(vlSelf->functionalTB__DOT__dut__DOT__umem_read));
        bufp->chgBit(oldp+82,(vlSelf->functionalTB__DOT__dut__DOT__umem_write));
        bufp->chgBit(oldp+83,(vlSelf->functionalTB__DOT__dut__DOT__umem_ready));
        bufp->chgIData(oldp+84,(vlSelf->functionalTB__DOT__dut__DOT__umem_addr),32);
        bufp->chgIData(oldp+85,(vlSelf->functionalTB__DOT__dut__DOT__umem_wdata),32);
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                                     >> 1U))));
        bufp->chgBit(oldp+87,(vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff));
        bufp->chgIData(oldp+88,(vlSelf->functionalTB__DOT__dut__DOT__dc_rdata_latch),32);
        bufp->chgBit(oldp+89,(vlSelf->functionalTB__DOT__dut__DOT__stall_WB));
        bufp->chgCData(oldp+90,((7U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX) 
                                       >> 1U))),3);
        bufp->chgBit(oldp+91,((0U == ((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                       ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                           ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                                           : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                                       : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                           ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                               ? ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 
                                                  ((vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                    >> 0x1fU)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                               ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                               : ((1U 
                                                   & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 
                                                  (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                   | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                                   : 
                                                  (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                   & vlSelf->functionalTB__DOT__dut__DOT__AluInb))))))));
        bufp->chgBit(oldp+92,((IData)(((0U == (0xcU 
                                               & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))) 
                                       & (((vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                            >> 0x1fU) 
                                           == (vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand 
                                               >> 0x1fU)) 
                                          & ((vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                              >> 0x1fU) 
                                             != (vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                 >> 0x1fU)))))));
        bufp->chgIData(oldp+93,(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum),32);
        bufp->chgIData(oldp+94,(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand),32);
        bufp->chgBit(oldp+95,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout)) 
                                               + (QData)((IData)(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand))) 
                                              >> 0x20U))))));
        bufp->chgCData(oldp+96,((vlSelf->functionalTB__DOT__dut__DOT__instID 
                                 >> 0x1aU)),6);
        bufp->chgBit(oldp+97,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite));
        bufp->chgBit(oldp+98,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg));
        bufp->chgBit(oldp+99,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch));
        bufp->chgBit(oldp+100,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemRead));
        bufp->chgBit(oldp+101,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemWrite));
        bufp->chgBit(oldp+102,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst));
        bufp->chgBit(oldp+103,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc));
        bufp->chgCData(oldp+104,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp),3);
        bufp->chgBit(oldp+105,(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
        bufp->chgBit(oldp+106,(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
        bufp->chgIData(oldp+107,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+108,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
        bufp->chgBit(oldp+109,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
        bufp->chgBit(oldp+110,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
        bufp->chgIData(oldp+111,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),23);
        bufp->chgCData(oldp+112,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),7);
        bufp->chgBit(oldp+113,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
        bufp->chgCData(oldp+114,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
        bufp->chgCData(oldp+115,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
        bufp->chgIData(oldp+116,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+117,((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                  >> 9U)),23);
        bufp->chgCData(oldp+118,((0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                           >> 2U))),7);
        bufp->chgCData(oldp+119,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+120,((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+121,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgBit(oldp+122,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgCData(oldp+123,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
        bufp->chgBit(oldp+124,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
        bufp->chgBit(oldp+125,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
        bufp->chgIData(oldp+126,(((IData)(1U) + ((1U 
                                                  & vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 2U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+127,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+128,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgIData(oldp+129,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+130,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+131,((vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                  >> 9U)),23);
        bufp->chgCData(oldp+132,((0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                           >> 2U))),7);
        bufp->chgCData(oldp+133,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+134,((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+135,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgCData(oldp+136,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
        bufp->chgBit(oldp+137,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgBit(oldp+138,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
        bufp->chgCData(oldp+139,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
        bufp->chgBit(oldp+140,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
        bufp->chgIData(oldp+141,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),23);
        bufp->chgCData(oldp+142,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),7);
        bufp->chgIData(oldp+143,(((IData)(1U) + ((1U 
                                                  & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 2U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+144,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+145,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgCData(oldp+146,(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
        bufp->chgCData(oldp+147,(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
        bufp->chgCData(oldp+148,((0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                           >> 0x15U))),5);
        bufp->chgCData(oldp+149,((0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                           >> 0x10U))),5);
        bufp->chgIData(oldp+150,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
        bufp->chgIData(oldp+151,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
        bufp->chgIData(oldp+152,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
        bufp->chgIData(oldp+153,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
        bufp->chgIData(oldp+154,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
        bufp->chgIData(oldp+155,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
        bufp->chgIData(oldp+156,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
        bufp->chgIData(oldp+157,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
        bufp->chgIData(oldp+158,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
        bufp->chgIData(oldp+159,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
        bufp->chgIData(oldp+160,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
        bufp->chgIData(oldp+161,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
        bufp->chgIData(oldp+162,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
        bufp->chgIData(oldp+163,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
        bufp->chgIData(oldp+164,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
        bufp->chgIData(oldp+165,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
        bufp->chgIData(oldp+166,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
        bufp->chgIData(oldp+167,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
        bufp->chgIData(oldp+168,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
        bufp->chgIData(oldp+169,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
        bufp->chgIData(oldp+170,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
        bufp->chgIData(oldp+171,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
        bufp->chgIData(oldp+172,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
        bufp->chgIData(oldp+173,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
        bufp->chgIData(oldp+174,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
        bufp->chgIData(oldp+175,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
        bufp->chgIData(oldp+176,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
        bufp->chgIData(oldp+177,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
        bufp->chgIData(oldp+178,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
        bufp->chgIData(oldp+179,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
        bufp->chgIData(oldp+180,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
        bufp->chgIData(oldp+181,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
        bufp->chgIData(oldp+182,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
        bufp->chgCData(oldp+183,(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
        bufp->chgBit(oldp+184,(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX) 
                                      >> 1U))));
        bufp->chgBit(oldp+188,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgBit(oldp+189,((((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                 >> 1U) & ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff)) 
                                           & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                                               == (0x1fU 
                                                   & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                              | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                     >> 0x10U))))))));
        bufp->chgBit(oldp+190,(((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch) 
                                & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX) 
                                    >> 1U) & ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)) 
                                              & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                                 | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                        >> 0x10U)))))))));
        bufp->chgBit(oldp+191,(((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch) 
                                & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
                                    >> 1U) & ((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM)) 
                                              & (((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                                 | ((IData)(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                                        >> 0x10U)))))))));
        bufp->chgBit(oldp+192,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB))));
        bufp->chgBit(oldp+193,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMID) 
                                      >> 2U))));
        bufp->chgQData(oldp+194,(vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles),64);
        bufp->chgQData(oldp+196,(vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired),64);
        bufp->chgQData(oldp+198,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits),64);
        bufp->chgQData(oldp+200,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses),64);
        bufp->chgQData(oldp+202,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
        bufp->chgQData(oldp+204,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits),64);
        bufp->chgQData(oldp+206,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses),64);
        bufp->chgQData(oldp+208,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
        bufp->chgQData(oldp+210,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions),64);
        bufp->chgQData(oldp+212,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions),64);
        bufp->chgBit(oldp+214,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev));
        bufp->chgBit(oldp+215,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_prev));
        bufp->chgBit(oldp+216,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_taken_prev));
        bufp->chgDouble(oldp+217,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
        bufp->chgDouble(oldp+219,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
        bufp->chgDouble(oldp+221,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
        bufp->chgDouble(oldp+223,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    }
    bufp->chgBit(oldp+225,(vlSelf->functionalTB__DOT__clk));
    bufp->chgBit(oldp+226,(vlSelf->functionalTB__DOT__rst));
    bufp->chgBit(oldp+227,(vlSelf->functionalTB__DOT__perf_print));
    bufp->chgIData(oldp+228,(vlSelf->functionalTB__DOT__prev_pc),32);
    bufp->chgIData(oldp+229,(vlSelf->functionalTB__DOT__stable_count),32);
    bufp->chgIData(oldp+230,(vlSelf->functionalTB__DOT__pass_count),32);
    bufp->chgIData(oldp+231,(vlSelf->functionalTB__DOT__fail_count),32);
    bufp->chgIData(oldp+232,(vlSelf->functionalTB__DOT__run_checks__Vstatic__actual),32);
    bufp->chgIData(oldp+233,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->chgIData(oldp+234,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
}

void VfunctionalTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_cleanup\n"); );
    // Init
    VfunctionalTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfunctionalTB___024root*>(voidSelf);
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
