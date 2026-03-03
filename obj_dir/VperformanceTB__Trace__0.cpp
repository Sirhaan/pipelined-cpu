// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VperformanceTB__Syms.h"


void VperformanceTB___024root__trace_chg_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VperformanceTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_chg_0\n"); );
    // Init
    VperformanceTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VperformanceTB___024root*>(voidSelf);
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VperformanceTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VperformanceTB___024root__trace_chg_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][0U]));
        bufp->chgBit(oldp+1,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][1U]));
        bufp->chgBit(oldp+2,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][2U]));
        bufp->chgBit(oldp+3,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][3U]));
        bufp->chgBit(oldp+4,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][4U]));
        bufp->chgBit(oldp+5,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][5U]));
        bufp->chgBit(oldp+6,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][6U]));
        bufp->chgBit(oldp+7,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [0U][7U]));
        bufp->chgBit(oldp+8,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [1U][0U]));
        bufp->chgBit(oldp+9,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                             [1U][1U]));
        bufp->chgBit(oldp+10,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][2U]));
        bufp->chgBit(oldp+11,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][3U]));
        bufp->chgBit(oldp+12,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][4U]));
        bufp->chgBit(oldp+13,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][5U]));
        bufp->chgBit(oldp+14,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][6U]));
        bufp->chgBit(oldp+15,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                              [1U][7U]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+16,(vlSelf->performanceTB__DOT__break_detected));
        bufp->chgIData(oldp+17,(vlSelf->performanceTB__DOT__break_pc),32);
        bufp->chgCData(oldp+18,(vlSelf->performanceTB__DOT__special_pipe),3);
        bufp->chgBit(oldp+19,(((0U == (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                       >> 0x1aU)) & 
                               ((0xdU == (0x3fU & vlSelf->performanceTB__DOT__dut__DOT__instID)) 
                                | (0xcU == (0x3fU & vlSelf->performanceTB__DOT__dut__DOT__instID))))));
        bufp->chgBit(oldp+20,(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
        bufp->chgBit(oldp+21,(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
        bufp->chgIData(oldp+22,(vlSelf->performanceTB__DOT__cycle_count),32);
        bufp->chgIData(oldp+23,(vlSelf->performanceTB__DOT__instr_count),32);
        bufp->chgIData(oldp+24,(vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
        bufp->chgIData(oldp+25,(vlSelf->performanceTB__DOT__dut__DOT__nextPc),32);
        bufp->chgIData(oldp+26,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF),32);
        bufp->chgIData(oldp+27,(vlSelf->performanceTB__DOT__dut__DOT__ic_inst),32);
        bufp->chgBit(oldp+28,(vlSelf->performanceTB__DOT__dut__DOT__ic_ready));
        bufp->chgBit(oldp+29,(vlSelf->performanceTB__DOT__dut__DOT__pcWrite));
        bufp->chgBit(oldp+30,(vlSelf->performanceTB__DOT__dut__DOT__hazardSel));
        bufp->chgBit(oldp+31,(vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite));
        bufp->chgIData(oldp+32,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x15U))]),32);
        bufp->chgIData(oldp+33,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x10U))]),32);
        bufp->chgIData(oldp+34,(vlSelf->performanceTB__DOT__dut__DOT__signExtImmID),32);
        bufp->chgIData(oldp+35,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetID),32);
        bufp->chgIData(oldp+36,(vlSelf->performanceTB__DOT__dut__DOT__instID),32);
        bufp->chgIData(oldp+37,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID),32);
        bufp->chgCData(oldp+38,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegWrite) 
                                  << 1U) | (IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemtoReg))),2);
        bufp->chgCData(oldp+39,(vlSelf->performanceTB__DOT__dut__DOT__MEMID),3);
        bufp->chgCData(oldp+40,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegDst) 
                                  << 4U) | (((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUOp) 
                                             << 1U) 
                                            | (IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUSrc)))),5);
        bufp->chgSData(oldp+41,(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID),10);
        bufp->chgCData(oldp+42,(vlSelf->performanceTB__DOT__dut__DOT__WBEX),2);
        bufp->chgCData(oldp+43,(vlSelf->performanceTB__DOT__dut__DOT__MEMEX),3);
        bufp->chgCData(oldp+44,(vlSelf->performanceTB__DOT__dut__DOT__EXEX),5);
        bufp->chgIData(oldp+45,(vlSelf->performanceTB__DOT__dut__DOT__regData1EX),32);
        bufp->chgIData(oldp+46,(vlSelf->performanceTB__DOT__dut__DOT__regData2EX),32);
        bufp->chgIData(oldp+47,(vlSelf->performanceTB__DOT__dut__DOT__signExtImmEX),32);
        bufp->chgCData(oldp+48,(vlSelf->performanceTB__DOT__dut__DOT__RsEX),5);
        bufp->chgCData(oldp+49,(vlSelf->performanceTB__DOT__dut__DOT__RtEX),5);
        bufp->chgCData(oldp+50,(vlSelf->performanceTB__DOT__dut__DOT__RdEX),5);
        bufp->chgCData(oldp+51,(vlSelf->performanceTB__DOT__dut__DOT__FuncEX),6);
        bufp->chgCData(oldp+52,(vlSelf->performanceTB__DOT__dut__DOT__forwardA),2);
        bufp->chgCData(oldp+53,(vlSelf->performanceTB__DOT__dut__DOT__forwardB),2);
        bufp->chgIData(oldp+54,(vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout),32);
        bufp->chgIData(oldp+55,(vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd),32);
        bufp->chgIData(oldp+56,(vlSelf->performanceTB__DOT__dut__DOT__AluInb),32);
        bufp->chgIData(oldp+57,(((8U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                  ? ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                      ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->performanceTB__DOT__dut__DOT__AluInb))))
                                      : ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__AluInb, 0x10U))))
                                  : ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                      ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                          ? ((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                              ? ((vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                  >> 0x1fU)
                                                  ? 1U
                                                  : 0U)
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                    ? vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                     ? 
                                                    (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                     | vlSelf->performanceTB__DOT__dut__DOT__AluInb)
                                                     : 
                                                    (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                     & vlSelf->performanceTB__DOT__dut__DOT__AluInb)))))),32);
        bufp->chgCData(oldp+58,(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX),4);
        bufp->chgCData(oldp+59,(((0x10U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX))
                                  ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)
                                  : (IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX))),5);
        bufp->chgIData(oldp+60,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX),32);
        bufp->chgBit(oldp+61,(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX));
        bufp->chgBit(oldp+62,(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX));
        bufp->chgCData(oldp+63,(vlSelf->performanceTB__DOT__dut__DOT__WBMEM),2);
        bufp->chgCData(oldp+64,(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM),3);
        bufp->chgIData(oldp+65,(vlSelf->performanceTB__DOT__dut__DOT__AluResMEM),32);
        bufp->chgIData(oldp+66,(vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM),32);
        bufp->chgCData(oldp+67,(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM),5);
        bufp->chgIData(oldp+68,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata),32);
        bufp->chgBit(oldp+69,(vlSelf->performanceTB__DOT__dut__DOT__dc_ready));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgCData(oldp+72,(vlSelf->performanceTB__DOT__dut__DOT__WBWB),2);
        bufp->chgIData(oldp+73,(vlSelf->performanceTB__DOT__dut__DOT__AluResWB),32);
        bufp->chgIData(oldp+74,(vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB),32);
        bufp->chgCData(oldp+75,(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),5);
        bufp->chgIData(oldp+76,(vlSelf->performanceTB__DOT__dut__DOT__finalResultWB),32);
        bufp->chgBit(oldp+77,(vlSelf->performanceTB__DOT__dut__DOT__dc_done));
        bufp->chgIData(oldp+78,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr),32);
        bufp->chgIData(oldp+79,(vlSelf->performanceTB__DOT__dut__DOT__umem_rdata),32);
        bufp->chgBit(oldp+80,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read));
        bufp->chgBit(oldp+81,(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready));
        bufp->chgIData(oldp+82,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
        bufp->chgIData(oldp+83,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
        bufp->chgBit(oldp+84,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
        bufp->chgBit(oldp+85,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
        bufp->chgBit(oldp+86,(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready));
        bufp->chgBit(oldp+87,(vlSelf->performanceTB__DOT__dut__DOT__umem_read));
        bufp->chgBit(oldp+88,(vlSelf->performanceTB__DOT__dut__DOT__umem_write));
        bufp->chgBit(oldp+89,(vlSelf->performanceTB__DOT__dut__DOT__umem_ready));
        bufp->chgIData(oldp+90,(vlSelf->performanceTB__DOT__dut__DOT__umem_addr),32);
        bufp->chgIData(oldp+91,(vlSelf->performanceTB__DOT__dut__DOT__umem_wdata),32);
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                                     >> 1U))));
        bufp->chgBit(oldp+93,(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff));
        bufp->chgIData(oldp+94,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch),32);
        bufp->chgBit(oldp+95,(vlSelf->performanceTB__DOT__dut__DOT__stall_WB));
        bufp->chgCData(oldp+96,((7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                       >> 1U))),3);
        bufp->chgBit(oldp+97,((0U == ((8U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                       ? ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                           ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->performanceTB__DOT__dut__DOT__AluInb))))
                                           : ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 0U
                                                   : 
                                                  VL_SHIFTL_III(32,32,32, vlSelf->performanceTB__DOT__dut__DOT__AluInb, 0x10U))))
                                       : ((4U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                           ? ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                               ? ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 
                                                  ((vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                    >> 0x1fU)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                               ? vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                               : ((1U 
                                                   & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))
                                                   ? 
                                                  (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                   | vlSelf->performanceTB__DOT__dut__DOT__AluInb)
                                                   : 
                                                  (vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                                   & vlSelf->performanceTB__DOT__dut__DOT__AluInb))))))));
        bufp->chgBit(oldp+98,((IData)(((0U == (0xcU 
                                               & (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))) 
                                       & (((vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                            >> 0x1fU) 
                                           == (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand 
                                               >> 0x1fU)) 
                                          & ((vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout 
                                              >> 0x1fU) 
                                             != (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                 >> 0x1fU)))))));
        bufp->chgIData(oldp+99,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum),32);
        bufp->chgIData(oldp+100,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand),32);
        bufp->chgBit(oldp+101,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->performanceTB__DOT__dut__DOT__AluMuxAout)) 
                                                  + (QData)((IData)(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand))) 
                                                 >> 0x20U))))));
        bufp->chgCData(oldp+102,((vlSelf->performanceTB__DOT__dut__DOT__instID 
                                  >> 0x1aU)),6);
        bufp->chgBit(oldp+103,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegWrite));
        bufp->chgBit(oldp+104,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemtoReg));
        bufp->chgBit(oldp+105,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch));
        bufp->chgBit(oldp+106,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemRead));
        bufp->chgBit(oldp+107,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__MemWrite));
        bufp->chgBit(oldp+108,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__RegDst));
        bufp->chgBit(oldp+109,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUSrc));
        bufp->chgCData(oldp+110,(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__ALUOp),3);
        bufp->chgBit(oldp+111,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
        bufp->chgBit(oldp+112,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
        bufp->chgIData(oldp+113,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][0U]),25);
        bufp->chgIData(oldp+114,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][1U]),25);
        bufp->chgIData(oldp+115,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][2U]),25);
        bufp->chgIData(oldp+116,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][3U]),25);
        bufp->chgIData(oldp+117,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][4U]),25);
        bufp->chgIData(oldp+118,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][5U]),25);
        bufp->chgIData(oldp+119,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][6U]),25);
        bufp->chgIData(oldp+120,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][7U]),25);
        bufp->chgIData(oldp+121,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][0U]),25);
        bufp->chgIData(oldp+122,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][1U]),25);
        bufp->chgIData(oldp+123,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][2U]),25);
        bufp->chgIData(oldp+124,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][3U]),25);
        bufp->chgIData(oldp+125,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][4U]),25);
        bufp->chgIData(oldp+126,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][5U]),25);
        bufp->chgIData(oldp+127,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][6U]),25);
        bufp->chgIData(oldp+128,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][7U]),25);
        bufp->chgBit(oldp+129,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][0U]));
        bufp->chgBit(oldp+130,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][1U]));
        bufp->chgBit(oldp+131,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][2U]));
        bufp->chgBit(oldp+132,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][3U]));
        bufp->chgBit(oldp+133,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][4U]));
        bufp->chgBit(oldp+134,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][5U]));
        bufp->chgBit(oldp+135,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][6U]));
        bufp->chgBit(oldp+136,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][7U]));
        bufp->chgBit(oldp+137,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][0U]));
        bufp->chgBit(oldp+138,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][1U]));
        bufp->chgBit(oldp+139,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][2U]));
        bufp->chgBit(oldp+140,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][3U]));
        bufp->chgBit(oldp+141,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][4U]));
        bufp->chgBit(oldp+142,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][5U]));
        bufp->chgBit(oldp+143,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][6U]));
        bufp->chgBit(oldp+144,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][7U]));
        bufp->chgBit(oldp+145,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][0U]));
        bufp->chgBit(oldp+146,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][1U]));
        bufp->chgBit(oldp+147,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][2U]));
        bufp->chgBit(oldp+148,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][3U]));
        bufp->chgBit(oldp+149,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][4U]));
        bufp->chgBit(oldp+150,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][5U]));
        bufp->chgBit(oldp+151,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][6U]));
        bufp->chgBit(oldp+152,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][7U]));
        bufp->chgBit(oldp+153,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][0U]));
        bufp->chgBit(oldp+154,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][1U]));
        bufp->chgBit(oldp+155,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][2U]));
        bufp->chgBit(oldp+156,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][3U]));
        bufp->chgBit(oldp+157,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][4U]));
        bufp->chgBit(oldp+158,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][5U]));
        bufp->chgBit(oldp+159,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][6U]));
        bufp->chgBit(oldp+160,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][7U]));
        bufp->chgIData(oldp+161,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+162,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
        bufp->chgBit(oldp+163,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
        bufp->chgBit(oldp+164,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
        bufp->chgIData(oldp+165,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),25);
        bufp->chgCData(oldp+166,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),3);
        bufp->chgCData(oldp+167,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset),2);
        bufp->chgBit(oldp+168,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
        bufp->chgCData(oldp+169,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word),2);
        bufp->chgCData(oldp+170,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
        bufp->chgCData(oldp+171,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
        bufp->chgIData(oldp+172,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+173,((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                  >> 7U)),25);
        bufp->chgCData(oldp+174,((7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                        >> 4U))),3);
        bufp->chgCData(oldp+175,((3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),2);
        bufp->chgCData(oldp+176,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+177,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+178,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgBit(oldp+179,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgCData(oldp+180,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
        bufp->chgBit(oldp+181,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
        bufp->chgBit(oldp+182,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
        bufp->chgCData(oldp+183,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
        bufp->chgCData(oldp+184,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
        bufp->chgCData(oldp+185,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
        bufp->chgCData(oldp+186,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
        bufp->chgCData(oldp+187,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
        bufp->chgCData(oldp+188,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
        bufp->chgCData(oldp+189,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
        bufp->chgCData(oldp+190,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
        bufp->chgCData(oldp+191,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
        bufp->chgCData(oldp+192,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
        bufp->chgCData(oldp+193,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
        bufp->chgCData(oldp+194,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
        bufp->chgCData(oldp+195,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
        bufp->chgCData(oldp+196,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
        bufp->chgCData(oldp+197,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
        bufp->chgCData(oldp+198,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
        bufp->chgIData(oldp+199,(((IData)(1U) + ((1U 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (7U 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 4U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+200,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+201,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgIData(oldp+202,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][0U]),25);
        bufp->chgIData(oldp+203,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][1U]),25);
        bufp->chgIData(oldp+204,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][2U]),25);
        bufp->chgIData(oldp+205,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][3U]),25);
        bufp->chgIData(oldp+206,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][4U]),25);
        bufp->chgIData(oldp+207,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][5U]),25);
        bufp->chgIData(oldp+208,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][6U]),25);
        bufp->chgIData(oldp+209,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][7U]),25);
        bufp->chgIData(oldp+210,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][0U]),25);
        bufp->chgIData(oldp+211,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][1U]),25);
        bufp->chgIData(oldp+212,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][2U]),25);
        bufp->chgIData(oldp+213,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][3U]),25);
        bufp->chgIData(oldp+214,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][4U]),25);
        bufp->chgIData(oldp+215,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][5U]),25);
        bufp->chgIData(oldp+216,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][6U]),25);
        bufp->chgIData(oldp+217,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][7U]),25);
        bufp->chgBit(oldp+218,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                                 ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                                 : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))));
        bufp->chgIData(oldp+219,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+220,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),25);
        bufp->chgCData(oldp+221,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),3);
        bufp->chgCData(oldp+222,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset),2);
        bufp->chgBit(oldp+223,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
        bufp->chgCData(oldp+224,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word),2);
        bufp->chgCData(oldp+225,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
        bufp->chgIData(oldp+226,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+227,((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                  >> 7U)),25);
        bufp->chgCData(oldp+228,((7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 4U))),3);
        bufp->chgCData(oldp+229,((3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),2);
        bufp->chgCData(oldp+230,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+231,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+232,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgCData(oldp+233,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
        bufp->chgBit(oldp+234,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgBit(oldp+235,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
        bufp->chgCData(oldp+236,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
        bufp->chgCData(oldp+237,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
        bufp->chgCData(oldp+238,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
        bufp->chgCData(oldp+239,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
        bufp->chgCData(oldp+240,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
        bufp->chgCData(oldp+241,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
        bufp->chgCData(oldp+242,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
        bufp->chgCData(oldp+243,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
        bufp->chgCData(oldp+244,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
        bufp->chgCData(oldp+245,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
        bufp->chgCData(oldp+246,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
        bufp->chgCData(oldp+247,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
        bufp->chgCData(oldp+248,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
        bufp->chgCData(oldp+249,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
        bufp->chgCData(oldp+250,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
        bufp->chgCData(oldp+251,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
        bufp->chgIData(oldp+252,(((IData)(1U) + ((1U 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (7U 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 4U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+253,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+254,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgCData(oldp+255,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
        bufp->chgCData(oldp+256,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
        bufp->chgCData(oldp+257,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x15U))),5);
        bufp->chgCData(oldp+258,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x10U))),5);
        bufp->chgIData(oldp+259,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
        bufp->chgIData(oldp+260,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
        bufp->chgIData(oldp+261,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
        bufp->chgIData(oldp+262,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
        bufp->chgIData(oldp+263,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
        bufp->chgIData(oldp+264,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
        bufp->chgIData(oldp+265,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
        bufp->chgIData(oldp+266,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
        bufp->chgIData(oldp+267,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
        bufp->chgIData(oldp+268,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
        bufp->chgIData(oldp+269,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
        bufp->chgIData(oldp+270,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
        bufp->chgIData(oldp+271,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
        bufp->chgIData(oldp+272,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
        bufp->chgIData(oldp+273,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
        bufp->chgIData(oldp+274,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
        bufp->chgIData(oldp+275,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
        bufp->chgIData(oldp+276,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
        bufp->chgIData(oldp+277,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
        bufp->chgIData(oldp+278,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
        bufp->chgIData(oldp+279,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
        bufp->chgIData(oldp+280,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
        bufp->chgIData(oldp+281,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
        bufp->chgIData(oldp+282,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
        bufp->chgIData(oldp+283,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
        bufp->chgIData(oldp+284,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
        bufp->chgIData(oldp+285,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
        bufp->chgIData(oldp+286,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
        bufp->chgIData(oldp+287,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
        bufp->chgIData(oldp+288,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
        bufp->chgIData(oldp+289,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
        bufp->chgIData(oldp+290,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
        bufp->chgIData(oldp+291,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
        bufp->chgCData(oldp+292,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
        bufp->chgBit(oldp+293,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
        bufp->chgBit(oldp+294,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+295,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+296,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                      >> 1U))));
        bufp->chgBit(oldp+297,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgBit(oldp+298,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                 >> 1U) & ((~ (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready_eff)) 
                                           & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                                               == (0x1fU 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                              | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RtEX) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                     >> 0x10U))))))));
        bufp->chgBit(oldp+299,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                                & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                    >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX)) 
                                              & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                                 | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__RdEX) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                        >> 0x10U)))))))));
        bufp->chgBit(oldp+300,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__CU__DOT__Branch) 
                                & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                    >> 1U) & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                                              & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                      >> 0x15U))) 
                                                 | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                        >> 0x10U)))))))));
        bufp->chgBit(oldp+301,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))));
        bufp->chgBit(oldp+302,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                      >> 2U))));
        bufp->chgQData(oldp+303,(vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles),64);
        bufp->chgQData(oldp+305,(vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired),64);
        bufp->chgQData(oldp+307,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits),64);
        bufp->chgQData(oldp+309,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses),64);
        bufp->chgQData(oldp+311,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
        bufp->chgQData(oldp+313,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits),64);
        bufp->chgQData(oldp+315,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses),64);
        bufp->chgQData(oldp+317,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
        bufp->chgQData(oldp+319,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions),64);
        bufp->chgQData(oldp+321,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions),64);
        bufp->chgBit(oldp+323,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev));
        bufp->chgBit(oldp+324,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev));
        bufp->chgBit(oldp+325,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev));
        bufp->chgDouble(oldp+326,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
        bufp->chgDouble(oldp+328,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
        bufp->chgDouble(oldp+330,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
        bufp->chgDouble(oldp+332,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    }
    bufp->chgBit(oldp+334,(vlSelf->performanceTB__DOT__clk));
    bufp->chgBit(oldp+335,(vlSelf->performanceTB__DOT__rst));
    bufp->chgIData(oldp+336,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->chgIData(oldp+337,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
}

void VperformanceTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_cleanup\n"); );
    // Init
    VperformanceTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VperformanceTB___024root*>(voidSelf);
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
