// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VperformanceTB__pch.h"
#include "verilated_vcd_c.h"

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
    vlSymsp->__Vm_activity = true;
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

void VperformanceTB::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VperformanceTB::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
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
std::unique_ptr<VerilatedTraceConfig> VperformanceTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VperformanceTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VperformanceTB___024root__trace_init_top(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VperformanceTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VperformanceTB___024root*>(voidSelf);
    VperformanceTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VperformanceTB___024root__trace_decl_types(tracep);
    VperformanceTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VperformanceTB___024root__trace_register(VperformanceTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VperformanceTB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VperformanceTB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VperformanceTB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
