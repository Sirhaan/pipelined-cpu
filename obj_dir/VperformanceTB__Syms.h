// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPERFORMANCETB__SYMS_H_
#define VERILATED_VPERFORMANCETB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VperformanceTB.h"

// INCLUDE MODULE CLASSES
#include "VperformanceTB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VperformanceTB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VperformanceTB* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VperformanceTB___024root       TOP;

    // CONSTRUCTORS
    VperformanceTB__Syms(VerilatedContext* contextp, const char* namep, VperformanceTB* modelp);
    ~VperformanceTB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
