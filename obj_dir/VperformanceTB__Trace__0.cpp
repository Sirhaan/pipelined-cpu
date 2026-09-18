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
        bufp->chgIData(oldp+16,(vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
        bufp->chgBit(oldp+17,(vlSelf->performanceTB__DOT__break_detected));
        bufp->chgCData(oldp+18,(vlSelf->performanceTB__DOT__special_pipe),3);
        bufp->chgBit(oldp+19,((0x100073U == vlSelf->performanceTB__DOT__dut__DOT__instID)));
        bufp->chgIData(oldp+20,(vlSelf->performanceTB__DOT__cycle_count),32);
        bufp->chgIData(oldp+21,(vlSelf->performanceTB__DOT__instr_count),32);
        bufp->chgIData(oldp+22,(vlSelf->performanceTB__DOT__dut__DOT__ic_inst),32);
        bufp->chgBit(oldp+23,(vlSelf->performanceTB__DOT__dut__DOT__ic_ready));
        bufp->chgBit(oldp+24,((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid
                               [(0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                          >> 2U))] 
                               & (vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag
                                  [(0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                             >> 2U))] 
                                  == (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                      >> 8U)))));
        bufp->chgIData(oldp+25,(vlSelf->performanceTB__DOT__dut__DOT__predict_target),32);
        bufp->chgIData(oldp+26,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+27,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                                [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+28,(vlSelf->performanceTB__DOT__dut__DOT__immID),32);
        bufp->chgIData(oldp+29,(vlSelf->performanceTB__DOT__dut__DOT__instID),32);
        bufp->chgIData(oldp+30,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID),32);
        bufp->chgIData(oldp+31,(vlSelf->performanceTB__DOT__dut__DOT__pcID),32);
        bufp->chgIData(oldp+32,((vlSelf->performanceTB__DOT__dut__DOT__pcID 
                                 + vlSelf->performanceTB__DOT__dut__DOT__immID)),32);
        bufp->chgCData(oldp+33,(vlSelf->performanceTB__DOT__dut__DOT__WBID),2);
        bufp->chgCData(oldp+34,(vlSelf->performanceTB__DOT__dut__DOT__MEMID),3);
        bufp->chgCData(oldp+35,(vlSelf->performanceTB__DOT__dut__DOT__EXID),4);
        bufp->chgBit(oldp+36,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_ID));
        bufp->chgIData(oldp+37,(vlSelf->performanceTB__DOT__dut__DOT__predict_target_ID),32);
        bufp->chgCData(oldp+38,(vlSelf->performanceTB__DOT__dut__DOT__WBEX),2);
        bufp->chgCData(oldp+39,(vlSelf->performanceTB__DOT__dut__DOT__EXEX),4);
        bufp->chgIData(oldp+40,(vlSelf->performanceTB__DOT__dut__DOT__regData1EX),32);
        bufp->chgIData(oldp+41,(vlSelf->performanceTB__DOT__dut__DOT__regData2EX),32);
        bufp->chgIData(oldp+42,(vlSelf->performanceTB__DOT__dut__DOT__immEX),32);
        bufp->chgCData(oldp+43,(vlSelf->performanceTB__DOT__dut__DOT__Rs1EX),5);
        bufp->chgCData(oldp+44,(vlSelf->performanceTB__DOT__dut__DOT__Rs2EX),5);
        bufp->chgCData(oldp+45,(vlSelf->performanceTB__DOT__dut__DOT__RdEX),5);
        bufp->chgCData(oldp+46,(vlSelf->performanceTB__DOT__dut__DOT__FuncEX),4);
        bufp->chgIData(oldp+47,(vlSelf->performanceTB__DOT__dut__DOT__pcEX),32);
        bufp->chgIData(oldp+48,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX),32);
        bufp->chgIData(oldp+49,(vlSelf->performanceTB__DOT__dut__DOT__instEX),32);
        bufp->chgCData(oldp+50,(vlSelf->performanceTB__DOT__dut__DOT__forwardA),2);
        bufp->chgCData(oldp+51,(vlSelf->performanceTB__DOT__dut__DOT__forwardB),2);
        bufp->chgIData(oldp+52,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                                  ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
                                  : ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                                      ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                                      : vlSelf->performanceTB__DOT__dut__DOT__regData1EX))),32);
        bufp->chgIData(oldp+53,(vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd),32);
        bufp->chgIData(oldp+54,(vlSelf->performanceTB__DOT__dut__DOT__AluInA),32);
        bufp->chgIData(oldp+55,(vlSelf->performanceTB__DOT__dut__DOT__AluInB),32);
        bufp->chgIData(oldp+56,(vlSelf->performanceTB__DOT__dut__DOT__AluResultEX),32);
        bufp->chgCData(oldp+57,(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX),4);
        bufp->chgIData(oldp+58,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX),32);
        bufp->chgBit(oldp+59,(((0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)) 
                               | (0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)))));
        bufp->chgBit(oldp+60,((0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))));
        bufp->chgBit(oldp+61,((0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))));
        bufp->chgIData(oldp+62,((0xfffffffeU & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)),32);
        bufp->chgCData(oldp+63,(vlSelf->performanceTB__DOT__dut__DOT__funct3EX),3);
        bufp->chgBit(oldp+64,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX));
        bufp->chgIData(oldp+65,(vlSelf->performanceTB__DOT__dut__DOT__predict_target_EX),32);
        bufp->chgCData(oldp+66,(vlSelf->performanceTB__DOT__dut__DOT__cpu_ben),4);
        bufp->chgIData(oldp+67,(vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata),32);
        bufp->chgCData(oldp+68,(vlSelf->performanceTB__DOT__dut__DOT__WBMEM),2);
        bufp->chgCData(oldp+69,(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM),3);
        bufp->chgIData(oldp+70,(vlSelf->performanceTB__DOT__dut__DOT__AluResMEM),32);
        bufp->chgIData(oldp+71,(vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM),32);
        bufp->chgCData(oldp+72,(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM),5);
        bufp->chgIData(oldp+73,(vlSelf->performanceTB__DOT__dut__DOT__pcMEM),32);
        bufp->chgIData(oldp+74,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM),32);
        bufp->chgBit(oldp+75,(vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM));
        bufp->chgIData(oldp+76,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetMEM),32);
        bufp->chgCData(oldp+77,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshotMEM),6);
        bufp->chgIData(oldp+78,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata),32);
        bufp->chgBit(oldp+79,(vlSelf->performanceTB__DOT__dut__DOT__dc_ready));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                     >> 1U))));
        bufp->chgBit(oldp+81,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgCData(oldp+82,(vlSelf->performanceTB__DOT__dut__DOT__funct3MEM),3);
        bufp->chgCData(oldp+83,(vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM),2);
        bufp->chgCData(oldp+84,(vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM),4);
        bufp->chgIData(oldp+85,(vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM),32);
        bufp->chgCData(oldp+86,(vlSelf->performanceTB__DOT__dut__DOT__WBWB),2);
        bufp->chgIData(oldp+87,(vlSelf->performanceTB__DOT__dut__DOT__AluResWB),32);
        bufp->chgIData(oldp+88,(vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB),32);
        bufp->chgCData(oldp+89,(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),5);
        bufp->chgIData(oldp+90,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB),32);
        bufp->chgBit(oldp+91,(vlSelf->performanceTB__DOT__dut__DOT__isJumpWB));
        bufp->chgIData(oldp+92,(vlSelf->performanceTB__DOT__dut__DOT__finalResultWB),32);
        bufp->chgIData(oldp+93,(vlSelf->performanceTB__DOT__dut__DOT__loadResult),32);
        bufp->chgCData(oldp+94,(vlSelf->performanceTB__DOT__dut__DOT__funct3WB),3);
        bufp->chgCData(oldp+95,(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB),2);
        bufp->chgBit(oldp+96,(vlSelf->performanceTB__DOT__dut__DOT__dc_done));
        bufp->chgIData(oldp+97,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr),32);
        bufp->chgIData(oldp+98,(vlSelf->performanceTB__DOT__dut__DOT__umem_rdata),32);
        bufp->chgBit(oldp+99,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read));
        bufp->chgBit(oldp+100,(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready));
        bufp->chgIData(oldp+101,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
        bufp->chgIData(oldp+102,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
        bufp->chgBit(oldp+103,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
        bufp->chgBit(oldp+104,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
        bufp->chgBit(oldp+105,(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready));
        bufp->chgBit(oldp+106,(vlSelf->performanceTB__DOT__dut__DOT__umem_read));
        bufp->chgBit(oldp+107,(vlSelf->performanceTB__DOT__dut__DOT__umem_write));
        bufp->chgBit(oldp+108,(vlSelf->performanceTB__DOT__dut__DOT__umem_ready));
        bufp->chgIData(oldp+109,(vlSelf->performanceTB__DOT__dut__DOT__umem_addr),32);
        bufp->chgIData(oldp+110,(vlSelf->performanceTB__DOT__dut__DOT__umem_wdata),32);
        bufp->chgCData(oldp+111,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_ID),6);
        bufp->chgCData(oldp+112,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_EX),6);
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                                      >> 1U))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
                                | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready))));
        bufp->chgIData(oldp+115,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch),32);
        bufp->chgCData(oldp+116,((7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+117,((0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)));
        bufp->chgBit(oldp+118,((((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX)) 
                                 | (1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))) 
                                & (((vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                     >> 0x1fU) == (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux 
                                                   >> 0x1fU)) 
                                   & ((1U & (IData)(
                                                    (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext 
                                                     >> 0x1fU))) 
                                      != (vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                          >> 0x1fU))))));
        bufp->chgIData(oldp+119,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux),32);
        bufp->chgQData(oldp+120,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext),33);
        bufp->chgCData(oldp+122,((0x1fU & vlSelf->performanceTB__DOT__dut__DOT__AluInB)),5);
        bufp->chgCData(oldp+123,((0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                           >> 2U))),6);
        bufp->chgIData(oldp+124,((vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                  >> 8U)),24);
        bufp->chgCData(oldp+125,((0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instID)),7);
        bufp->chgBit(oldp+126,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
        bufp->chgBit(oldp+127,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
        bufp->chgIData(oldp+128,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][0U]),25);
        bufp->chgIData(oldp+129,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][1U]),25);
        bufp->chgIData(oldp+130,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][2U]),25);
        bufp->chgIData(oldp+131,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][3U]),25);
        bufp->chgIData(oldp+132,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][4U]),25);
        bufp->chgIData(oldp+133,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][5U]),25);
        bufp->chgIData(oldp+134,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][6U]),25);
        bufp->chgIData(oldp+135,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [0U][7U]),25);
        bufp->chgIData(oldp+136,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][0U]),25);
        bufp->chgIData(oldp+137,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][1U]),25);
        bufp->chgIData(oldp+138,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][2U]),25);
        bufp->chgIData(oldp+139,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][3U]),25);
        bufp->chgIData(oldp+140,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][4U]),25);
        bufp->chgIData(oldp+141,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][5U]),25);
        bufp->chgIData(oldp+142,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][6U]),25);
        bufp->chgIData(oldp+143,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                                 [1U][7U]),25);
        bufp->chgBit(oldp+144,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][0U]));
        bufp->chgBit(oldp+145,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][1U]));
        bufp->chgBit(oldp+146,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][2U]));
        bufp->chgBit(oldp+147,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][3U]));
        bufp->chgBit(oldp+148,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][4U]));
        bufp->chgBit(oldp+149,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][5U]));
        bufp->chgBit(oldp+150,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][6U]));
        bufp->chgBit(oldp+151,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [0U][7U]));
        bufp->chgBit(oldp+152,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][0U]));
        bufp->chgBit(oldp+153,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][1U]));
        bufp->chgBit(oldp+154,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][2U]));
        bufp->chgBit(oldp+155,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][3U]));
        bufp->chgBit(oldp+156,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][4U]));
        bufp->chgBit(oldp+157,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][5U]));
        bufp->chgBit(oldp+158,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][6U]));
        bufp->chgBit(oldp+159,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                               [1U][7U]));
        bufp->chgBit(oldp+160,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][0U]));
        bufp->chgBit(oldp+161,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][1U]));
        bufp->chgBit(oldp+162,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][2U]));
        bufp->chgBit(oldp+163,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][3U]));
        bufp->chgBit(oldp+164,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][4U]));
        bufp->chgBit(oldp+165,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][5U]));
        bufp->chgBit(oldp+166,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][6U]));
        bufp->chgBit(oldp+167,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [0U][7U]));
        bufp->chgBit(oldp+168,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][0U]));
        bufp->chgBit(oldp+169,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][1U]));
        bufp->chgBit(oldp+170,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][2U]));
        bufp->chgBit(oldp+171,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][3U]));
        bufp->chgBit(oldp+172,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][4U]));
        bufp->chgBit(oldp+173,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][5U]));
        bufp->chgBit(oldp+174,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][6U]));
        bufp->chgBit(oldp+175,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                               [1U][7U]));
        bufp->chgIData(oldp+176,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+177,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
        bufp->chgBit(oldp+178,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
        bufp->chgBit(oldp+179,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
        bufp->chgIData(oldp+180,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),25);
        bufp->chgCData(oldp+181,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),3);
        bufp->chgCData(oldp+182,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset),2);
        bufp->chgBit(oldp+183,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
        bufp->chgCData(oldp+184,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg),4);
        bufp->chgCData(oldp+185,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word),2);
        bufp->chgCData(oldp+186,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
        bufp->chgCData(oldp+187,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
        bufp->chgIData(oldp+188,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+189,((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                  >> 7U)),25);
        bufp->chgCData(oldp+190,((7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                        >> 4U))),3);
        bufp->chgCData(oldp+191,((3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),2);
        bufp->chgCData(oldp+192,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+193,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+194,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgBit(oldp+195,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgCData(oldp+196,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
        bufp->chgBit(oldp+197,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
        bufp->chgBit(oldp+198,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
        bufp->chgCData(oldp+199,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
        bufp->chgCData(oldp+200,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
        bufp->chgCData(oldp+201,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
        bufp->chgCData(oldp+202,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
        bufp->chgCData(oldp+203,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
        bufp->chgCData(oldp+204,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
        bufp->chgCData(oldp+205,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
        bufp->chgCData(oldp+206,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
        bufp->chgCData(oldp+207,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
        bufp->chgCData(oldp+208,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
        bufp->chgCData(oldp+209,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
        bufp->chgCData(oldp+210,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
        bufp->chgCData(oldp+211,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
        bufp->chgCData(oldp+212,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
        bufp->chgCData(oldp+213,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
        bufp->chgCData(oldp+214,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
        bufp->chgIData(oldp+215,(((IData)(1U) + ((1U 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (7U 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 4U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+216,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+217,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgIData(oldp+218,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__b),32);
        bufp->chgIData(oldp+219,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk3__DOT__b),32);
        bufp->chgIData(oldp+220,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][0U]),25);
        bufp->chgIData(oldp+221,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][1U]),25);
        bufp->chgIData(oldp+222,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][2U]),25);
        bufp->chgIData(oldp+223,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][3U]),25);
        bufp->chgIData(oldp+224,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][4U]),25);
        bufp->chgIData(oldp+225,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][5U]),25);
        bufp->chgIData(oldp+226,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][6U]),25);
        bufp->chgIData(oldp+227,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [0U][7U]),25);
        bufp->chgIData(oldp+228,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][0U]),25);
        bufp->chgIData(oldp+229,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][1U]),25);
        bufp->chgIData(oldp+230,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][2U]),25);
        bufp->chgIData(oldp+231,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][3U]),25);
        bufp->chgIData(oldp+232,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][4U]),25);
        bufp->chgIData(oldp+233,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][5U]),25);
        bufp->chgIData(oldp+234,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][6U]),25);
        bufp->chgIData(oldp+235,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                                 [1U][7U]),25);
        bufp->chgBit(oldp+236,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                                 ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                                 : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))));
        bufp->chgIData(oldp+237,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
        bufp->chgIData(oldp+238,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),25);
        bufp->chgCData(oldp+239,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),3);
        bufp->chgCData(oldp+240,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset),2);
        bufp->chgBit(oldp+241,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
        bufp->chgCData(oldp+242,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word),2);
        bufp->chgCData(oldp+243,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
        bufp->chgIData(oldp+244,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
        bufp->chgIData(oldp+245,((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                  >> 7U)),25);
        bufp->chgCData(oldp+246,((7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 4U))),3);
        bufp->chgCData(oldp+247,((3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),2);
        bufp->chgCData(oldp+248,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
        bufp->chgBit(oldp+249,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
        bufp->chgBit(oldp+250,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
        bufp->chgCData(oldp+251,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
        bufp->chgBit(oldp+252,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
        bufp->chgBit(oldp+253,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
        bufp->chgCData(oldp+254,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
        bufp->chgCData(oldp+255,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
        bufp->chgCData(oldp+256,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
        bufp->chgCData(oldp+257,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
        bufp->chgCData(oldp+258,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
        bufp->chgCData(oldp+259,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
        bufp->chgCData(oldp+260,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
        bufp->chgCData(oldp+261,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
        bufp->chgCData(oldp+262,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
        bufp->chgCData(oldp+263,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
        bufp->chgCData(oldp+264,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
        bufp->chgCData(oldp+265,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
        bufp->chgCData(oldp+266,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
        bufp->chgCData(oldp+267,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
        bufp->chgCData(oldp+268,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
        bufp->chgCData(oldp+269,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
        bufp->chgIData(oldp+270,(((IData)(1U) + ((1U 
                                                  & vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                                  [
                                                  (7U 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                      >> 4U))])
                                                  ? 1U
                                                  : 0U))),32);
        bufp->chgIData(oldp+271,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
        bufp->chgIData(oldp+272,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
        bufp->chgCData(oldp+273,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
        bufp->chgCData(oldp+274,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
        bufp->chgCData(oldp+275,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+276,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+277,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
        bufp->chgIData(oldp+278,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
        bufp->chgIData(oldp+279,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
        bufp->chgIData(oldp+280,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
        bufp->chgIData(oldp+281,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
        bufp->chgIData(oldp+282,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
        bufp->chgIData(oldp+283,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
        bufp->chgIData(oldp+284,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
        bufp->chgIData(oldp+285,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
        bufp->chgIData(oldp+286,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
        bufp->chgIData(oldp+287,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
        bufp->chgIData(oldp+288,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
        bufp->chgIData(oldp+289,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
        bufp->chgIData(oldp+290,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
        bufp->chgIData(oldp+291,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
        bufp->chgIData(oldp+292,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
        bufp->chgIData(oldp+293,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
        bufp->chgIData(oldp+294,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
        bufp->chgIData(oldp+295,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
        bufp->chgIData(oldp+296,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
        bufp->chgIData(oldp+297,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
        bufp->chgIData(oldp+298,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
        bufp->chgIData(oldp+299,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
        bufp->chgIData(oldp+300,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
        bufp->chgIData(oldp+301,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
        bufp->chgIData(oldp+302,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
        bufp->chgIData(oldp+303,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
        bufp->chgIData(oldp+304,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
        bufp->chgIData(oldp+305,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
        bufp->chgIData(oldp+306,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
        bufp->chgIData(oldp+307,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
        bufp->chgIData(oldp+308,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
        bufp->chgIData(oldp+309,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
        bufp->chgCData(oldp+310,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
        bufp->chgBit(oldp+311,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
        bufp->chgBit(oldp+312,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                      >> 1U))));
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                      >> 1U))));
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                      >> 2U))));
        bufp->chgBit(oldp+316,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
        bufp->chgBit(oldp+317,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                 >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                            >> 1U) 
                                           & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0)))));
        bufp->chgBit(oldp+318,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                 >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                            >> 1U) 
                                           & ((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
                                              & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                      >> 0xfU))) 
                                                 | ((IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                                        >> 0x14U)))))))));
        bufp->chgBit(oldp+319,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))));
        bufp->chgBit(oldp+320,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                      >> 2U))));
        bufp->chgQData(oldp+321,(vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles),64);
        bufp->chgQData(oldp+323,(vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired),64);
        bufp->chgQData(oldp+325,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits),64);
        bufp->chgQData(oldp+327,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses),64);
        bufp->chgQData(oldp+329,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
        bufp->chgQData(oldp+331,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits),64);
        bufp->chgQData(oldp+333,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses),64);
        bufp->chgQData(oldp+335,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
        bufp->chgQData(oldp+337,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions),64);
        bufp->chgQData(oldp+339,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions),64);
        bufp->chgBit(oldp+341,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev));
        bufp->chgBit(oldp+342,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev));
        bufp->chgBit(oldp+343,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev));
        bufp->chgDouble(oldp+344,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
        bufp->chgDouble(oldp+346,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
        bufp->chgDouble(oldp+348,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
        bufp->chgDouble(oldp+350,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+352,(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
        bufp->chgBit(oldp+353,(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
        bufp->chgBit(oldp+354,(vlSelf->performanceTB__DOT__dut__DOT__pcWrite));
        bufp->chgBit(oldp+355,(vlSelf->performanceTB__DOT__dut__DOT__hazardSel));
        bufp->chgBit(oldp+356,(vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite));
        bufp->chgSData(oldp+357,(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID),9);
        bufp->chgCData(oldp+358,(vlSelf->performanceTB__DOT__dut__DOT__MEMEX),3);
        bufp->chgBit(oldp+359,(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX));
        bufp->chgBit(oldp+360,(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX));
        bufp->chgBit(oldp+361,(vlSelf->performanceTB__DOT__dut__DOT__branch_taken));
        bufp->chgBit(oldp+362,(vlSelf->performanceTB__DOT__dut__DOT__mispredict));
        bufp->chgBit(oldp+363,(vlSelf->performanceTB__DOT__dut__DOT__branch_takenMEM));
        bufp->chgBit(oldp+364,(vlSelf->performanceTB__DOT__dut__DOT__stall_WB));
        bufp->chgBit(oldp+365,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                      >> 2U))));
        bufp->chgCData(oldp+366,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__update_index),6);
        bufp->chgBit(oldp+367,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                      >> 1U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+368,(vlSelf->performanceTB__DOT__dut__DOT__nextPc),32);
        bufp->chgIData(oldp+369,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF),32);
        bufp->chgBit(oldp+370,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken));
        bufp->chgCData(oldp+371,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__current_state),2);
        bufp->chgCData(oldp+372,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__next_state),2);
    }
    bufp->chgBit(oldp+373,(vlSelf->performanceTB__DOT__clk));
    bufp->chgBit(oldp+374,(vlSelf->performanceTB__DOT__rst));
    bufp->chgCData(oldp+375,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__GHR),6);
    bufp->chgCData(oldp+376,((0x3fU & ((vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                        >> 2U) ^ (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__GHR)))),6);
    bufp->chgIData(oldp+377,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+378,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->chgIData(oldp+379,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
    bufp->chgBit(oldp+380,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                             >> 1U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0))));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
