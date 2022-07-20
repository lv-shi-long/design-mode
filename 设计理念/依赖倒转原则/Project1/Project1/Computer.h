#pragma once

#include "Cpu.h"
#include "HardDisk.h"
#include "Memory.h"

class Computer
{
private:
	Cpu *cpu;
	HardDisk *hd;
	Memory* me;

public:
	Computer(Cpu* cpu, HardDisk* hd, Memory* me)
	{
		this->cpu = cpu;
		this->hd = hd;
		this->me = me;
	}

	void Run()
	{
		cout << "computer work" << endl;
	}
};

