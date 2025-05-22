#include "Valu_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Valu_tb* tb = new Valu_tb;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    tb->trace(tfp, 99);
    tfp->open("wave.vcd");

    // Initialize inputs (example values)
    tb->a = 0x0000000F;
    tb->b = 0x00000003;
    tb->ALUControl = 0b0010; // For example: ADD

    for (int i = 0; i < 10; ++i) {
        tb->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(10);
    }

    tfp->close();
    delete tb;
    return 0;
}
