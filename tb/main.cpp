#include "VfunctionalTB.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VfunctionalTB* top = new VfunctionalTB;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("functionalTB.vcd");
    uint64_t sim_time = 0;
    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(sim_time);
        sim_time += 5; // half clock period
    }
    tfp->close();
    delete top;
    return 0;
}