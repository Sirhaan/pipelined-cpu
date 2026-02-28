// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfunctionalTB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VfunctionalTB::VfunctionalTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VfunctionalTB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VfunctionalTB::VfunctionalTB(const char* _vcname__)
    : VfunctionalTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VfunctionalTB::~VfunctionalTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VfunctionalTB___024root___eval_debug_assertions(VfunctionalTB___024root* vlSelf);
#endif  // VL_DEBUG
void VfunctionalTB___024root___eval_static(VfunctionalTB___024root* vlSelf);
void VfunctionalTB___024root___eval_initial(VfunctionalTB___024root* vlSelf);
void VfunctionalTB___024root___eval_settle(VfunctionalTB___024root* vlSelf);
void VfunctionalTB___024root___eval(VfunctionalTB___024root* vlSelf);

void VfunctionalTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfunctionalTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfunctionalTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VfunctionalTB___024root___eval_static(&(vlSymsp->TOP));
        VfunctionalTB___024root___eval_initial(&(vlSymsp->TOP));
        VfunctionalTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VfunctionalTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VfunctionalTB::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VfunctionalTB::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VfunctionalTB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VfunctionalTB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VfunctionalTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VfunctionalTB___024root___eval_final(VfunctionalTB___024root* vlSelf);

VL_ATTR_COLD void VfunctionalTB::final() {
    VfunctionalTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VfunctionalTB::hierName() const { return vlSymsp->name(); }
const char* VfunctionalTB::modelName() const { return "VfunctionalTB"; }
unsigned VfunctionalTB::threads() const { return 1; }
void VfunctionalTB::prepareClone() const { contextp()->prepareClone(); }
void VfunctionalTB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VfunctionalTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VfunctionalTB___024root__trace_decl_types(VerilatedVcd* tracep);

void VfunctionalTB___024root__trace_init_top(VfunctionalTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfunctionalTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfunctionalTB___024root*>(voidSelf);
    VfunctionalTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VfunctionalTB___024root__trace_decl_types(tracep);
    VfunctionalTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VfunctionalTB___024root__trace_register(VfunctionalTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VfunctionalTB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VfunctionalTB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VfunctionalTB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
