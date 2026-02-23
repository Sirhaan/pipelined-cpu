// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VpipelinedCpuTest.h for the primary calling header

#include "VpipelinedCpuTest__pch.h"
#include "VpipelinedCpuTest___024unit.h"

VL_ATTR_COLD void VpipelinedCpuTest___024unit___ctor_var_reset(VpipelinedCpuTest___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VpipelinedCpuTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VpipelinedCpuTest___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
