// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIcachecontroller.h for the primary calling header

#ifndef VERILATED_VICACHECONTROLLER___024UNIT_H_
#define VERILATED_VICACHECONTROLLER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VIcachecontroller__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIcachecontroller___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VIcachecontroller__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIcachecontroller___024unit(VIcachecontroller__Syms* symsp, const char* v__name);
    ~VIcachecontroller___024unit();
    VL_UNCOPYABLE(VIcachecontroller___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
