#pragma once

#include "common.h"

class Person;
class Mediator
{
public:
	virtual void Contact(string message, Person* p) = 0;
};

