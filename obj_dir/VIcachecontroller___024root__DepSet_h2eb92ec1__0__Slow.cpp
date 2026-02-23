// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIcachecontroller.h for the primary calling header

#include "VIcachecontroller__pch.h"
#include "VIcachecontroller___024root.h"

VL_ATTR_COLD void VIcachecontroller___024root___eval_static(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIcachecontroller___024root___eval_final(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__stl(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIcachecontroller___024root___eval_phase__stl(VIcachecontroller___024root* vlSelf);

VL_ATTR_COLD void VIcachecontroller___024root___eval_settle(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_settle\n"); );
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
            VIcachecontroller___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cache/lruPOL.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIcachecontroller___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__stl(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIcachecontroller___024root___stl_sequent__TOP__0(VIcachecontroller___024root* vlSelf);

VL_ATTR_COLD void VIcachecontroller___024root___eval_stl(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIcachecontroller___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VIcachecontroller___024root___eval_triggers__stl(VIcachecontroller___024root* vlSelf);

VL_ATTR_COLD bool VIcachecontroller___024root___eval_phase__stl(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIcachecontroller___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIcachecontroller___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__ico(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__act(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge pipelinedCpuTest.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIcachecontroller___024root___dump_triggers__nba(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge pipelinedCpuTest.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIcachecontroller___024root___ctor_var_reset(VIcachecontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIcachecontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIcachecontroller___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->access_way = VL_RAND_RESET_I(2);
    vlSelf->set_idx = VL_RAND_RESET_I(4);
    vlSelf->update = VL_RAND_RESET_I(1);
    vlSelf->valid_ways = VL_RAND_RESET_I(4);
    vlSelf->victim_way = VL_RAND_RESET_I(2);
    vlSelf->address = VL_RAND_RESET_I(32);
    vlSelf->Write_data = VL_RAND_RESET_I(32);
    vlSelf->MemWrite = VL_RAND_RESET_I(1);
    vlSelf->MemRead = VL_RAND_RESET_I(1);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->Read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->BPLRU__DOT__lru_bits[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->BPLRU__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipelinedCpuTest__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__nextPc = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4IF = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ic_ready = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcWrite = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFflush = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__IFIDwrite = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1ID = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2ID = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmID = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__instID = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__pcPlus4ID = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalCRLTID = VL_RAND_RESET_I(9);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBEX = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMEX = VL_RAND_RESET_I(3);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__EXEX = VL_RAND_RESET_I(4);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData1EX = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__regData2EX = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__signExtImmEX = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__RsEX = VL_RAND_RESET_I(5);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__RtEX = VL_RAND_RESET_I(5);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__RdEX = VL_RAND_RESET_I(5);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__FuncEX = VL_RAND_RESET_I(6);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxAout = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluMuxBFwd = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluInb = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluCtrlEX = VL_RAND_RESET_I(4);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBMEM = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__MEMMEM = VL_RAND_RESET_I(3);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResMEM = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeDataMEM = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegMEM = VL_RAND_RESET_I(5);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_ready = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__WBWB = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__AluResWB = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__writeRegWB = VL_RAND_RESET_I(5);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__finalResultWB = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__dc_stall = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__PC__DOT__PCRegister = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_rdata = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_read = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__m_ready = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(23);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru_update = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(23);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(7);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__cpu_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__unnamedblk2__DOT__s = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s = 0;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__ICACHE__DOT__mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__Reg_Files_instance__DOT__Register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__ALUUnit__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_addr = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_wdata = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_rdata = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_read = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_write = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__m_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__data_array[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__tag_array[__Vi0][__Vi1] = VL_RAND_RESET_I(23);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__dirtyBits[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_read_op = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__is_write_op = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_tag = VL_RAND_RESET_I(23);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__fill_set = VL_RAND_RESET_I(7);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__addr_active = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__way_hit = VL_RAND_RESET_I(2);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__hit_way_index = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__victim_way = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru_update_en = VL_RAND_RESET_I(1);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__unnamedblk2__DOT__unnamedblk3__DOT__s = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__tree[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__ctrl__DOT__lru__DOT__unnamedblk4__DOT__s = 0;
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipelinedCpuTest__DOT__dut__DOT__D_CACHE__DOT__mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pipelinedCpuTest__DOT__clk__0 = VL_RAND_RESET_I(1);
}
