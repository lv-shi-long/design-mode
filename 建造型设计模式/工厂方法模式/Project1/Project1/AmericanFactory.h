#pragma once
#include "AbstractFactory.h"
class AmericanFactory :
    public AbstractFactory
{
public:
    Coffee* CreateCoffee()
    {
        return new AmericanCoffee();
    }
};


