#pragma once

#include "common.h"
#include "FighterMemento.h"
class Fighter
{
private:
	int vit;
	int atk;
	int def;

public:
	Fighter()
	{
		vit = atk = def = 100;
	}

	void Beat()
	{
		vit -= 10;
		atk -= 20;
		def -= 30;
	}

	void RecoverState(FighterMemento fm)
	{
		vit = fm.vit;
		atk = fm.atk;
		def = fm.def;
	}

	FighterMemento SaveState()
	{
		return FighterMemento(vit, atk, def);
	}

	void Display()
	{
		cout << "vit: " << vit << " atk: " << atk << " def: " << def << endl;
	}

};

