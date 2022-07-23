#pragma once
#include "FastFood.h"
class FriedNoodle :
    public FastFood
{
public:
    FriedNoodle() : FastFood(20.0, "����") {}

    float Cost()
    {
        return GetPrice();
    }
};

