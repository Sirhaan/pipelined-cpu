// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VICACHECONTROLLER__SYMS_H_
#define VERILATED_VICACHECONTROLLER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VIcachecontroller.h"

// INCLUDE MODULE CLASSES
#include "VIcachecontroller___024root.h"
#include "VIcachecontroller___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VIcachecontroller__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VIcachecontroller* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VIcachecontroller___024root    TOP;
    VIcachecontroller___024unit    TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_pipelinedCpuTest;

    // CONSTRUCTORS
    VIcachecontroller__Syms(VerilatedContext* contextp, const char* namep, VIcachecontroller* modelp);
    ~VIcachecontroller__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
