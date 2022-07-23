#pragma once
#include "FastFood.h"
class FriedRice :
    public FastFood
{
public:
    FriedRice() : FastFood(10, "³´·¹") {}

    float Cost()
    {
        return GetPrice();
    }
};

