// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VperformanceTB__Syms.h"


VL_ATTR_COLD void VperformanceTB___024root__trace_init_sub__TOP__pkg__0(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VperformanceTB___024root__trace_init_sub__TOP__0(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    VperformanceTB___024root__trace_init_sub__TOP__pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("performanceTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"perf_print",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"debug_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"debug_reg28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"break_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"special_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"is_special_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"ic_stall_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"dc_stall_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+22,0,"instr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"ICACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"DCACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"ICACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"DCACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"debug_reg28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"pcCurrent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"nextPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"pcPlus4IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"ic_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"pcWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"pcWrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,0,"hazardSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"IFIDwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"IFIDwrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"regData1ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"regData2ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"immID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"instID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"pcPlus4ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pcID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"branchTargetID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"WBID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"MEMID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"EXID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"finalCRLTID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+37,0,"predict_taken_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"predict_target_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"WBEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"MEMEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"EXEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"regData1EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"regData2EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"immEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"Rs1EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"Rs2EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"RdEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"FuncEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"pcEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"pcPlus4EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"instEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"forwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"forwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"AluMuxAout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"AluMuxBFwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"AluInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"AluInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"AluResultEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"AluCtrlEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"WriteDataEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"WriteRegEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"branchTargetEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+360,0,"pcSrcEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"IFflushEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"IDflushEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"isJumpEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"isJALEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"isJALREX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"jalrTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"funct3EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"predict_taken_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"predict_target_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"cpu_ben",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"shiftedWdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"WBMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"MEMMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"AluResMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"writeDataMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"writeRegMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"pcMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"pcPlus4MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"isJumpMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"branchTargetMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+364,0,"branch_takenMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"ghr_snapshotMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+79,0,"dc_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"dc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"mem_read_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"funct3MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+84,0,"byteOffMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"cpu_benMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"shiftedWdataMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"WBWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"AluResWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"MEMDataWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"writeRegWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"pcPlus4WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"isJumpWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"finalResultWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"loadResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"funct3WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"byteOffWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+353,0,"ic_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"dc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"dc_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"ic_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"ic_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"ic_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ic_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"dc_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"dc_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"dc_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"dc_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"dc_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"dc_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"umem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"umem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"umem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"umem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"umem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"umem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"ghr_snapshot_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"ghr_snapshot_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+114,0,"regWrite_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dc_ready_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"dc_rdata_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+365,0,"stall_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALUDec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"Func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"AluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"AluControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALUUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"AluControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"B_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+121,0,"sum_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+123,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("BranchPredictor_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+364,0,"actual_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"actual_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"update_ghr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+376,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+371,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bht", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+364,0,"actual_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"update_ghr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+376,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+371,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"GHR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+377,0,"read_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+367,0,"update_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+372,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+373,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("btb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"actual_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+125,0,"pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"OpCode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"wb_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"ex_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"mem_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+391,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+392,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+393,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+394,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+395,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+396,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+397,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+398,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+399,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("D_CACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"cpu_ben",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"dcache_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"dcache_req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"dcache_req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"dcache_req_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dcache_req_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"dcache_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"cpu_ben",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+402,0,"BYTES_PER_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"WORDS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"LAST_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+131,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+132,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+133,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+134,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+135,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+136,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+137,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+138,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+139,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+140,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+142,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+143,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+144,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+145,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+153,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dirtyBits", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+161,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+169,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+177,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+179,0,"is_read_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"is_write_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+182,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+183,0,"fill_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+184,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+185,0,"cpu_ben_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"fill_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+187,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+188,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+189,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+191,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+192,0,"current_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+197,0,"valid_ways_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+198,0,"lru_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"lru_access_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+191,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+198,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+196,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+408,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tree", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tree_next", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+208+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+408,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+217,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ICACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"m_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"m_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"m_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"m_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"BYTES_PER_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,0,"WORDS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"LAST_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+221,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+222,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+223,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+224,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+225,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+226,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+227,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+228,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+229,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+230,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+231,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+232,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+233,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+234,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+235,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+236,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+9,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+237,0,"lru_access_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+238,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+240,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+241,0,"fill_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+243,0,"fill_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+244,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+245,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+247,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+248,0,"current_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+249,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+250,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+252,0,"valid_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+253,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+254,0,"lru_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+237,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+254,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+253,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+408,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tree", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+255+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tree_next", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+271,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+408,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MemoryArbitrator_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"ic_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"ic_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"ic_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"ic_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"dc_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"dc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"dc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"dc_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"dc_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"umem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"umem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"umem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"umem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"umem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"umem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+275,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("Reg_Files", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+277,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ReadData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"ReadData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"debug_reg28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+278+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+310,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("UnifiedMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"umem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"umem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"umem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"umem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"umem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"umem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+312,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forward_unit_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"rs1_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"rs2_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rd_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rd_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+313,0,"regwrite_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"regwrite_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"memRead_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hdu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"IF_ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+277,0,"IF_ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+315,0,"ID_EX_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"EX_MEM_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MEM_WB_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"ID_EX_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"isBranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"mem_read_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"mem_write_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"forwardA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"forwardB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+355,0,"pcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"IF_ID_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"hazardSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"ic_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"dc_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"branch_hazard_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"branch_hazard_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"I_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+393,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+397,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+394,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+395,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+398,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+399,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+396,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"PCInput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+355,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"PCaddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"PCRegister",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("perfCounter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"ic_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"dc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"reg_write_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"write_reg_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"mem_read_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_write_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"is_branchID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"perf_print",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+322,0,"total_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+324,0,"instruction_retired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+326,0,"ic_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+328,0,"ic_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+330,0,"ic_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+332,0,"dc_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+334,0,"dc_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+336,0,"dc_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+338,0,"branch_instructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+340,0,"branch_mispredictions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+342,0,"ic_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"dc_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"branch_taken_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+345,0,"CPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+347,0,"ic_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+349,0,"dc_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+351,0,"branch_mispredict_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VperformanceTB___024root__trace_init_sub__TOP__pkg__0(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_init_sub__TOP__pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+412,0,"ICACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+409,0,"ICACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+413,0,"ICACHE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+414,0,"ICACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+412,0,"DCACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+409,0,"DCACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+413,0,"DCACHE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+414,0,"DCACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+413,0,"MEM_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+415,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+416,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+416,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+416,0,"REG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+409,0,"RESET_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+417,0,"BRANCH_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+418,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+419,0,"CLK_HALF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+420,0,"RESET_TIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+421,0,"SIM_TIMEOUT_PERF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+421,0,"SIM_TIMEOUT_FUNC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+422,0,"OPCODE_SPECIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+423,0,"FUNCT_BREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+424,0,"FUNCT_SYSCALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+425,0,"BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+425,0,"BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_init_top(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_init_top\n"); );
    // Body
    VperformanceTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VperformanceTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VperformanceTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VperformanceTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VperformanceTB___024root__trace_register(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VperformanceTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VperformanceTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VperformanceTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VperformanceTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_const_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VperformanceTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_const_0\n"); );
    // Init
    VperformanceTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VperformanceTB___024root*>(voidSelf);
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VperformanceTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_const_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+382,(vlSelf->performanceTB__DOT__perf_print));
    bufp->fullIData(oldp+383,(vlSelf->performanceTB__DOT__debug_reg28),32);
    bufp->fullIData(oldp+384,(0x20U),32);
    bufp->fullIData(oldp+385,(0xaU),32);
    bufp->fullIData(oldp+386,(0x100U),32);
    bufp->fullIData(oldp+387,(2U),32);
    bufp->fullIData(oldp+388,(0x40U),32);
    bufp->fullIData(oldp+389,(6U),32);
    bufp->fullIData(oldp+390,(0x18U),32);
    bufp->fullCData(oldp+391,(0x33U),7);
    bufp->fullCData(oldp+392,(0x13U),7);
    bufp->fullCData(oldp+393,(3U),7);
    bufp->fullCData(oldp+394,(0x23U),7);
    bufp->fullCData(oldp+395,(0x63U),7);
    bufp->fullCData(oldp+396,(0x6fU),7);
    bufp->fullCData(oldp+397,(0x67U),7);
    bufp->fullCData(oldp+398,(0x37U),7);
    bufp->fullCData(oldp+399,(0x17U),7);
    bufp->fullIData(oldp+400,(0x14U),32);
    bufp->fullIData(oldp+401,(0x10U),32);
    bufp->fullIData(oldp+402,(4U),32);
    bufp->fullIData(oldp+403,(8U),32);
    bufp->fullIData(oldp+404,(3U),32);
    bufp->fullIData(oldp+405,(0x19U),32);
    bufp->fullIData(oldp+406,(1U),32);
    bufp->fullCData(oldp+407,(3U),2);
    bufp->fullIData(oldp+408,(1U),32);
    bufp->fullIData(oldp+409,(2U),32);
    bufp->fullIData(oldp+410,(2U),32);
    bufp->fullBit(oldp+411,(1U));
    bufp->fullIData(oldp+412,(0x100U),32);
    bufp->fullIData(oldp+413,(0x14U),32);
    bufp->fullIData(oldp+414,(0x10U),32);
    bufp->fullIData(oldp+415,(0xaU),32);
    bufp->fullIData(oldp+416,(0x20U),32);
    bufp->fullIData(oldp+417,(3U),32);
    bufp->fullIData(oldp+418,(0xeU),32);
    bufp->fullIData(oldp+419,(7U),32);
    bufp->fullIData(oldp+420,(0x2aU),32);
    bufp->fullIData(oldp+421,(0x7a120U),32);
    bufp->fullCData(oldp+422,(0U),6);
    bufp->fullCData(oldp+423,(0xdU),6);
    bufp->fullCData(oldp+424,(0xcU),6);
    bufp->fullIData(oldp+425,(0x40U),32);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_full_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VperformanceTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_full_0\n"); );
    // Init
    VperformanceTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VperformanceTB___024root*>(voidSelf);
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VperformanceTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VperformanceTB___024root__trace_full_0_sub_0(VperformanceTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][0U]));
    bufp->fullBit(oldp+2,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][1U]));
    bufp->fullBit(oldp+3,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][2U]));
    bufp->fullBit(oldp+4,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][3U]));
    bufp->fullBit(oldp+5,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][4U]));
    bufp->fullBit(oldp+6,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][5U]));
    bufp->fullBit(oldp+7,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][6U]));
    bufp->fullBit(oldp+8,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [0U][7U]));
    bufp->fullBit(oldp+9,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                          [1U][0U]));
    bufp->fullBit(oldp+10,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][1U]));
    bufp->fullBit(oldp+11,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][2U]));
    bufp->fullBit(oldp+12,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][3U]));
    bufp->fullBit(oldp+13,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][4U]));
    bufp->fullBit(oldp+14,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][5U]));
    bufp->fullBit(oldp+15,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][6U]));
    bufp->fullBit(oldp+16,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid
                           [1U][7U]));
    bufp->fullIData(oldp+17,(vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
    bufp->fullBit(oldp+18,(vlSelf->performanceTB__DOT__break_detected));
    bufp->fullCData(oldp+19,(vlSelf->performanceTB__DOT__special_pipe),3);
    bufp->fullBit(oldp+20,((0x100073U == vlSelf->performanceTB__DOT__dut__DOT__instID)));
    bufp->fullIData(oldp+21,(vlSelf->performanceTB__DOT__cycle_count),32);
    bufp->fullIData(oldp+22,(vlSelf->performanceTB__DOT__instr_count),32);
    bufp->fullIData(oldp+23,(vlSelf->performanceTB__DOT__dut__DOT__ic_inst),32);
    bufp->fullBit(oldp+24,(vlSelf->performanceTB__DOT__dut__DOT__ic_ready));
    bufp->fullBit(oldp+25,((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__valid
                            [(0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                       >> 2U))] & (
                                                   vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__btb__DOT__tag
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                                       >> 2U))] 
                                                   == 
                                                   (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                                    >> 8U)))));
    bufp->fullIData(oldp+26,(vlSelf->performanceTB__DOT__dut__DOT__predict_target),32);
    bufp->fullIData(oldp+27,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                             [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+28,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register
                             [(0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+29,(vlSelf->performanceTB__DOT__dut__DOT__immID),32);
    bufp->fullIData(oldp+30,(vlSelf->performanceTB__DOT__dut__DOT__instID),32);
    bufp->fullIData(oldp+31,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4ID),32);
    bufp->fullIData(oldp+32,(vlSelf->performanceTB__DOT__dut__DOT__pcID),32);
    bufp->fullIData(oldp+33,((vlSelf->performanceTB__DOT__dut__DOT__pcID 
                              + vlSelf->performanceTB__DOT__dut__DOT__immID)),32);
    bufp->fullCData(oldp+34,(vlSelf->performanceTB__DOT__dut__DOT__WBID),2);
    bufp->fullCData(oldp+35,(vlSelf->performanceTB__DOT__dut__DOT__MEMID),3);
    bufp->fullCData(oldp+36,(vlSelf->performanceTB__DOT__dut__DOT__EXID),4);
    bufp->fullBit(oldp+37,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_ID));
    bufp->fullIData(oldp+38,(vlSelf->performanceTB__DOT__dut__DOT__predict_target_ID),32);
    bufp->fullCData(oldp+39,(vlSelf->performanceTB__DOT__dut__DOT__WBEX),2);
    bufp->fullCData(oldp+40,(vlSelf->performanceTB__DOT__dut__DOT__EXEX),4);
    bufp->fullIData(oldp+41,(vlSelf->performanceTB__DOT__dut__DOT__regData1EX),32);
    bufp->fullIData(oldp+42,(vlSelf->performanceTB__DOT__dut__DOT__regData2EX),32);
    bufp->fullIData(oldp+43,(vlSelf->performanceTB__DOT__dut__DOT__immEX),32);
    bufp->fullCData(oldp+44,(vlSelf->performanceTB__DOT__dut__DOT__Rs1EX),5);
    bufp->fullCData(oldp+45,(vlSelf->performanceTB__DOT__dut__DOT__Rs2EX),5);
    bufp->fullCData(oldp+46,(vlSelf->performanceTB__DOT__dut__DOT__RdEX),5);
    bufp->fullCData(oldp+47,(vlSelf->performanceTB__DOT__dut__DOT__FuncEX),4);
    bufp->fullIData(oldp+48,(vlSelf->performanceTB__DOT__dut__DOT__pcEX),32);
    bufp->fullIData(oldp+49,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4EX),32);
    bufp->fullIData(oldp+50,(vlSelf->performanceTB__DOT__dut__DOT__instEX),32);
    bufp->fullCData(oldp+51,(vlSelf->performanceTB__DOT__dut__DOT__forwardA),2);
    bufp->fullCData(oldp+52,(vlSelf->performanceTB__DOT__dut__DOT__forwardB),2);
    bufp->fullIData(oldp+53,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                               ? vlSelf->performanceTB__DOT__dut__DOT__AluResMEM
                               : ((1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__forwardA))
                                   ? vlSelf->performanceTB__DOT__dut__DOT__finalResultWB
                                   : vlSelf->performanceTB__DOT__dut__DOT__regData1EX))),32);
    bufp->fullIData(oldp+54,(vlSelf->performanceTB__DOT__dut__DOT__AluMuxBFwd),32);
    bufp->fullIData(oldp+55,(vlSelf->performanceTB__DOT__dut__DOT__AluInA),32);
    bufp->fullIData(oldp+56,(vlSelf->performanceTB__DOT__dut__DOT__AluInB),32);
    bufp->fullIData(oldp+57,(vlSelf->performanceTB__DOT__dut__DOT__AluResultEX),32);
    bufp->fullCData(oldp+58,(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX),4);
    bufp->fullIData(oldp+59,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetEX),32);
    bufp->fullBit(oldp+60,(((0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)) 
                            | (0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX)))));
    bufp->fullBit(oldp+61,((0x6fU == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))));
    bufp->fullBit(oldp+62,((0x67U == (0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instEX))));
    bufp->fullIData(oldp+63,((0xfffffffeU & vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)),32);
    bufp->fullCData(oldp+64,(vlSelf->performanceTB__DOT__dut__DOT__funct3EX),3);
    bufp->fullBit(oldp+65,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken_EX));
    bufp->fullIData(oldp+66,(vlSelf->performanceTB__DOT__dut__DOT__predict_target_EX),32);
    bufp->fullCData(oldp+67,(vlSelf->performanceTB__DOT__dut__DOT__cpu_ben),4);
    bufp->fullIData(oldp+68,(vlSelf->performanceTB__DOT__dut__DOT__shiftedWdata),32);
    bufp->fullCData(oldp+69,(vlSelf->performanceTB__DOT__dut__DOT__WBMEM),2);
    bufp->fullCData(oldp+70,(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM),3);
    bufp->fullIData(oldp+71,(vlSelf->performanceTB__DOT__dut__DOT__AluResMEM),32);
    bufp->fullIData(oldp+72,(vlSelf->performanceTB__DOT__dut__DOT__writeDataMEM),32);
    bufp->fullCData(oldp+73,(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM),5);
    bufp->fullIData(oldp+74,(vlSelf->performanceTB__DOT__dut__DOT__pcMEM),32);
    bufp->fullIData(oldp+75,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM),32);
    bufp->fullBit(oldp+76,(vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM));
    bufp->fullIData(oldp+77,(vlSelf->performanceTB__DOT__dut__DOT__branchTargetMEM),32);
    bufp->fullCData(oldp+78,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshotMEM),6);
    bufp->fullIData(oldp+79,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata),32);
    bufp->fullBit(oldp+80,(vlSelf->performanceTB__DOT__dut__DOT__dc_ready));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                  >> 1U))));
    bufp->fullBit(oldp+82,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullCData(oldp+83,(vlSelf->performanceTB__DOT__dut__DOT__funct3MEM),3);
    bufp->fullCData(oldp+84,(vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM),2);
    bufp->fullCData(oldp+85,(vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM),4);
    bufp->fullIData(oldp+86,(vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM),32);
    bufp->fullCData(oldp+87,(vlSelf->performanceTB__DOT__dut__DOT__WBWB),2);
    bufp->fullIData(oldp+88,(vlSelf->performanceTB__DOT__dut__DOT__AluResWB),32);
    bufp->fullIData(oldp+89,(vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB),32);
    bufp->fullCData(oldp+90,(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),5);
    bufp->fullIData(oldp+91,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB),32);
    bufp->fullBit(oldp+92,(vlSelf->performanceTB__DOT__dut__DOT__isJumpWB));
    bufp->fullIData(oldp+93,(vlSelf->performanceTB__DOT__dut__DOT__finalResultWB),32);
    bufp->fullIData(oldp+94,(vlSelf->performanceTB__DOT__dut__DOT__loadResult),32);
    bufp->fullCData(oldp+95,(vlSelf->performanceTB__DOT__dut__DOT__funct3WB),3);
    bufp->fullCData(oldp+96,(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB),2);
    bufp->fullBit(oldp+97,(vlSelf->performanceTB__DOT__dut__DOT__dc_done));
    bufp->fullIData(oldp+98,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr),32);
    bufp->fullIData(oldp+99,(vlSelf->performanceTB__DOT__dut__DOT__umem_rdata),32);
    bufp->fullBit(oldp+100,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read));
    bufp->fullBit(oldp+101,(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready));
    bufp->fullIData(oldp+102,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
    bufp->fullIData(oldp+103,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
    bufp->fullBit(oldp+104,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
    bufp->fullBit(oldp+105,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
    bufp->fullBit(oldp+106,(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready));
    bufp->fullBit(oldp+107,(vlSelf->performanceTB__DOT__dut__DOT__umem_read));
    bufp->fullBit(oldp+108,(vlSelf->performanceTB__DOT__dut__DOT__umem_write));
    bufp->fullBit(oldp+109,(vlSelf->performanceTB__DOT__dut__DOT__umem_ready));
    bufp->fullIData(oldp+110,(vlSelf->performanceTB__DOT__dut__DOT__umem_addr),32);
    bufp->fullIData(oldp+111,(vlSelf->performanceTB__DOT__dut__DOT__umem_wdata),32);
    bufp->fullCData(oldp+112,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_ID),6);
    bufp->fullCData(oldp+113,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_EX),6);
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                                   >> 1U))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
                             | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready))));
    bufp->fullIData(oldp+116,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch),32);
    bufp->fullCData(oldp+117,((7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+118,((0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)));
    bufp->fullBit(oldp+119,((((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX)) 
                              | (1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))) 
                             & (((vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                  >> 0x1fU) == (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux 
                                                >> 0x1fU)) 
                                & ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext 
                                                  >> 0x1fU))) 
                                   != (vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                       >> 0x1fU))))));
    bufp->fullIData(oldp+120,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux),32);
    bufp->fullQData(oldp+121,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext),33);
    bufp->fullCData(oldp+123,((0x1fU & vlSelf->performanceTB__DOT__dut__DOT__AluInB)),5);
    bufp->fullCData(oldp+124,((0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                        >> 2U))),6);
    bufp->fullIData(oldp+125,((vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                               >> 8U)),24);
    bufp->fullCData(oldp+126,((0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instID)),7);
    bufp->fullBit(oldp+127,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
    bufp->fullBit(oldp+128,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
    bufp->fullIData(oldp+129,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][0U]),25);
    bufp->fullIData(oldp+130,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][1U]),25);
    bufp->fullIData(oldp+131,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][2U]),25);
    bufp->fullIData(oldp+132,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][3U]),25);
    bufp->fullIData(oldp+133,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][4U]),25);
    bufp->fullIData(oldp+134,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][5U]),25);
    bufp->fullIData(oldp+135,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][6U]),25);
    bufp->fullIData(oldp+136,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][7U]),25);
    bufp->fullIData(oldp+137,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][0U]),25);
    bufp->fullIData(oldp+138,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][1U]),25);
    bufp->fullIData(oldp+139,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][2U]),25);
    bufp->fullIData(oldp+140,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][3U]),25);
    bufp->fullIData(oldp+141,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][4U]),25);
    bufp->fullIData(oldp+142,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][5U]),25);
    bufp->fullIData(oldp+143,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][6U]),25);
    bufp->fullIData(oldp+144,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][7U]),25);
    bufp->fullBit(oldp+145,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+146,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+147,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+148,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+149,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][4U]));
    bufp->fullBit(oldp+150,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][5U]));
    bufp->fullBit(oldp+151,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][6U]));
    bufp->fullBit(oldp+152,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][7U]));
    bufp->fullBit(oldp+153,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+154,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+155,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+156,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+157,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][4U]));
    bufp->fullBit(oldp+158,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][5U]));
    bufp->fullBit(oldp+159,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][6U]));
    bufp->fullBit(oldp+160,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][7U]));
    bufp->fullBit(oldp+161,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][0U]));
    bufp->fullBit(oldp+162,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][1U]));
    bufp->fullBit(oldp+163,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][2U]));
    bufp->fullBit(oldp+164,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][3U]));
    bufp->fullBit(oldp+165,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][4U]));
    bufp->fullBit(oldp+166,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][5U]));
    bufp->fullBit(oldp+167,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][6U]));
    bufp->fullBit(oldp+168,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][7U]));
    bufp->fullBit(oldp+169,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][0U]));
    bufp->fullBit(oldp+170,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][1U]));
    bufp->fullBit(oldp+171,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][2U]));
    bufp->fullBit(oldp+172,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][3U]));
    bufp->fullBit(oldp+173,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][4U]));
    bufp->fullBit(oldp+174,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][5U]));
    bufp->fullBit(oldp+175,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][6U]));
    bufp->fullBit(oldp+176,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][7U]));
    bufp->fullIData(oldp+177,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+178,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
    bufp->fullBit(oldp+179,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
    bufp->fullBit(oldp+180,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
    bufp->fullIData(oldp+181,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),25);
    bufp->fullCData(oldp+182,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),3);
    bufp->fullCData(oldp+183,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset),2);
    bufp->fullBit(oldp+184,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
    bufp->fullCData(oldp+185,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg),4);
    bufp->fullCData(oldp+186,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word),2);
    bufp->fullCData(oldp+187,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
    bufp->fullCData(oldp+188,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
    bufp->fullIData(oldp+189,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+190,((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                               >> 7U)),25);
    bufp->fullCData(oldp+191,((7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                     >> 4U))),3);
    bufp->fullCData(oldp+192,((3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                     >> 2U))),2);
    bufp->fullCData(oldp+193,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+194,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+195,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullBit(oldp+196,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullCData(oldp+197,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
    bufp->fullBit(oldp+198,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
    bufp->fullBit(oldp+199,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
    bufp->fullCData(oldp+200,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
    bufp->fullCData(oldp+201,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
    bufp->fullCData(oldp+202,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
    bufp->fullCData(oldp+203,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
    bufp->fullCData(oldp+204,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
    bufp->fullCData(oldp+205,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
    bufp->fullCData(oldp+206,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
    bufp->fullCData(oldp+207,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
    bufp->fullCData(oldp+208,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
    bufp->fullCData(oldp+209,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
    bufp->fullCData(oldp+210,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
    bufp->fullCData(oldp+211,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
    bufp->fullCData(oldp+212,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
    bufp->fullCData(oldp+213,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
    bufp->fullCData(oldp+214,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
    bufp->fullCData(oldp+215,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
    bufp->fullIData(oldp+216,(((IData)(1U) + ((1U & 
                                               vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(7U 
                                                 & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 4U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+217,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+218,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullIData(oldp+219,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__b),32);
    bufp->fullIData(oldp+220,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+221,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][0U]),25);
    bufp->fullIData(oldp+222,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][1U]),25);
    bufp->fullIData(oldp+223,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][2U]),25);
    bufp->fullIData(oldp+224,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][3U]),25);
    bufp->fullIData(oldp+225,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][4U]),25);
    bufp->fullIData(oldp+226,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][5U]),25);
    bufp->fullIData(oldp+227,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][6U]),25);
    bufp->fullIData(oldp+228,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][7U]),25);
    bufp->fullIData(oldp+229,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][0U]),25);
    bufp->fullIData(oldp+230,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][1U]),25);
    bufp->fullIData(oldp+231,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][2U]),25);
    bufp->fullIData(oldp+232,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][3U]),25);
    bufp->fullIData(oldp+233,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][4U]),25);
    bufp->fullIData(oldp+234,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][5U]),25);
    bufp->fullIData(oldp+235,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][6U]),25);
    bufp->fullIData(oldp+236,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][7U]),25);
    bufp->fullBit(oldp+237,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                              ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                              : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))));
    bufp->fullIData(oldp+238,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+239,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),25);
    bufp->fullCData(oldp+240,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),3);
    bufp->fullCData(oldp+241,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset),2);
    bufp->fullBit(oldp+242,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
    bufp->fullCData(oldp+243,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word),2);
    bufp->fullCData(oldp+244,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
    bufp->fullIData(oldp+245,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+246,((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                               >> 7U)),25);
    bufp->fullCData(oldp+247,((7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                     >> 4U))),3);
    bufp->fullCData(oldp+248,((3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                     >> 2U))),2);
    bufp->fullCData(oldp+249,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+250,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+251,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullCData(oldp+252,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
    bufp->fullBit(oldp+253,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullBit(oldp+254,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
    bufp->fullCData(oldp+255,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
    bufp->fullCData(oldp+256,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
    bufp->fullCData(oldp+257,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
    bufp->fullCData(oldp+258,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
    bufp->fullCData(oldp+259,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
    bufp->fullCData(oldp+260,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
    bufp->fullCData(oldp+261,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
    bufp->fullCData(oldp+262,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
    bufp->fullCData(oldp+263,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
    bufp->fullCData(oldp+264,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
    bufp->fullCData(oldp+265,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
    bufp->fullCData(oldp+266,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
    bufp->fullCData(oldp+267,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
    bufp->fullCData(oldp+268,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
    bufp->fullCData(oldp+269,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
    bufp->fullCData(oldp+270,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
    bufp->fullIData(oldp+271,(((IData)(1U) + ((1U & 
                                               vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(7U 
                                                 & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 4U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+272,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+273,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullCData(oldp+274,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
    bufp->fullCData(oldp+275,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
    bufp->fullCData(oldp+276,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+277,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+278,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
    bufp->fullIData(oldp+279,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
    bufp->fullIData(oldp+280,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
    bufp->fullIData(oldp+281,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
    bufp->fullIData(oldp+282,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
    bufp->fullIData(oldp+283,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
    bufp->fullIData(oldp+284,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
    bufp->fullIData(oldp+285,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
    bufp->fullIData(oldp+286,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
    bufp->fullIData(oldp+287,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
    bufp->fullIData(oldp+288,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
    bufp->fullIData(oldp+289,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
    bufp->fullIData(oldp+290,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
    bufp->fullIData(oldp+291,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
    bufp->fullIData(oldp+292,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
    bufp->fullIData(oldp+293,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
    bufp->fullIData(oldp+294,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
    bufp->fullIData(oldp+295,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
    bufp->fullIData(oldp+296,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
    bufp->fullIData(oldp+297,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
    bufp->fullIData(oldp+298,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
    bufp->fullIData(oldp+299,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
    bufp->fullIData(oldp+300,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
    bufp->fullIData(oldp+301,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
    bufp->fullIData(oldp+302,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
    bufp->fullIData(oldp+303,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
    bufp->fullIData(oldp+304,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
    bufp->fullIData(oldp+305,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
    bufp->fullIData(oldp+306,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
    bufp->fullIData(oldp+307,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
    bufp->fullIData(oldp+308,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
    bufp->fullIData(oldp+309,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
    bufp->fullIData(oldp+310,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
    bufp->fullCData(oldp+311,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
    bufp->fullBit(oldp+312,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
    bufp->fullBit(oldp+313,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+315,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                   >> 1U))));
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                   >> 2U))));
    bufp->fullBit(oldp+317,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullBit(oldp+318,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                              >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                         >> 1U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0)))));
    bufp->fullBit(oldp+319,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                              >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                         >> 1U) & (
                                                   (0U 
                                                    != (IData)(vlSelf->performanceTB__DOT__dut__DOT__writeRegMEM)) 
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
    bufp->fullBit(oldp+320,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))));
    bufp->fullBit(oldp+321,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                   >> 2U))));
    bufp->fullQData(oldp+322,(vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles),64);
    bufp->fullQData(oldp+324,(vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired),64);
    bufp->fullQData(oldp+326,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits),64);
    bufp->fullQData(oldp+328,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses),64);
    bufp->fullQData(oldp+330,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
    bufp->fullQData(oldp+332,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits),64);
    bufp->fullQData(oldp+334,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses),64);
    bufp->fullQData(oldp+336,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
    bufp->fullQData(oldp+338,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions),64);
    bufp->fullQData(oldp+340,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions),64);
    bufp->fullBit(oldp+342,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev));
    bufp->fullBit(oldp+343,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev));
    bufp->fullBit(oldp+344,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev));
    bufp->fullDouble(oldp+345,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
    bufp->fullDouble(oldp+347,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
    bufp->fullDouble(oldp+349,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
    bufp->fullDouble(oldp+351,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    bufp->fullBit(oldp+353,(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
    bufp->fullBit(oldp+354,(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
    bufp->fullBit(oldp+355,(vlSelf->performanceTB__DOT__dut__DOT__pcWrite));
    bufp->fullBit(oldp+356,(vlSelf->performanceTB__DOT__dut__DOT__hazardSel));
    bufp->fullBit(oldp+357,(vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite));
    bufp->fullSData(oldp+358,(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID),9);
    bufp->fullCData(oldp+359,(vlSelf->performanceTB__DOT__dut__DOT__MEMEX),3);
    bufp->fullBit(oldp+360,(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX));
    bufp->fullBit(oldp+361,(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX));
    bufp->fullBit(oldp+362,(vlSelf->performanceTB__DOT__dut__DOT__branch_taken));
    bufp->fullBit(oldp+363,(vlSelf->performanceTB__DOT__dut__DOT__mispredict));
    bufp->fullBit(oldp+364,(vlSelf->performanceTB__DOT__dut__DOT__branch_takenMEM));
    bufp->fullBit(oldp+365,(vlSelf->performanceTB__DOT__dut__DOT__stall_WB));
    bufp->fullBit(oldp+366,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                   >> 2U))));
    bufp->fullCData(oldp+367,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__update_index),6);
    bufp->fullBit(oldp+368,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                   >> 1U))));
    bufp->fullIData(oldp+369,(vlSelf->performanceTB__DOT__dut__DOT__nextPc),32);
    bufp->fullIData(oldp+370,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF),32);
    bufp->fullBit(oldp+371,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken));
    bufp->fullCData(oldp+372,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__current_state),2);
    bufp->fullCData(oldp+373,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__next_state),2);
    bufp->fullBit(oldp+374,(vlSelf->performanceTB__DOT__clk));
    bufp->fullBit(oldp+375,(vlSelf->performanceTB__DOT__rst));
    bufp->fullCData(oldp+376,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__GHR),6);
    bufp->fullCData(oldp+377,((0x3fU & ((vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                         >> 2U) ^ (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__GHR)))),6);
    bufp->fullIData(oldp+378,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+379,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->fullIData(oldp+380,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
    bufp->fullBit(oldp+381,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                              >> 1U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0))));
}
