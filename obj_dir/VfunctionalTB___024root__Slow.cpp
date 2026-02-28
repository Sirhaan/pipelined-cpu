// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfunctionalTB.h for the primary calling header

#include "VfunctionalTB__pch.h"
#include "VfunctionalTB__Syms.h"
#include "VfunctionalTB___024root.h"

void VfunctionalTB___024root___ctor_var_reset(VfunctionalTB___024root* vlSelf);

VfunctionalTB___024root::VfunctionalTB___024root(VfunctionalTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VfunctionalTB___024root___ctor_var_reset(this);
}

void VfunctionalTB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VfunctionalTB___024root::~VfunctionalTB___024root() {
}
