#pragma once
#include "common.h"
class Abstract
{
public:

	void PourOil()
	{
		cout << "µ½ÓÍ" << endl;
	}

	virtual void PourVegetable() = 0;

	virtual void PourFlavour() = 0;

	void Fring()
	{
		cout << "·­³´" << endl;
	}

	void Cook()
	{
		PourOil();
		PourVegetable();
		PourFlavour();
		Fring();
	}
};

