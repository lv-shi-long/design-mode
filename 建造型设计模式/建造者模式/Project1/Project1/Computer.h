#pragma once
#include "common.h"
class Computer
{
private:
	string cpu;
	string memory;
	string board;

public:
	class ComputerBuilder {
	public:
		string cpu;
		string memory;
		string board;

	public:
		ComputerBuilder* BuildCpu(string cp)
		{
			this->cpu = cp;
			return this;
		}

		ComputerBuilder* BuildMemory(string me)
		{
			this->memory = me;
			return this;
		}

		ComputerBuilder* BuildBoard(string bo)
		{
			this->board = bo;
			return this;
		}

		Computer* BuildComputerEnd()
		{
			return new Computer(this);
		}
	};

	Computer(ComputerBuilder* cob)
	{
		this->cpu = cob->cpu;
		this->memory = cob->memory;
		this->board = cob->board;
	}

	void Show()
	{
		cout << "cpu: " << this->cpu << " memory: " << this->memory << " board: " << this->board << endl;
	}

};

