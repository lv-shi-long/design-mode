#pragma once
#include "common.h"
#include "Coffee.h"
#include "LateeCoffe.h"
#include "AmericanCoffee.h"

class AbstractFactory
{
public:
	virtual Coffee* CreateCoffee() = 0;
};

