// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VpipelinedCpuTest.h for the primary calling header

#include "VpipelinedCpuTest__pch.h"
#include "VpipelinedCpuTest__Syms.h"
#include "VpipelinedCpuTest___024root.h"

void VpipelinedCpuTest___024root___ctor_var_reset(VpipelinedCpuTest___024root* vlSelf);

VpipelinedCpuTest___024root::VpipelinedCpuTest___024root(VpipelinedCpuTest__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VpipelinedCpuTest___024root___ctor_var_reset(this);
}

void VpipelinedCpuTest___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VpipelinedCpuTest___024root::~VpipelinedCpuTest___024root() {
}
