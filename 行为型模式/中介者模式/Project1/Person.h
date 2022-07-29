#pragma once
#include "common.h"
class Mediator;

class Person
{
protected:
	string name;
	Mediator* me;

public:
	Person(string n, Mediator* m) :name(n), me(m) {}
	//void Contact(string n, Mediator* m);
};

