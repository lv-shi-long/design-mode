#pragma once
#include "FastFood.h"
class FriedRice :
    public FastFood
{
public:
    FriedRice() : FastFood(10, "����") {}

    float Cost()
    {
        return GetPrice();
    }
};

