#pragma once

#include "Dog.h"
#include "Cat.h"
#include "Owner.h"
#include "SomeOne.h"
#include <list>
class Home
{
private:
	list<Animal*> ls;

public:
	void Add(Animal* an)
	{
		ls.push_back(an);
	}

	void Action(AbstractVisitor* ab)
	{
		for (auto it = ls.begin(); it != ls.end(); it++)
		{
			(*it)->accept(ab);
		}
	}
};

