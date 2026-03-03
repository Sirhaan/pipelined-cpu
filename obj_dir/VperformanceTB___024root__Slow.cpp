// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VperformanceTB.h for the primary calling header

#include "VperformanceTB__pch.h"
#include "VperformanceTB__Syms.h"
#include "VperformanceTB___024root.h"

void VperformanceTB___024root___ctor_var_reset(VperformanceTB___024root* vlSelf);

VperformanceTB___024root::VperformanceTB___024root(VperformanceTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VperformanceTB___024root___ctor_var_reset(this);
}

void VperformanceTB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VperformanceTB___024root::~VperformanceTB___024root() {
}
