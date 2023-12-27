#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Valu.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Valu* top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Valu;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("alu.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();

    int i = 0;
    while(i < 10){
    	i++;
    	top->A = 0b0100;     // 二进制: 0b0100
    	top->B = 0b1101;    // 二进制补码: 0b1101
    	top->opcode = 0b011; // 二进制: 0b011
    	step_and_dump_wave();
    
    }
   
   
    sim_exit();
}
