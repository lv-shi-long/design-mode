#pragma once
#include "common.h"
class Abstract
{
public:

	void PourOil()
	{
		cout << "����" << endl;
	}

	virtual void PourVegetable() = 0;

	virtual void PourFlavour() = 0;

	void Fring()
	{
		cout << "����" << endl;
	}

	void Cook()
	{
		PourOil();
		PourVegetable();
		PourFlavour();
		Fring();
	}
};

