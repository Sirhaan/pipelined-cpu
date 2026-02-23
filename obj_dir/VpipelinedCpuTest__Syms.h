// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIPELINEDCPUTEST__SYMS_H_
#define VERILATED_VPIPELINEDCPUTEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VpipelinedCpuTest.h"

// INCLUDE MODULE CLASSES
#include "VpipelinedCpuTest___024root.h"
#include "VpipelinedCpuTest___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VpipelinedCpuTest__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VpipelinedCpuTest* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VpipelinedCpuTest___024root    TOP;
    VpipelinedCpuTest___024unit    TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_pipelinedCpuTest;

    // CONSTRUCTORS
    VpipelinedCpuTest__Syms(VerilatedContext* contextp, const char* namep, VpipelinedCpuTest* modelp);
    ~VpipelinedCpuTest__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
