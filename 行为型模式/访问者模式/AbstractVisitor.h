#pragma once
#include "common.h"
#include "Cat.h"
#include "Dog.h"

class AbstractVisitor
{
public:

	virtual void Visit(Cat* cat) = 0;

	virtual void Visit(Dog* dog) = 0;
};

