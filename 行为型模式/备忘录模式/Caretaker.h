#pragma once
#include "FighterMemento.h"
class Caretaker
{
private:
	FighterMemento fm;

public:
	Caretaker(): fm(0, 0 ,0)
	{
		
	}
	void SetMemento(FighterMemento f)
	{
		fm = f;
	}

	FighterMemento GetMemento()
	{
		return fm;
	}
};

