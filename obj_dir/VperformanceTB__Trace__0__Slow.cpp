// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VperformanceTB__Syms.h"


VL_ATTR_COLD void VperformanceTB___024root__trace_init_sub__TOP__0(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VperformanceTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("performanceTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"perf_print",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"break_detected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"special_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+19,0,"is_special_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"ic_stall_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"dc_stall_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+21,0,"instr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"ICACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"DCACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"ICACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"DCACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pcCurrent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"nextPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"pcPlus4IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"ic_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"pcWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"pcWrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"hazardSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"IFIDwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"IFIDwrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+486,0,"finalCRLTID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+37,0,"predict_taken_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"predict_target_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"WBEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+487,0,"MEMEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
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
    tracep->declBit(c+488,0,"pcSrcEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"IFflushEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"IDflushEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+74,0,"pcPlus4MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"isJumpMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"dc_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"dc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"mem_read_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"mem_write_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"funct3MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"byteOffMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"cpu_benMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+83,0,"shiftedWdataMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"WBWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"AluResWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"MEMDataWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"writeRegWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"pcPlus4WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"isJumpWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"finalResultWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"loadResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"funct3WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"byteOffWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+481,0,"ic_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"dc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"dc_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"ic_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"ic_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"ic_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"ic_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dc_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"dc_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"dc_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"dc_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"dc_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"dc_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"umem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"umem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"umem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"umem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"umem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"umem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"ghr_snapshot_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"ghr_snapshot_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+111,0,"regWrite_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"dc_ready_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"dc_rdata_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+492,0,"stall_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALUDec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"Func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"AluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"AluControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALUUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"AluControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"B_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+118,0,"sum_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+120,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("BranchPredictor_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+493,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+490,0,"actual_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"actual_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"update_ghr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+350,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+563,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bht", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+638,0,"ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+490,0,"actual_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"update_ghr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+350,0,"ghr_snapshot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+563,0,"predict_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+639,0,"INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"GHR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+494,0,"counter_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+351,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("SaturatingCounter_instance[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+564,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+565,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+567,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+568,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+569,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+570,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+571,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+572,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+573,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+574,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+575,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+576,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+577,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+578,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+579,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+580,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+581,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+582,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+583,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+584,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+585,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+586,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+587,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+588,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[32]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+589,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[33]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+590,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[34]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+591,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[35]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+592,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[36]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[37]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[38]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+595,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[39]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+596,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+597,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[40]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+598,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[41]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[42]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+600,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[43]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[44]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+602,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[45]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+603,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[46]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+604,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[47]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[48]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+606,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[49]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+607,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+608,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[50]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+609,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[51]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+610,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[52]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+611,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[53]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+612,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[54]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+613,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[55]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+614,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[56]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+615,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[57]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+616,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[58]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+617,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[59]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+618,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+619,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[60]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+466,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+620,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[61]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+621,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[62]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+622,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[63]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+472,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+623,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+624,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+625,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+478,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+626,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("SaturatingCounter_instance[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"predict",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+480,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+627,0,"new_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("btb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+638,0,"ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pc_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+493,0,"update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"actual_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"btb_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"predict_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+122,0,"pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"OpCode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"wb_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"ex_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"mem_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+641,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+642,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+643,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+644,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+645,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+646,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+647,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+648,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+649,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("D_CACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"cpu_ben",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"dcache_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dcache_req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"dcache_req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"dcache_req_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"dcache_req_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"dcache_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"cpu_ben",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+652,0,"BYTES_PER_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"WORDS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"LAST_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+128,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+129,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+130,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+131,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+132,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+133,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+134,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+135,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+136,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+137,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+138,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+139,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+140,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+141,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+142,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+150,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dirtyBits", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+166,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+174,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"is_read_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"is_write_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+179,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+180,0,"fill_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+182,0,"cpu_ben_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"fill_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+184,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+185,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+188,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+189,0,"current_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+190,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+193,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+194,0,"valid_ways_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+195,0,"lru_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"lru_access_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+188,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+195,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+658,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tree", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tree_next", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+205+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+659,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+658,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+217,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ICACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+661,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"m_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"m_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"m_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"m_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+661,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"BYTES_PER_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"WORDS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"LAST_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+218,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+219,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+220,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+221,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+222,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+223,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+224,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+225,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+226,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+227,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+228,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+229,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+230,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+231,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+232,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+233,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
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
    tracep->declBus(c+234,0,"lru_access_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+235,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+237,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+238,0,"fill_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+240,0,"fill_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+244,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"current_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+246,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+247,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+249,0,"valid_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+251,0,"lru_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+637,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+244,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+251,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+658,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tree", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+252+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tree_next", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+260+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+268,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+659,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+658,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+630,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+631,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MemoryArbitrator_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"ic_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"ic_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"ic_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"ic_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"dc_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"dc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"dc_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"dc_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"dc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"umem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"umem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"umem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"umem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"umem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"umem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+272,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("Reg_Files", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+274,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ReadData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"ReadData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+275+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+307,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("UnifiedMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+650,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"umem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"umem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"umem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"umem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"umem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"umem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+309,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forward_unit_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"rs1_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"rs2_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"rd_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"rd_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+310,0,"regwrite_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"regwrite_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"memRead_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hdu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"IF_ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+274,0,"IF_ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+312,0,"ID_EX_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"EX_MEM_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"MEM_WB_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ID_EX_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"isBranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"mem_read_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"mem_write_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"forwardA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"forwardB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+483,0,"pcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"IF_ID_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"hazardSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"ic_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"dc_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"branch_hazard_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"branch_hazard_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"I_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+643,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+647,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+644,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+645,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+648,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+649,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+646,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"PCInput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+483,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"PCaddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"PCRegister",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("perfCounter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+628,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"ic_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"dc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"reg_write_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"write_reg_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+78,0,"mem_read_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"mem_write_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"is_branchID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"perf_print",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+319,0,"total_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+321,0,"instruction_retired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+323,0,"ic_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+325,0,"ic_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+327,0,"ic_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+329,0,"dc_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+331,0,"dc_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+333,0,"dc_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+335,0,"branch_instructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+337,0,"branch_mispredictions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+339,0,"ic_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"dc_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"branch_taken_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+342,0,"CPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+344,0,"ic_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+346,0,"dc_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+348,0,"branch_mispredict_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
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
    bufp->fullBit(oldp+633,(vlSelf->performanceTB__DOT__perf_print));
    bufp->fullIData(oldp+634,(0x20U),32);
    bufp->fullIData(oldp+635,(0xaU),32);
    bufp->fullIData(oldp+636,(0x100U),32);
    bufp->fullIData(oldp+637,(2U),32);
    bufp->fullIData(oldp+638,(0x40U),32);
    bufp->fullIData(oldp+639,(6U),32);
    bufp->fullIData(oldp+640,(0x18U),32);
    bufp->fullCData(oldp+641,(0x33U),7);
    bufp->fullCData(oldp+642,(0x13U),7);
    bufp->fullCData(oldp+643,(3U),7);
    bufp->fullCData(oldp+644,(0x23U),7);
    bufp->fullCData(oldp+645,(0x63U),7);
    bufp->fullCData(oldp+646,(0x6fU),7);
    bufp->fullCData(oldp+647,(0x67U),7);
    bufp->fullCData(oldp+648,(0x37U),7);
    bufp->fullCData(oldp+649,(0x17U),7);
    bufp->fullIData(oldp+650,(0x14U),32);
    bufp->fullIData(oldp+651,(0x10U),32);
    bufp->fullIData(oldp+652,(4U),32);
    bufp->fullIData(oldp+653,(8U),32);
    bufp->fullIData(oldp+654,(3U),32);
    bufp->fullIData(oldp+655,(0x19U),32);
    bufp->fullIData(oldp+656,(1U),32);
    bufp->fullCData(oldp+657,(3U),2);
    bufp->fullIData(oldp+658,(1U),32);
    bufp->fullIData(oldp+659,(2U),32);
    bufp->fullIData(oldp+660,(2U),32);
    bufp->fullBit(oldp+661,(1U));
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
    bufp->fullBit(oldp+17,(vlSelf->performanceTB__DOT__break_detected));
    bufp->fullCData(oldp+18,(vlSelf->performanceTB__DOT__special_pipe),3);
    bufp->fullBit(oldp+19,((0x100073U == vlSelf->performanceTB__DOT__dut__DOT__instID)));
    bufp->fullIData(oldp+20,(vlSelf->performanceTB__DOT__cycle_count),32);
    bufp->fullIData(oldp+21,(vlSelf->performanceTB__DOT__instr_count),32);
    bufp->fullIData(oldp+22,(vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
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
    bufp->fullIData(oldp+74,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4MEM),32);
    bufp->fullBit(oldp+75,(vlSelf->performanceTB__DOT__dut__DOT__isJumpMEM));
    bufp->fullIData(oldp+76,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata),32);
    bufp->fullBit(oldp+77,(vlSelf->performanceTB__DOT__dut__DOT__dc_ready));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                  >> 1U))));
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullCData(oldp+80,(vlSelf->performanceTB__DOT__dut__DOT__funct3MEM),3);
    bufp->fullCData(oldp+81,(vlSelf->performanceTB__DOT__dut__DOT__byteOffMEM),2);
    bufp->fullCData(oldp+82,(vlSelf->performanceTB__DOT__dut__DOT__cpu_benMEM),4);
    bufp->fullIData(oldp+83,(vlSelf->performanceTB__DOT__dut__DOT__shiftedWdataMEM),32);
    bufp->fullCData(oldp+84,(vlSelf->performanceTB__DOT__dut__DOT__WBWB),2);
    bufp->fullIData(oldp+85,(vlSelf->performanceTB__DOT__dut__DOT__AluResWB),32);
    bufp->fullIData(oldp+86,(vlSelf->performanceTB__DOT__dut__DOT__MEMDataWB),32);
    bufp->fullCData(oldp+87,(vlSelf->performanceTB__DOT__dut__DOT__writeRegWB),5);
    bufp->fullIData(oldp+88,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4WB),32);
    bufp->fullBit(oldp+89,(vlSelf->performanceTB__DOT__dut__DOT__isJumpWB));
    bufp->fullIData(oldp+90,(vlSelf->performanceTB__DOT__dut__DOT__finalResultWB),32);
    bufp->fullIData(oldp+91,(vlSelf->performanceTB__DOT__dut__DOT__loadResult),32);
    bufp->fullCData(oldp+92,(vlSelf->performanceTB__DOT__dut__DOT__funct3WB),3);
    bufp->fullCData(oldp+93,(vlSelf->performanceTB__DOT__dut__DOT__byteOffWB),2);
    bufp->fullBit(oldp+94,(vlSelf->performanceTB__DOT__dut__DOT__dc_done));
    bufp->fullIData(oldp+95,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_addr),32);
    bufp->fullIData(oldp+96,(vlSelf->performanceTB__DOT__dut__DOT__umem_rdata),32);
    bufp->fullBit(oldp+97,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__m_read));
    bufp->fullBit(oldp+98,(vlSelf->performanceTB__DOT__dut__DOT__ic_mem_ready));
    bufp->fullIData(oldp+99,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
    bufp->fullIData(oldp+100,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
    bufp->fullBit(oldp+101,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
    bufp->fullBit(oldp+102,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
    bufp->fullBit(oldp+103,(vlSelf->performanceTB__DOT__dut__DOT__dc_mem_ready));
    bufp->fullBit(oldp+104,(vlSelf->performanceTB__DOT__dut__DOT__umem_read));
    bufp->fullBit(oldp+105,(vlSelf->performanceTB__DOT__dut__DOT__umem_write));
    bufp->fullBit(oldp+106,(vlSelf->performanceTB__DOT__dut__DOT__umem_ready));
    bufp->fullIData(oldp+107,(vlSelf->performanceTB__DOT__dut__DOT__umem_addr),32);
    bufp->fullIData(oldp+108,(vlSelf->performanceTB__DOT__dut__DOT__umem_wdata),32);
    bufp->fullCData(oldp+109,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_ID),6);
    bufp->fullCData(oldp+110,(vlSelf->performanceTB__DOT__dut__DOT__ghr_snapshot_EX),6);
    bufp->fullBit(oldp+111,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB) 
                                   >> 1U))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_done) 
                             | (IData)(vlSelf->performanceTB__DOT__dut__DOT__dc_ready))));
    bufp->fullIData(oldp+113,(vlSelf->performanceTB__DOT__dut__DOT__dc_rdata_latch),32);
    bufp->fullCData(oldp+114,((7U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__EXEX) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+115,((0U == vlSelf->performanceTB__DOT__dut__DOT__AluResultEX)));
    bufp->fullBit(oldp+116,((((0U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX)) 
                              | (1U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__AluCtrlEX))) 
                             & (((vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                  >> 0x1fU) == (vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux 
                                                >> 0x1fU)) 
                                & ((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext 
                                                  >> 0x1fU))) 
                                   != (vlSelf->performanceTB__DOT__dut__DOT__AluInA 
                                       >> 0x1fU))))));
    bufp->fullIData(oldp+117,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__B_mux),32);
    bufp->fullQData(oldp+118,(vlSelf->performanceTB__DOT__dut__DOT__ALUUnit__DOT__sum_ext),33);
    bufp->fullCData(oldp+120,((0x1fU & vlSelf->performanceTB__DOT__dut__DOT__AluInB)),5);
    bufp->fullCData(oldp+121,((0x3fU & (vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                                        >> 2U))),6);
    bufp->fullIData(oldp+122,((vlSelf->performanceTB__DOT__dut__DOT__pc__DOT__PCRegister 
                               >> 8U)),24);
    bufp->fullCData(oldp+123,((0x7fU & vlSelf->performanceTB__DOT__dut__DOT__instID)),7);
    bufp->fullBit(oldp+124,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
    bufp->fullBit(oldp+125,(vlSelf->performanceTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
    bufp->fullIData(oldp+126,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][0U]),25);
    bufp->fullIData(oldp+127,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][1U]),25);
    bufp->fullIData(oldp+128,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][2U]),25);
    bufp->fullIData(oldp+129,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][3U]),25);
    bufp->fullIData(oldp+130,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][4U]),25);
    bufp->fullIData(oldp+131,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][5U]),25);
    bufp->fullIData(oldp+132,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][6U]),25);
    bufp->fullIData(oldp+133,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [0U][7U]),25);
    bufp->fullIData(oldp+134,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][0U]),25);
    bufp->fullIData(oldp+135,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][1U]),25);
    bufp->fullIData(oldp+136,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][2U]),25);
    bufp->fullIData(oldp+137,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][3U]),25);
    bufp->fullIData(oldp+138,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][4U]),25);
    bufp->fullIData(oldp+139,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][5U]),25);
    bufp->fullIData(oldp+140,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][6U]),25);
    bufp->fullIData(oldp+141,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array
                              [1U][7U]),25);
    bufp->fullBit(oldp+142,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+143,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+144,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+145,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+146,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][4U]));
    bufp->fullBit(oldp+147,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][5U]));
    bufp->fullBit(oldp+148,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][6U]));
    bufp->fullBit(oldp+149,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [0U][7U]));
    bufp->fullBit(oldp+150,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+151,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+152,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+153,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][3U]));
    bufp->fullBit(oldp+154,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][4U]));
    bufp->fullBit(oldp+155,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][5U]));
    bufp->fullBit(oldp+156,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][6U]));
    bufp->fullBit(oldp+157,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid
                            [1U][7U]));
    bufp->fullBit(oldp+158,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][0U]));
    bufp->fullBit(oldp+159,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][1U]));
    bufp->fullBit(oldp+160,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][2U]));
    bufp->fullBit(oldp+161,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][3U]));
    bufp->fullBit(oldp+162,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][4U]));
    bufp->fullBit(oldp+163,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][5U]));
    bufp->fullBit(oldp+164,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][6U]));
    bufp->fullBit(oldp+165,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [0U][7U]));
    bufp->fullBit(oldp+166,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][0U]));
    bufp->fullBit(oldp+167,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][1U]));
    bufp->fullBit(oldp+168,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][2U]));
    bufp->fullBit(oldp+169,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][3U]));
    bufp->fullBit(oldp+170,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][4U]));
    bufp->fullBit(oldp+171,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][5U]));
    bufp->fullBit(oldp+172,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][6U]));
    bufp->fullBit(oldp+173,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits
                            [1U][7U]));
    bufp->fullIData(oldp+174,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+175,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
    bufp->fullBit(oldp+176,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
    bufp->fullBit(oldp+177,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
    bufp->fullIData(oldp+178,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),25);
    bufp->fullCData(oldp+179,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),3);
    bufp->fullCData(oldp+180,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_offset),2);
    bufp->fullBit(oldp+181,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
    bufp->fullCData(oldp+182,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__cpu_ben_reg),4);
    bufp->fullCData(oldp+183,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_word),2);
    bufp->fullCData(oldp+184,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
    bufp->fullCData(oldp+185,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
    bufp->fullIData(oldp+186,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+187,((vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                               >> 7U)),25);
    bufp->fullCData(oldp+188,((7U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                     >> 4U))),3);
    bufp->fullCData(oldp+189,((3U & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                     >> 2U))),2);
    bufp->fullCData(oldp+190,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+191,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+192,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullBit(oldp+193,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullCData(oldp+194,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
    bufp->fullBit(oldp+195,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
    bufp->fullBit(oldp+196,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
    bufp->fullCData(oldp+197,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
    bufp->fullCData(oldp+198,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
    bufp->fullCData(oldp+199,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
    bufp->fullCData(oldp+200,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
    bufp->fullCData(oldp+201,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
    bufp->fullCData(oldp+202,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
    bufp->fullCData(oldp+203,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
    bufp->fullCData(oldp+204,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
    bufp->fullCData(oldp+205,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
    bufp->fullCData(oldp+206,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
    bufp->fullCData(oldp+207,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
    bufp->fullCData(oldp+208,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
    bufp->fullCData(oldp+209,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
    bufp->fullCData(oldp+210,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
    bufp->fullCData(oldp+211,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
    bufp->fullCData(oldp+212,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
    bufp->fullIData(oldp+213,(((IData)(1U) + ((1U & 
                                               vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(7U 
                                                 & (vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 4U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+214,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+215,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullIData(oldp+216,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__b),32);
    bufp->fullIData(oldp+217,(vlSelf->performanceTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+218,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][0U]),25);
    bufp->fullIData(oldp+219,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][1U]),25);
    bufp->fullIData(oldp+220,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][2U]),25);
    bufp->fullIData(oldp+221,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][3U]),25);
    bufp->fullIData(oldp+222,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][4U]),25);
    bufp->fullIData(oldp+223,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][5U]),25);
    bufp->fullIData(oldp+224,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][6U]),25);
    bufp->fullIData(oldp+225,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [0U][7U]),25);
    bufp->fullIData(oldp+226,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][0U]),25);
    bufp->fullIData(oldp+227,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][1U]),25);
    bufp->fullIData(oldp+228,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][2U]),25);
    bufp->fullIData(oldp+229,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][3U]),25);
    bufp->fullIData(oldp+230,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][4U]),25);
    bufp->fullIData(oldp+231,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][5U]),25);
    bufp->fullIData(oldp+232,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][6U]),25);
    bufp->fullIData(oldp+233,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array
                              [1U][7U]),25);
    bufp->fullBit(oldp+234,(((2U == (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state))
                              ? (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way)
                              : (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index))));
    bufp->fullIData(oldp+235,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+236,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),25);
    bufp->fullCData(oldp+237,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),3);
    bufp->fullCData(oldp+238,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_offset),2);
    bufp->fullBit(oldp+239,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
    bufp->fullCData(oldp+240,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_word),2);
    bufp->fullCData(oldp+241,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
    bufp->fullIData(oldp+242,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+243,((vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                               >> 7U)),25);
    bufp->fullCData(oldp+244,((7U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                     >> 4U))),3);
    bufp->fullCData(oldp+245,((3U & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                     >> 2U))),2);
    bufp->fullCData(oldp+246,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+247,((0U != (IData)(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+248,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullCData(oldp+249,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
    bufp->fullBit(oldp+250,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullBit(oldp+251,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
    bufp->fullCData(oldp+252,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[0]),2);
    bufp->fullCData(oldp+253,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[1]),2);
    bufp->fullCData(oldp+254,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[2]),2);
    bufp->fullCData(oldp+255,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[3]),2);
    bufp->fullCData(oldp+256,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[4]),2);
    bufp->fullCData(oldp+257,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[5]),2);
    bufp->fullCData(oldp+258,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[6]),2);
    bufp->fullCData(oldp+259,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[7]),2);
    bufp->fullCData(oldp+260,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[0]),2);
    bufp->fullCData(oldp+261,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[1]),2);
    bufp->fullCData(oldp+262,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[2]),2);
    bufp->fullCData(oldp+263,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[3]),2);
    bufp->fullCData(oldp+264,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[4]),2);
    bufp->fullCData(oldp+265,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[5]),2);
    bufp->fullCData(oldp+266,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[6]),2);
    bufp->fullCData(oldp+267,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree_next[7]),2);
    bufp->fullIData(oldp+268,(((IData)(1U) + ((1U & 
                                               vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(7U 
                                                 & (vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 4U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+269,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+270,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullCData(oldp+271,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
    bufp->fullCData(oldp+272,(vlSelf->performanceTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
    bufp->fullCData(oldp+273,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+274,((0x1fU & (vlSelf->performanceTB__DOT__dut__DOT__instID 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+275,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
    bufp->fullIData(oldp+276,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
    bufp->fullIData(oldp+277,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
    bufp->fullIData(oldp+278,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
    bufp->fullIData(oldp+279,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
    bufp->fullIData(oldp+280,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
    bufp->fullIData(oldp+281,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
    bufp->fullIData(oldp+282,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
    bufp->fullIData(oldp+283,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
    bufp->fullIData(oldp+284,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
    bufp->fullIData(oldp+285,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
    bufp->fullIData(oldp+286,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
    bufp->fullIData(oldp+287,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
    bufp->fullIData(oldp+288,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
    bufp->fullIData(oldp+289,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
    bufp->fullIData(oldp+290,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
    bufp->fullIData(oldp+291,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
    bufp->fullIData(oldp+292,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
    bufp->fullIData(oldp+293,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
    bufp->fullIData(oldp+294,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
    bufp->fullIData(oldp+295,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
    bufp->fullIData(oldp+296,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
    bufp->fullIData(oldp+297,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
    bufp->fullIData(oldp+298,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
    bufp->fullIData(oldp+299,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
    bufp->fullIData(oldp+300,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
    bufp->fullIData(oldp+301,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
    bufp->fullIData(oldp+302,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
    bufp->fullIData(oldp+303,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
    bufp->fullIData(oldp+304,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
    bufp->fullIData(oldp+305,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
    bufp->fullIData(oldp+306,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
    bufp->fullIData(oldp+307,(vlSelf->performanceTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
    bufp->fullCData(oldp+308,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
    bufp->fullBit(oldp+309,(vlSelf->performanceTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
    bufp->fullBit(oldp+310,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+311,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+312,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                   >> 1U))));
    bufp->fullBit(oldp+313,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                   >> 2U))));
    bufp->fullBit(oldp+314,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullBit(oldp+315,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                              >> 2U) & (((IData)(vlSelf->performanceTB__DOT__dut__DOT__WBEX) 
                                         >> 1U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0)))));
    bufp->fullBit(oldp+316,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
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
    bufp->fullBit(oldp+317,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__WBWB))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMID) 
                                   >> 2U))));
    bufp->fullQData(oldp+319,(vlSelf->performanceTB__DOT__perfCounter__DOT__total_cycles),64);
    bufp->fullQData(oldp+321,(vlSelf->performanceTB__DOT__perfCounter__DOT__instruction_retired),64);
    bufp->fullQData(oldp+323,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_hits),64);
    bufp->fullQData(oldp+325,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_misses),64);
    bufp->fullQData(oldp+327,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
    bufp->fullQData(oldp+329,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_hits),64);
    bufp->fullQData(oldp+331,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_misses),64);
    bufp->fullQData(oldp+333,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
    bufp->fullQData(oldp+335,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_instructions),64);
    bufp->fullQData(oldp+337,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_mispredictions),64);
    bufp->fullBit(oldp+339,(vlSelf->performanceTB__DOT__perfCounter__DOT__ic_stall_prev));
    bufp->fullBit(oldp+340,(vlSelf->performanceTB__DOT__perfCounter__DOT__dc_stall_prev));
    bufp->fullBit(oldp+341,(vlSelf->performanceTB__DOT__perfCounter__DOT__branch_taken_prev));
    bufp->fullDouble(oldp+342,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
    bufp->fullDouble(oldp+344,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
    bufp->fullDouble(oldp+346,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
    bufp->fullDouble(oldp+348,(vlSelf->performanceTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    bufp->fullCData(oldp+350,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__GHR),6);
    bufp->fullQData(oldp+351,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__prediction),64);
    bufp->fullBit(oldp+353,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+354,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__state),2);
    bufp->fullBit(oldp+355,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+356,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__state),2);
    bufp->fullBit(oldp+357,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+358,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__state),2);
    bufp->fullBit(oldp+359,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+360,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__state),2);
    bufp->fullBit(oldp+361,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+362,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__state),2);
    bufp->fullBit(oldp+363,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+364,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__state),2);
    bufp->fullBit(oldp+365,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+366,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__state),2);
    bufp->fullBit(oldp+367,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+368,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__state),2);
    bufp->fullBit(oldp+369,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+370,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__state),2);
    bufp->fullBit(oldp+371,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+372,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__state),2);
    bufp->fullBit(oldp+373,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+374,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__state),2);
    bufp->fullBit(oldp+375,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+376,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__state),2);
    bufp->fullBit(oldp+377,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+378,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__state),2);
    bufp->fullBit(oldp+379,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+380,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__state),2);
    bufp->fullBit(oldp+381,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+382,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__state),2);
    bufp->fullBit(oldp+383,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+384,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__state),2);
    bufp->fullBit(oldp+385,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+386,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__state),2);
    bufp->fullBit(oldp+387,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+388,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__state),2);
    bufp->fullBit(oldp+389,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+390,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__state),2);
    bufp->fullBit(oldp+391,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+392,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__state),2);
    bufp->fullBit(oldp+393,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+394,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__state),2);
    bufp->fullBit(oldp+395,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+396,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__state),2);
    bufp->fullBit(oldp+397,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+398,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__state),2);
    bufp->fullBit(oldp+399,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+400,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__state),2);
    bufp->fullBit(oldp+401,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+402,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__state),2);
    bufp->fullBit(oldp+403,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+404,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__state),2);
    bufp->fullBit(oldp+405,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+406,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__state),2);
    bufp->fullBit(oldp+407,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+408,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__state),2);
    bufp->fullBit(oldp+409,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+410,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__state),2);
    bufp->fullBit(oldp+411,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+412,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__state),2);
    bufp->fullBit(oldp+413,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+414,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__state),2);
    bufp->fullBit(oldp+415,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+416,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__state),2);
    bufp->fullBit(oldp+417,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+418,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__state),2);
    bufp->fullBit(oldp+419,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+420,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__state),2);
    bufp->fullBit(oldp+421,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+422,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__state),2);
    bufp->fullBit(oldp+423,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+424,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__state),2);
    bufp->fullBit(oldp+425,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+426,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__state),2);
    bufp->fullBit(oldp+427,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+428,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__state),2);
    bufp->fullBit(oldp+429,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+430,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__state),2);
    bufp->fullBit(oldp+431,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+432,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__state),2);
    bufp->fullBit(oldp+433,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+434,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__state),2);
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+436,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__state),2);
    bufp->fullBit(oldp+437,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+438,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__state),2);
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+440,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__state),2);
    bufp->fullBit(oldp+441,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+442,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__state),2);
    bufp->fullBit(oldp+443,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+444,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__state),2);
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+446,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__state),2);
    bufp->fullBit(oldp+447,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+448,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__state),2);
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+450,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__state),2);
    bufp->fullBit(oldp+451,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+452,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__state),2);
    bufp->fullBit(oldp+453,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+454,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__state),2);
    bufp->fullBit(oldp+455,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+456,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__state),2);
    bufp->fullBit(oldp+457,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+458,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__state),2);
    bufp->fullBit(oldp+459,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+460,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__state),2);
    bufp->fullBit(oldp+461,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+462,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__state),2);
    bufp->fullBit(oldp+463,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+464,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__state),2);
    bufp->fullBit(oldp+465,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+466,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__state),2);
    bufp->fullBit(oldp+467,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+468,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__state),2);
    bufp->fullBit(oldp+469,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+470,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__state),2);
    bufp->fullBit(oldp+471,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+472,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__state),2);
    bufp->fullBit(oldp+473,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+474,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__state),2);
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+476,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__state),2);
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+478,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__state),2);
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state) 
                                   >> 1U))));
    bufp->fullCData(oldp+480,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__state),2);
    bufp->fullBit(oldp+481,(vlSelf->performanceTB__DOT__dut__DOT__ic_stall));
    bufp->fullBit(oldp+482,(vlSelf->performanceTB__DOT__dut__DOT__dc_stall));
    bufp->fullBit(oldp+483,(vlSelf->performanceTB__DOT__dut__DOT__pcWrite));
    bufp->fullBit(oldp+484,(vlSelf->performanceTB__DOT__dut__DOT__hazardSel));
    bufp->fullBit(oldp+485,(vlSelf->performanceTB__DOT__dut__DOT__IFIDwrite));
    bufp->fullSData(oldp+486,(vlSelf->performanceTB__DOT__dut__DOT__finalCRLTID),9);
    bufp->fullCData(oldp+487,(vlSelf->performanceTB__DOT__dut__DOT__MEMEX),3);
    bufp->fullBit(oldp+488,(vlSelf->performanceTB__DOT__dut__DOT__pcSrcEX));
    bufp->fullBit(oldp+489,(vlSelf->performanceTB__DOT__dut__DOT__IFflushEX));
    bufp->fullBit(oldp+490,(vlSelf->performanceTB__DOT__dut__DOT__branch_taken));
    bufp->fullBit(oldp+491,(vlSelf->performanceTB__DOT__dut__DOT__mispredict));
    bufp->fullBit(oldp+492,(vlSelf->performanceTB__DOT__dut__DOT__stall_WB));
    bufp->fullBit(oldp+493,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                   >> 2U))));
    bufp->fullQData(oldp+494,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en),64);
    bufp->fullBit(oldp+496,((1U & (IData)(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en))));
    bufp->fullBit(oldp+497,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+498,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+499,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+500,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+501,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+502,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+503,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+504,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+505,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+506,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+507,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 1U)))));
    bufp->fullBit(oldp+508,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+509,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+510,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+511,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+512,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+513,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+514,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+515,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+516,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+517,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+518,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 2U)))));
    bufp->fullBit(oldp+519,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+520,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+521,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+522,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+523,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+524,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+525,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+526,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+527,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+528,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+529,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 3U)))));
    bufp->fullBit(oldp+530,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+531,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+532,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+533,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+534,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+535,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+536,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+537,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+538,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+539,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+540,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 4U)))));
    bufp->fullBit(oldp+541,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+542,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+543,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+544,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+545,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+546,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+547,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+548,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+549,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+550,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+551,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 5U)))));
    bufp->fullBit(oldp+552,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+553,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+554,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+555,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+556,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 6U)))));
    bufp->fullBit(oldp+557,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 7U)))));
    bufp->fullBit(oldp+558,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 8U)))));
    bufp->fullBit(oldp+559,((1U & (IData)((vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__counter_update_en 
                                           >> 9U)))));
    bufp->fullBit(oldp+560,((1U & ((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                                   >> 1U))));
    bufp->fullIData(oldp+561,(vlSelf->performanceTB__DOT__dut__DOT__nextPc),32);
    bufp->fullIData(oldp+562,(vlSelf->performanceTB__DOT__dut__DOT__pcPlus4IF),32);
    bufp->fullBit(oldp+563,(vlSelf->performanceTB__DOT__dut__DOT__predict_taken));
    bufp->fullCData(oldp+564,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__0__KET____DOT__new_state),2);
    bufp->fullCData(oldp+565,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__10__KET____DOT__new_state),2);
    bufp->fullCData(oldp+566,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__11__KET____DOT__new_state),2);
    bufp->fullCData(oldp+567,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__12__KET____DOT__new_state),2);
    bufp->fullCData(oldp+568,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__13__KET____DOT__new_state),2);
    bufp->fullCData(oldp+569,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__14__KET____DOT__new_state),2);
    bufp->fullCData(oldp+570,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__15__KET____DOT__new_state),2);
    bufp->fullCData(oldp+571,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__16__KET____DOT__new_state),2);
    bufp->fullCData(oldp+572,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__17__KET____DOT__new_state),2);
    bufp->fullCData(oldp+573,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__18__KET____DOT__new_state),2);
    bufp->fullCData(oldp+574,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__19__KET____DOT__new_state),2);
    bufp->fullCData(oldp+575,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__1__KET____DOT__new_state),2);
    bufp->fullCData(oldp+576,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__20__KET____DOT__new_state),2);
    bufp->fullCData(oldp+577,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__21__KET____DOT__new_state),2);
    bufp->fullCData(oldp+578,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__22__KET____DOT__new_state),2);
    bufp->fullCData(oldp+579,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__23__KET____DOT__new_state),2);
    bufp->fullCData(oldp+580,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__24__KET____DOT__new_state),2);
    bufp->fullCData(oldp+581,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__25__KET____DOT__new_state),2);
    bufp->fullCData(oldp+582,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__26__KET____DOT__new_state),2);
    bufp->fullCData(oldp+583,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__27__KET____DOT__new_state),2);
    bufp->fullCData(oldp+584,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__28__KET____DOT__new_state),2);
    bufp->fullCData(oldp+585,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__29__KET____DOT__new_state),2);
    bufp->fullCData(oldp+586,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__2__KET____DOT__new_state),2);
    bufp->fullCData(oldp+587,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__30__KET____DOT__new_state),2);
    bufp->fullCData(oldp+588,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__31__KET____DOT__new_state),2);
    bufp->fullCData(oldp+589,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__32__KET____DOT__new_state),2);
    bufp->fullCData(oldp+590,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__33__KET____DOT__new_state),2);
    bufp->fullCData(oldp+591,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__34__KET____DOT__new_state),2);
    bufp->fullCData(oldp+592,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__35__KET____DOT__new_state),2);
    bufp->fullCData(oldp+593,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__36__KET____DOT__new_state),2);
    bufp->fullCData(oldp+594,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__37__KET____DOT__new_state),2);
    bufp->fullCData(oldp+595,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__38__KET____DOT__new_state),2);
    bufp->fullCData(oldp+596,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__39__KET____DOT__new_state),2);
    bufp->fullCData(oldp+597,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__3__KET____DOT__new_state),2);
    bufp->fullCData(oldp+598,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__40__KET____DOT__new_state),2);
    bufp->fullCData(oldp+599,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__41__KET____DOT__new_state),2);
    bufp->fullCData(oldp+600,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__42__KET____DOT__new_state),2);
    bufp->fullCData(oldp+601,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__43__KET____DOT__new_state),2);
    bufp->fullCData(oldp+602,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__44__KET____DOT__new_state),2);
    bufp->fullCData(oldp+603,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__45__KET____DOT__new_state),2);
    bufp->fullCData(oldp+604,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__46__KET____DOT__new_state),2);
    bufp->fullCData(oldp+605,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__47__KET____DOT__new_state),2);
    bufp->fullCData(oldp+606,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__48__KET____DOT__new_state),2);
    bufp->fullCData(oldp+607,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__49__KET____DOT__new_state),2);
    bufp->fullCData(oldp+608,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__4__KET____DOT__new_state),2);
    bufp->fullCData(oldp+609,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__50__KET____DOT__new_state),2);
    bufp->fullCData(oldp+610,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__51__KET____DOT__new_state),2);
    bufp->fullCData(oldp+611,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__52__KET____DOT__new_state),2);
    bufp->fullCData(oldp+612,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__53__KET____DOT__new_state),2);
    bufp->fullCData(oldp+613,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__54__KET____DOT__new_state),2);
    bufp->fullCData(oldp+614,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__55__KET____DOT__new_state),2);
    bufp->fullCData(oldp+615,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__56__KET____DOT__new_state),2);
    bufp->fullCData(oldp+616,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__57__KET____DOT__new_state),2);
    bufp->fullCData(oldp+617,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__58__KET____DOT__new_state),2);
    bufp->fullCData(oldp+618,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__59__KET____DOT__new_state),2);
    bufp->fullCData(oldp+619,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__5__KET____DOT__new_state),2);
    bufp->fullCData(oldp+620,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__60__KET____DOT__new_state),2);
    bufp->fullCData(oldp+621,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__61__KET____DOT__new_state),2);
    bufp->fullCData(oldp+622,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__62__KET____DOT__new_state),2);
    bufp->fullCData(oldp+623,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__63__KET____DOT__new_state),2);
    bufp->fullCData(oldp+624,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__6__KET____DOT__new_state),2);
    bufp->fullCData(oldp+625,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__7__KET____DOT__new_state),2);
    bufp->fullCData(oldp+626,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__8__KET____DOT__new_state),2);
    bufp->fullCData(oldp+627,(vlSelf->performanceTB__DOT__dut__DOT__BranchPredictor_instance__DOT__bht__DOT__SaturatingCounter_instance__BRA__9__KET____DOT__new_state),2);
    bufp->fullBit(oldp+628,(vlSelf->performanceTB__DOT__clk));
    bufp->fullBit(oldp+629,(vlSelf->performanceTB__DOT__rst));
    bufp->fullIData(oldp+630,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->fullIData(oldp+631,(vlSelf->performanceTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
    bufp->fullBit(oldp+632,((((IData)(vlSelf->performanceTB__DOT__dut__DOT__MEMEX) 
                              >> 1U) & (IData)(vlSelf->performanceTB__DOT__dut__DOT__hdu_instance__DOT____VdfgTmp_heb2fc36b__0))));
}
