#pragma once
#include "ConcreteCommond.h"
#include <list>
class Invoker
{
public:
	list<Commond*> lc;

	void Execute()
	{
		for (auto it = lc.begin(); it != lc.end(); it++)
		{
			(*it)->Execute();
		}
	}
	

};

