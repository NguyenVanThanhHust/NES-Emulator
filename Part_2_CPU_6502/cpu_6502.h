#pragma once
#include <cstdint>

class Bus;

class cpu_6502
{
public:
	cpu_6502();
	~cpu_6502();

	void ConnectBus(Bus* n) { bus = n };
private:
	Bus* bus = nullptr;
	uint8_t read(uint16_t a);
	void	write(uint16_t a, uint8_t d);
};

