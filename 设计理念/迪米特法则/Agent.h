#pragma once
#include "Fans.h"
#include "Star.h"
class Agent
{
private:
	Fans* fans;
	Star* star;
public:

	Agent(Fans* f, Star* s) : fans(f), star(s) {};

	void Metting()
	{
		cout << star->GetName() << " meeting with " << fans->GetName() << endl;
	}
};

