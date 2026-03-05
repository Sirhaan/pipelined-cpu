// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VperformanceTB__pch.h"

//============================================================
// Constructors

VperformanceTB::VperformanceTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VperformanceTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VperformanceTB::VperformanceTB(const char* _vcname__)
    : VperformanceTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VperformanceTB::~VperformanceTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VperformanceTB___024root___eval_debug_assertions(VperformanceTB___024root* vlSelf);
#endif  // VL_DEBUG
void VperformanceTB___024root___eval_static(VperformanceTB___024root* vlSelf);
void VperformanceTB___024root___eval_initial(VperformanceTB___024root* vlSelf);
void VperformanceTB___024root___eval_settle(VperformanceTB___024root* vlSelf);
void VperformanceTB___024root___eval(VperformanceTB___024root* vlSelf);

void VperformanceTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VperformanceTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VperformanceTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VperformanceTB___024root___eval_static(&(vlSymsp->TOP));
        VperformanceTB___024root___eval_initial(&(vlSymsp->TOP));
        VperformanceTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VperformanceTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VperformanceTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VperformanceTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VperformanceTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VperformanceTB___024root___eval_final(VperformanceTB___024root* vlSelf);

VL_ATTR_COLD void VperformanceTB::final() {
    VperformanceTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VperformanceTB::hierName() const { return vlSymsp->name(); }
const char* VperformanceTB::modelName() const { return "VperformanceTB"; }
unsigned VperformanceTB::threads() const { return 1; }
void VperformanceTB::prepareClone() const { contextp()->prepareClone(); }
void VperformanceTB::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VperformanceTB::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VperformanceTB::trace()' called on model that was Verilated without --trace option");
}
