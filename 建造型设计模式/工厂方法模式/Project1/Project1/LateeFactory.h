#pragma once
#include "AbstractFactory.h"
class LateeFactory :
    public AbstractFactory
{
public:
    Coffee* CreateCoffee()
    {
        return new LateeCoffe();
    }
};

