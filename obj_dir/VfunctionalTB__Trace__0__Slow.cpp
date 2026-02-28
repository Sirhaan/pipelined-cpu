// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfunctionalTB__Syms.h"


VL_ATTR_COLD void VfunctionalTB___024root__trace_init_sub__TOP__0(VfunctionalTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("functionalTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"perf_print",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("checks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+3,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+5,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+7,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+9,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+11,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+13,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+15,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->popPrefix();
    tracep->declBus(c+228,0,"prev_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"stable_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+230,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+231,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+232,0,"run_checks__Vstatic__actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"ICACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"DCACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"ICACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"DCACHE_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pcCurrent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"nextPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"pcPlus4IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"ic_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"ic_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"pcWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"pcWrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"IFflush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"hazardSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IFIDwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IFIDwrite_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"pcSrcID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"regData1ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"regData2ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"signExtImmID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"branchTargetID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"instID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"pcPlus4ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"WBID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"MEMID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"EXID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"finalCRLTID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+35,0,"WBEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"MEMEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"EXEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"regData1EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"regData2EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"signExtImmEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"RsEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"RtEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"RdEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"FuncEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+45,0,"forwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"forwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"AluMuxAout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"AluMuxBFwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"AluInb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"AluResultEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"AluCtrlEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"WriteRegEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"branchTargetEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"pcSrcEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"IFflushEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"WBMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"MEMMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"AluResMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"writeDataMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"writeRegMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"dc_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"dc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"mem_read_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mem_write_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"WBWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"AluResWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"MEMDataWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"writeRegWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"finalResultWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"ic_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"dc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"dc_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"ic_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"ic_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"ic_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"ic_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"dc_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"dc_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"dc_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"dc_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"dc_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"dc_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"umem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"umem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"umem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"umem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"umem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"umem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"regWrite_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"dc_ready_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"stall_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALUDec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"Func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+89,0,"AluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"AluControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALUUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"AluControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"B_sum_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"carry_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"OpCode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"wb_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"m_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"ex_bundle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"RegDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("D_CACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"dcache_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"dcache_req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"dcache_req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"dcache_req_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"dcache_req_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"dcache_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"cpu_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"is_read_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"is_write_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+111,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+113,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+114,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+115,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+117,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+118,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+121,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+122,0,"valid_ways_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"lru_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"lru_access_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+117,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+123,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ICACHE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"m_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"m_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"m_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"m_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"cpu_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"SET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"addr_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+131,0,"current_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+132,0,"way_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"cacheHit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"hit_way_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+135,0,"valid_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+137,0,"lru_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,0,"active_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+140,0,"fill_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+141,0,"fill_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+20,0,"cpu_rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+239,0,"NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"access_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+131,0,"set_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+137,0,"update",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"valid_ways",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"victim_way",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"TREE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+245,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"temp_node",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"iterator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MemoryArbitrator_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"ic_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"ic_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"ic_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"ic_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"dc_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"dc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"dc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"dc_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"dc_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"dc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"umem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"umem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"umem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"umem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"umem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"umem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("Reg_Files", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"ReadReg1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"ReadReg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"WriteReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"ReadData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"ReadData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+149+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+181,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("UnifiedMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+236,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"umem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"umem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"umem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"umem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"umem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"umem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+183,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("forward_unit_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"rs_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rt_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rd_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"rd_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+184,0,"regwrite_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"regwrite_WB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"memRead_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hdu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"IF_ID_rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"IF_ID_rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"ID_EX_rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"ID_EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"EX_MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+187,0,"ID_EX_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"EX_MEM_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"MEM_WB_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"ID_EX_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"isBranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"mem_read_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"mem_write_EX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"forwardA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"forwardB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"pcWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IF_ID_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"hazardSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ic_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"dc_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"branch_hazard_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"branch_hazard_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"PCInput",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"PCaddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"PCRegister",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("perfCounter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ic_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"dc_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ic_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"dc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"reg_write_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"write_reg_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+63,0,"mem_read_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mem_write_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"is_branchID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"perf_print",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"total_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+196,0,"instruction_retired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+198,0,"ic_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+200,0,"ic_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+202,0,"ic_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+204,0,"dc_hits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+206,0,"dc_misses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+208,0,"dc_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+210,0,"branch_instructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+212,0,"branch_mispredictions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+214,0,"ic_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"dc_stall_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"branch_taken_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+217,0,"CPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+219,0,"ic_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+221,0,"dc_miss_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+223,0,"branch_mispredict_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_init_top(VfunctionalTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_init_top\n"); );
    // Body
    VfunctionalTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VfunctionalTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfunctionalTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfunctionalTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VfunctionalTB___024root__trace_register(VfunctionalTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VfunctionalTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VfunctionalTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VfunctionalTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VfunctionalTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_const_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfunctionalTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_const_0\n"); );
    // Init
    VfunctionalTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfunctionalTB___024root*>(voidSelf);
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfunctionalTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_const_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+235,(0x20U),32);
    bufp->fullIData(oldp+236,(0x14U),32);
    bufp->fullIData(oldp+237,(0xaU),32);
    bufp->fullIData(oldp+238,(0x100U),32);
    bufp->fullIData(oldp+239,(2U),32);
    bufp->fullBit(oldp+240,(0U));
    bufp->fullIData(oldp+241,(0x80U),32);
    bufp->fullIData(oldp+242,(7U),32);
    bufp->fullIData(oldp+243,(0x17U),32);
    bufp->fullIData(oldp+244,(1U),32);
    bufp->fullIData(oldp+245,(1U),32);
    bufp->fullIData(oldp+246,(2U),32);
    bufp->fullIData(oldp+247,(2U),32);
    bufp->fullBit(oldp+248,(1U));
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_full_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfunctionalTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_full_0\n"); );
    // Init
    VfunctionalTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfunctionalTB___024root*>(voidSelf);
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfunctionalTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_full_0_sub_0(VfunctionalTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfunctionalTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->functionalTB__DOT__checks
                            [0U]),37);
    bufp->fullQData(oldp+3,(vlSelf->functionalTB__DOT__checks
                            [1U]),37);
    bufp->fullQData(oldp+5,(vlSelf->functionalTB__DOT__checks
                            [2U]),37);
    bufp->fullQData(oldp+7,(vlSelf->functionalTB__DOT__checks
                            [3U]),37);
    bufp->fullQData(oldp+9,(vlSelf->functionalTB__DOT__checks
                            [4U]),37);
    bufp->fullQData(oldp+11,(vlSelf->functionalTB__DOT__checks
                             [5U]),37);
    bufp->fullQData(oldp+13,(vlSelf->functionalTB__DOT__checks
                             [6U]),37);
    bufp->fullQData(oldp+15,(vlSelf->functionalTB__DOT__checks
                             [7U]),37);
    bufp->fullIData(oldp+17,(vlSelf->functionalTB__DOT__dut__DOT__pc__DOT__PCRegister),32);
    bufp->fullIData(oldp+18,(vlSelf->functionalTB__DOT__dut__DOT__nextPc),32);
    bufp->fullIData(oldp+19,(vlSelf->functionalTB__DOT__dut__DOT__pcPlus4IF),32);
    bufp->fullIData(oldp+20,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg),32);
    bufp->fullBit(oldp+21,(vlSelf->functionalTB__DOT__dut__DOT__ic_ready));
    bufp->fullBit(oldp+22,(vlSelf->functionalTB__DOT__dut__DOT__pcWrite));
    bufp->fullBit(oldp+23,(vlSelf->functionalTB__DOT__dut__DOT__hazardSel));
    bufp->fullBit(oldp+24,(vlSelf->functionalTB__DOT__dut__DOT__IFIDwrite));
    bufp->fullIData(oldp+25,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                             [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                        >> 0x15U))]),32);
    bufp->fullIData(oldp+26,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register
                             [(0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                        >> 0x10U))]),32);
    bufp->fullIData(oldp+27,(vlSelf->functionalTB__DOT__dut__DOT__signExtImmID),32);
    bufp->fullIData(oldp+28,(vlSelf->functionalTB__DOT__dut__DOT__branchTargetID),32);
    bufp->fullIData(oldp+29,(vlSelf->functionalTB__DOT__dut__DOT__instID),32);
    bufp->fullIData(oldp+30,(vlSelf->functionalTB__DOT__dut__DOT__pcPlus4ID),32);
    bufp->fullCData(oldp+31,((((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite) 
                               << 1U) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg))),2);
    bufp->fullCData(oldp+32,(vlSelf->functionalTB__DOT__dut__DOT__MEMID),3);
    bufp->fullCData(oldp+33,((((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst) 
                               << 4U) | (((IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp) 
                                          << 1U) | (IData)(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc)))),5);
    bufp->fullSData(oldp+34,(vlSelf->functionalTB__DOT__dut__DOT__finalCRLTID),10);
    bufp->fullCData(oldp+35,(vlSelf->functionalTB__DOT__dut__DOT__WBEX),2);
    bufp->fullCData(oldp+36,(vlSelf->functionalTB__DOT__dut__DOT__MEMEX),3);
    bufp->fullCData(oldp+37,(vlSelf->functionalTB__DOT__dut__DOT__EXEX),5);
    bufp->fullIData(oldp+38,(vlSelf->functionalTB__DOT__dut__DOT__regData1EX),32);
    bufp->fullIData(oldp+39,(vlSelf->functionalTB__DOT__dut__DOT__regData2EX),32);
    bufp->fullIData(oldp+40,(vlSelf->functionalTB__DOT__dut__DOT__signExtImmEX),32);
    bufp->fullCData(oldp+41,(vlSelf->functionalTB__DOT__dut__DOT__RsEX),5);
    bufp->fullCData(oldp+42,(vlSelf->functionalTB__DOT__dut__DOT__RtEX),5);
    bufp->fullCData(oldp+43,(vlSelf->functionalTB__DOT__dut__DOT__RdEX),5);
    bufp->fullCData(oldp+44,(vlSelf->functionalTB__DOT__dut__DOT__FuncEX),6);
    bufp->fullCData(oldp+45,(vlSelf->functionalTB__DOT__dut__DOT__forwardA),2);
    bufp->fullCData(oldp+46,(vlSelf->functionalTB__DOT__dut__DOT__forwardB),2);
    bufp->fullIData(oldp+47,(vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout),32);
    bufp->fullIData(oldp+48,(vlSelf->functionalTB__DOT__dut__DOT__AluMuxBFwd),32);
    bufp->fullIData(oldp+49,(vlSelf->functionalTB__DOT__dut__DOT__AluInb),32);
    bufp->fullIData(oldp+50,(((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                               ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                   ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                ? 0U
                                                : (~ 
                                                   (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                    | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                                   : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                ? 0U
                                                : VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                               : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                   ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                       ? ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                           ? ((vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                               >> 0x1fU)
                                               ? 1U
                                               : 0U)
                                           : 0U) : 0U)
                                   : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                       ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                       : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                           ? (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                              | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                           : (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                              & vlSelf->functionalTB__DOT__dut__DOT__AluInb)))))),32);
    bufp->fullCData(oldp+51,(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX),4);
    bufp->fullCData(oldp+52,(((0x10U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX))
                               ? (IData)(vlSelf->functionalTB__DOT__dut__DOT__RdEX)
                               : (IData)(vlSelf->functionalTB__DOT__dut__DOT__RtEX))),5);
    bufp->fullIData(oldp+53,(vlSelf->functionalTB__DOT__dut__DOT__branchTargetEX),32);
    bufp->fullBit(oldp+54,(vlSelf->functionalTB__DOT__dut__DOT__pcSrcEX));
    bufp->fullBit(oldp+55,(vlSelf->functionalTB__DOT__dut__DOT__IFflushEX));
    bufp->fullCData(oldp+56,(vlSelf->functionalTB__DOT__dut__DOT__WBMEM),2);
    bufp->fullCData(oldp+57,(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM),3);
    bufp->fullIData(oldp+58,(vlSelf->functionalTB__DOT__dut__DOT__AluResMEM),32);
    bufp->fullIData(oldp+59,(vlSelf->functionalTB__DOT__dut__DOT__writeDataMEM),32);
    bufp->fullCData(oldp+60,(vlSelf->functionalTB__DOT__dut__DOT__writeRegMEM),5);
    bufp->fullIData(oldp+61,(vlSelf->functionalTB__DOT__dut__DOT__dc_rdata),32);
    bufp->fullBit(oldp+62,(vlSelf->functionalTB__DOT__dut__DOT__dc_ready));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                  >> 1U))));
    bufp->fullBit(oldp+64,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullCData(oldp+65,(vlSelf->functionalTB__DOT__dut__DOT__WBWB),2);
    bufp->fullIData(oldp+66,(vlSelf->functionalTB__DOT__dut__DOT__AluResWB),32);
    bufp->fullIData(oldp+67,(vlSelf->functionalTB__DOT__dut__DOT__MEMDataWB),32);
    bufp->fullCData(oldp+68,(vlSelf->functionalTB__DOT__dut__DOT__writeRegWB),5);
    bufp->fullIData(oldp+69,(vlSelf->functionalTB__DOT__dut__DOT__finalResultWB),32);
    bufp->fullBit(oldp+70,(vlSelf->functionalTB__DOT__dut__DOT__ic_stall));
    bufp->fullBit(oldp+71,(vlSelf->functionalTB__DOT__dut__DOT__dc_stall));
    bufp->fullBit(oldp+72,(vlSelf->functionalTB__DOT__dut__DOT__dc_done));
    bufp->fullIData(oldp+73,((0xfffffffcU & vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active)),32);
    bufp->fullIData(oldp+74,(vlSelf->functionalTB__DOT__dut__DOT__umem_rdata),32);
    bufp->fullBit(oldp+75,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__m_read));
    bufp->fullBit(oldp+76,(vlSelf->functionalTB__DOT__dut__DOT__ic_mem_ready));
    bufp->fullIData(oldp+77,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_addr),32);
    bufp->fullIData(oldp+78,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_wdata),32);
    bufp->fullBit(oldp+79,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_valid));
    bufp->fullBit(oldp+80,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__dcache_req_write));
    bufp->fullBit(oldp+81,(vlSelf->functionalTB__DOT__dut__DOT__dc_mem_ready));
    bufp->fullBit(oldp+82,(vlSelf->functionalTB__DOT__dut__DOT__umem_read));
    bufp->fullBit(oldp+83,(vlSelf->functionalTB__DOT__dut__DOT__umem_write));
    bufp->fullBit(oldp+84,(vlSelf->functionalTB__DOT__dut__DOT__umem_ready));
    bufp->fullIData(oldp+85,(vlSelf->functionalTB__DOT__dut__DOT__umem_addr),32);
    bufp->fullIData(oldp+86,(vlSelf->functionalTB__DOT__dut__DOT__umem_wdata),32);
    bufp->fullBit(oldp+87,((IData)((((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                                     >> 1U) & (~ ((~ (IData)(vlSelf->functionalTB__DOT__dut__DOT__dc_stall)) 
                                                  & (IData)(vlSelf->functionalTB__DOT__dut__DOT__ic_stall)))))));
    bufp->fullBit(oldp+88,(vlSelf->functionalTB__DOT__dut__DOT__dc_ready_eff));
    bufp->fullCData(oldp+89,((7U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__EXEX) 
                                    >> 1U))),3);
    bufp->fullBit(oldp+90,((0U == ((8U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                    ? ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                        ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                             ? 0U : 
                                            (~ (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                | vlSelf->functionalTB__DOT__dut__DOT__AluInb))))
                                        : ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                             ? 0U : 
                                            VL_SHIFTL_III(32,32,32, vlSelf->functionalTB__DOT__dut__DOT__AluInb, 0x10U))))
                                    : ((4U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                        ? ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                            ? ((1U 
                                                & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                                ? (
                                                   (vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                                    >> 0x1fU)
                                                    ? 1U
                                                    : 0U)
                                                : 0U)
                                            : 0U) : 
                                       ((2U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                         ? vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum
                                         : ((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))
                                             ? (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                | vlSelf->functionalTB__DOT__dut__DOT__AluInb)
                                             : (vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                                & vlSelf->functionalTB__DOT__dut__DOT__AluInb))))))));
    bufp->fullBit(oldp+91,((IData)(((0U == (0xcU & (IData)(vlSelf->functionalTB__DOT__dut__DOT__AluCtrlEX))) 
                                    & (((vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                         >> 0x1fU) 
                                        == (vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand 
                                            >> 0x1fU)) 
                                       & ((vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout 
                                           >> 0x1fU) 
                                          != (vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum 
                                              >> 0x1fU)))))));
    bufp->fullIData(oldp+92,(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__sum),32);
    bufp->fullIData(oldp+93,(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand),32);
    bufp->fullBit(oldp+94,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->functionalTB__DOT__dut__DOT__AluMuxAout)) 
                                                   + (QData)((IData)(vlSelf->functionalTB__DOT__dut__DOT__ALUUnit__DOT__B_sum_operand))) 
                                                  >> 0x20U))))));
    bufp->fullCData(oldp+95,((vlSelf->functionalTB__DOT__dut__DOT__instID 
                              >> 0x1aU)),6);
    bufp->fullBit(oldp+96,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegWrite));
    bufp->fullBit(oldp+97,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemtoReg));
    bufp->fullBit(oldp+98,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__Branch));
    bufp->fullBit(oldp+99,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemRead));
    bufp->fullBit(oldp+100,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__MemWrite));
    bufp->fullBit(oldp+101,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__RegDst));
    bufp->fullBit(oldp+102,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUSrc));
    bufp->fullCData(oldp+103,(vlSelf->functionalTB__DOT__dut__DOT__CU__DOT__ALUOp),3);
    bufp->fullBit(oldp+104,(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_read));
    bufp->fullBit(oldp+105,(vlSelf->functionalTB__DOT__dut__DOT____Vcellinp__D_CACHE__cpu_write));
    bufp->fullIData(oldp+106,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+107,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg),32);
    bufp->fullBit(oldp+108,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op));
    bufp->fullBit(oldp+109,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op));
    bufp->fullIData(oldp+110,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag),23);
    bufp->fullCData(oldp+111,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set),7);
    bufp->fullBit(oldp+112,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way));
    bufp->fullCData(oldp+113,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state),3);
    bufp->fullCData(oldp+114,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state),3);
    bufp->fullIData(oldp+115,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+116,((vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                               >> 9U)),23);
    bufp->fullCData(oldp+117,((0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),7);
    bufp->fullCData(oldp+118,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+119,((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+120,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullBit(oldp+121,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullCData(oldp+122,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid_ways_current),2);
    bufp->fullBit(oldp+123,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en));
    bufp->fullBit(oldp+124,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_access_way));
    bufp->fullIData(oldp+125,(((IData)(1U) + ((1U & 
                                               vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(0x7fU 
                                                 & (vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 2U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+126,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+127,(vlSelf->functionalTB__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullIData(oldp+128,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg),32);
    bufp->fullIData(oldp+129,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active),32);
    bufp->fullIData(oldp+130,((vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                               >> 9U)),23);
    bufp->fullCData(oldp+131,((0x7fU & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                        >> 2U))),7);
    bufp->fullCData(oldp+132,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit),2);
    bufp->fullBit(oldp+133,((0U != (IData)(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit))));
    bufp->fullBit(oldp+134,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index));
    bufp->fullCData(oldp+135,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid_vec),2);
    bufp->fullBit(oldp+136,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way));
    bufp->fullBit(oldp+137,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update));
    bufp->fullCData(oldp+138,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state),2);
    bufp->fullBit(oldp+139,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way));
    bufp->fullIData(oldp+140,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag),23);
    bufp->fullCData(oldp+141,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set),7);
    bufp->fullIData(oldp+142,(((IData)(1U) + ((1U & 
                                               vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree
                                               [(0x7fU 
                                                 & (vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active 
                                                    >> 2U))])
                                               ? 1U
                                               : 0U))),32);
    bufp->fullIData(oldp+143,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__temp_node),32);
    bufp->fullIData(oldp+144,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__unnamedblk5__DOT__iterator),32);
    bufp->fullCData(oldp+145,(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__state),2);
    bufp->fullCData(oldp+146,(vlSelf->functionalTB__DOT__dut__DOT__MemoryArbitrator_instance__DOT__next_state),2);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                        >> 0x15U))),5);
    bufp->fullCData(oldp+148,((0x1fU & (vlSelf->functionalTB__DOT__dut__DOT__instID 
                                        >> 0x10U))),5);
    bufp->fullIData(oldp+149,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[3]),32);
    bufp->fullIData(oldp+153,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[4]),32);
    bufp->fullIData(oldp+154,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[5]),32);
    bufp->fullIData(oldp+155,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[6]),32);
    bufp->fullIData(oldp+156,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[7]),32);
    bufp->fullIData(oldp+157,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[8]),32);
    bufp->fullIData(oldp+158,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[9]),32);
    bufp->fullIData(oldp+159,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[10]),32);
    bufp->fullIData(oldp+160,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[11]),32);
    bufp->fullIData(oldp+161,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[12]),32);
    bufp->fullIData(oldp+162,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[13]),32);
    bufp->fullIData(oldp+163,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[14]),32);
    bufp->fullIData(oldp+164,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[15]),32);
    bufp->fullIData(oldp+165,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[16]),32);
    bufp->fullIData(oldp+166,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[17]),32);
    bufp->fullIData(oldp+167,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[18]),32);
    bufp->fullIData(oldp+168,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[19]),32);
    bufp->fullIData(oldp+169,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[20]),32);
    bufp->fullIData(oldp+170,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[21]),32);
    bufp->fullIData(oldp+171,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[22]),32);
    bufp->fullIData(oldp+172,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[23]),32);
    bufp->fullIData(oldp+173,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[24]),32);
    bufp->fullIData(oldp+174,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[25]),32);
    bufp->fullIData(oldp+175,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[26]),32);
    bufp->fullIData(oldp+176,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[27]),32);
    bufp->fullIData(oldp+177,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[28]),32);
    bufp->fullIData(oldp+178,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[29]),32);
    bufp->fullIData(oldp+179,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[30]),32);
    bufp->fullIData(oldp+180,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__Register[31]),32);
    bufp->fullIData(oldp+181,(vlSelf->functionalTB__DOT__dut__DOT__Reg_Files__DOT__i),32);
    bufp->fullCData(oldp+182,(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__timer),5);
    bufp->fullBit(oldp+183,(vlSelf->functionalTB__DOT__dut__DOT__UnifiedMem__DOT__busy));
    bufp->fullBit(oldp+184,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB) 
                                   >> 1U))));
    bufp->fullBit(oldp+186,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM) 
                                   >> 1U))));
    bufp->fullBit(oldp+187,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__WBEX) 
                                   >> 1U))));
    bufp->fullBit(oldp+188,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMMEM))));
    bufp->fullBit(oldp+189,(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__load_use_hazard));
    bufp->fullBit(oldp+190,(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_EX));
    bufp->fullBit(oldp+191,(vlSelf->functionalTB__DOT__dut__DOT__hdu_instance__DOT__branch_hazard_MEM));
    bufp->fullBit(oldp+192,((1U & (IData)(vlSelf->functionalTB__DOT__dut__DOT__WBWB))));
    bufp->fullBit(oldp+193,((1U & ((IData)(vlSelf->functionalTB__DOT__dut__DOT__MEMID) 
                                   >> 2U))));
    bufp->fullQData(oldp+194,(vlSelf->functionalTB__DOT__perfCounter__DOT__total_cycles),64);
    bufp->fullQData(oldp+196,(vlSelf->functionalTB__DOT__perfCounter__DOT__instruction_retired),64);
    bufp->fullQData(oldp+198,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_hits),64);
    bufp->fullQData(oldp+200,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_misses),64);
    bufp->fullQData(oldp+202,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_cycles),64);
    bufp->fullQData(oldp+204,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_hits),64);
    bufp->fullQData(oldp+206,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_misses),64);
    bufp->fullQData(oldp+208,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_cycles),64);
    bufp->fullQData(oldp+210,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_instructions),64);
    bufp->fullQData(oldp+212,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_mispredictions),64);
    bufp->fullBit(oldp+214,(vlSelf->functionalTB__DOT__perfCounter__DOT__ic_stall_prev));
    bufp->fullBit(oldp+215,(vlSelf->functionalTB__DOT__perfCounter__DOT__dc_stall_prev));
    bufp->fullBit(oldp+216,(vlSelf->functionalTB__DOT__perfCounter__DOT__branch_taken_prev));
    bufp->fullDouble(oldp+217,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__CPI));
    bufp->fullDouble(oldp+219,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__ic_miss_rate));
    bufp->fullDouble(oldp+221,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__dc_miss_rate));
    bufp->fullDouble(oldp+223,(vlSelf->functionalTB__DOT__perfCounter__DOT__unnamedblk1__DOT__branch_mispredict_rate));
    bufp->fullBit(oldp+225,(vlSelf->functionalTB__DOT__clk));
    bufp->fullBit(oldp+226,(vlSelf->functionalTB__DOT__rst));
    bufp->fullBit(oldp+227,(vlSelf->functionalTB__DOT__perf_print));
    bufp->fullIData(oldp+228,(vlSelf->functionalTB__DOT__prev_pc),32);
    bufp->fullIData(oldp+229,(vlSelf->functionalTB__DOT__stable_count),32);
    bufp->fullIData(oldp+230,(vlSelf->functionalTB__DOT__pass_count),32);
    bufp->fullIData(oldp+231,(vlSelf->functionalTB__DOT__fail_count),32);
    bufp->fullIData(oldp+232,(vlSelf->functionalTB__DOT__run_checks__Vstatic__actual),32);
    bufp->fullIData(oldp+233,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__w),32);
    bufp->fullIData(oldp+234,(vlSelf->functionalTB__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk1__DOT__unnamedblk2__DOT__s),32);
}
