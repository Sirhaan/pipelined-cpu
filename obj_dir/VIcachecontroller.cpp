// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIcachecontroller__pch.h"

//============================================================
// Constructors

VIcachecontroller::VIcachecontroller(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIcachecontroller__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , CLK{vlSymsp->TOP.CLK}
    , rst{vlSymsp->TOP.rst}
    , access_way{vlSymsp->TOP.access_way}
    , set_idx{vlSymsp->TOP.set_idx}
    , update{vlSymsp->TOP.update}
    , valid_ways{vlSymsp->TOP.valid_ways}
    , victim_way{vlSymsp->TOP.victim_way}
    , MemWrite{vlSymsp->TOP.MemWrite}
    , MemRead{vlSymsp->TOP.MemRead}
    , address{vlSymsp->TOP.address}
    , Write_data{vlSymsp->TOP.Write_data}
    , Read_data{vlSymsp->TOP.Read_data}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VIcachecontroller::VIcachecontroller(const char* _vcname__)
    : VIcachecontroller(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIcachecontroller::~VIcachecontroller() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIcachecontroller___024root___eval_debug_assertions(VIcachecontroller___024root* vlSelf);
#endif  // VL_DEBUG
void VIcachecontroller___024root___eval_static(VIcachecontroller___024root* vlSelf);
void VIcachecontroller___024root___eval_initial(VIcachecontroller___024root* vlSelf);
void VIcachecontroller___024root___eval_settle(VIcachecontroller___024root* vlSelf);
void VIcachecontroller___024root___eval(VIcachecontroller___024root* vlSelf);

void VIcachecontroller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIcachecontroller::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIcachecontroller___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIcachecontroller___024root___eval_static(&(vlSymsp->TOP));
        VIcachecontroller___024root___eval_initial(&(vlSymsp->TOP));
        VIcachecontroller___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIcachecontroller___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIcachecontroller::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VIcachecontroller::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VIcachecontroller::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIcachecontroller___024root___eval_final(VIcachecontroller___024root* vlSelf);

VL_ATTR_COLD void VIcachecontroller::final() {
    VIcachecontroller___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIcachecontroller::hierName() const { return vlSymsp->name(); }
const char* VIcachecontroller::modelName() const { return "VIcachecontroller"; }
unsigned VIcachecontroller::threads() const { return 1; }
void VIcachecontroller::prepareClone() const { contextp()->prepareClone(); }
void VIcachecontroller::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VIcachecontroller::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VIcachecontroller::trace()' called on model that was Verilated without --trace option");
}
