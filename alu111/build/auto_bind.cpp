#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top) {
	nvboard_bind_pin( &top->A, BIND_RATE_SCR, BIND_DIR_IN , 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->B, BIND_RATE_SCR, BIND_DIR_IN , 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->opcode, BIND_RATE_SCR, BIND_DIR_IN , 3, SW10, SW9, SW8);
	nvboard_bind_pin( &top->out, BIND_RATE_SCR, BIND_DIR_OUT, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->carry_out, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD4);
	nvboard_bind_pin( &top->overflow, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD5);
	nvboard_bind_pin( &top->equal, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD6);
}
