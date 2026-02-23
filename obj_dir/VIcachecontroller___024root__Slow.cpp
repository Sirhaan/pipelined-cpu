// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIcachecontroller.h for the primary calling header

#include "VIcachecontroller__pch.h"
#include "VIcachecontroller__Syms.h"
#include "VIcachecontroller___024root.h"

void VIcachecontroller___024root___ctor_var_reset(VIcachecontroller___024root* vlSelf);

VIcachecontroller___024root::VIcachecontroller___024root(VIcachecontroller__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIcachecontroller___024root___ctor_var_reset(this);
}

void VIcachecontroller___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VIcachecontroller___024root::~VIcachecontroller___024root() {
}
