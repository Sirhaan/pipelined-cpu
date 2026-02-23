// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VpipelinedCpuTest.h for the primary calling header

#ifndef VERILATED_VPIPELINEDCPUTEST___024UNIT_H_
#define VERILATED_VPIPELINEDCPUTEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VpipelinedCpuTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VpipelinedCpuTest___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    VpipelinedCpuTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VpipelinedCpuTest___024unit(VpipelinedCpuTest__Syms* symsp, const char* v__name);
    ~VpipelinedCpuTest___024unit();
    VL_UNCOPYABLE(VpipelinedCpuTest___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
