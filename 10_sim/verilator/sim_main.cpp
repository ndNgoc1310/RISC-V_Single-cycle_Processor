#include "Vtestbench.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtestbench* tb = new Vtestbench;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    tb->trace(tfp, 99);
    tfp->open("wave.vcd");

    tb->rst = 1;
    for (int i = 0; i < 2; ++i) {
        tb->clk = 0; tb->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
        tb->clk = 1; tb->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
    }
    tb->rst = 0;

    while (!Verilated::gotFinish()) {
        tb->clk = 0; tb->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
        tb->clk = 1; tb->eval(); tfp->dump(Verilated::time()); Verilated::timeInc(5);
    }

    tfp->close();
    delete tb;
    return 0;
}
