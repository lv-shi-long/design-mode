#pragma once
#include "AbstractFactory.h"
#include "Desert.h"
#include "LateeDesert.h"
#include "AmericanDesert.h"
#include "AmericanCoffee.h"
class AmericanFactory :
    public AbstractFactory
{
public:
    Coffee* CreateCoffee()
    {
        return new AmericanCoffee();
    }
    Desert* CreateDesert()
    {
        return new AmericanDesert();
    }
};

