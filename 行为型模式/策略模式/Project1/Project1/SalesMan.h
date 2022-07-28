#pragma once

#include "StrategyA.h"
#include "StrategyB.h"
class SalesMan
{
private:
	Strategy* st;
public:
	SalesMan(Strategy* s) :st(s) {}

	void SalesManShow()
	{
		st->Show();
	}
};

