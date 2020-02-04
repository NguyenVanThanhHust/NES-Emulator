#include "cpu_6502.h"
#include "Bus.h"

cpu_6502::cpu_6502()
{
}

cpu_6502::~cpu_6502()
{
}

uint8_t cpu_6502::read(uint16_t a)
{
	return bus->read(a, false);
}
void cpu_6502::write(uint16_t a, uint8_t d)
{
	bus->write(a, d);
}