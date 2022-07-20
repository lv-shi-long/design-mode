#pragma once
#include "common.h"
#include "Coffee.h"
#include "LateeCoffe.h"
#include "AmericanDesert.h"
#include "AmericanDesert.h"
#include "LateeDesert.h"


class AbstractFactory
{
public:
	virtual Coffee* CreateCoffee() = 0;
	virtual Desert* CreateDesert() = 0;
};

