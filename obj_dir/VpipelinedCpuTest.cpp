// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VpipelinedCpuTest__pch.h"

//============================================================
// Constructors

VpipelinedCpuTest::VpipelinedCpuTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VpipelinedCpuTest__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VpipelinedCpuTest::VpipelinedCpuTest(const char* _vcname__)
    : VpipelinedCpuTest(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VpipelinedCpuTest::~VpipelinedCpuTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VpipelinedCpuTest___024root___eval_debug_assertions(VpipelinedCpuTest___024root* vlSelf);
#endif  // VL_DEBUG
void VpipelinedCpuTest___024root___eval_static(VpipelinedCpuTest___024root* vlSelf);
void VpipelinedCpuTest___024root___eval_initial(VpipelinedCpuTest___024root* vlSelf);
void VpipelinedCpuTest___024root___eval_settle(VpipelinedCpuTest___024root* vlSelf);
void VpipelinedCpuTest___024root___eval(VpipelinedCpuTest___024root* vlSelf);

void VpipelinedCpuTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VpipelinedCpuTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VpipelinedCpuTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VpipelinedCpuTest___024root___eval_static(&(vlSymsp->TOP));
        VpipelinedCpuTest___024root___eval_initial(&(vlSymsp->TOP));
        VpipelinedCpuTest___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VpipelinedCpuTest___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VpipelinedCpuTest::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VpipelinedCpuTest::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VpipelinedCpuTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VpipelinedCpuTest___024root___eval_final(VpipelinedCpuTest___024root* vlSelf);

VL_ATTR_COLD void VpipelinedCpuTest::final() {
    VpipelinedCpuTest___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VpipelinedCpuTest::hierName() const { return vlSymsp->name(); }
const char* VpipelinedCpuTest::modelName() const { return "VpipelinedCpuTest"; }
unsigned VpipelinedCpuTest::threads() const { return 1; }
void VpipelinedCpuTest::prepareClone() const { contextp()->prepareClone(); }
void VpipelinedCpuTest::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VpipelinedCpuTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VpipelinedCpuTest::trace()' called on model that was Verilated without --trace option");
}
