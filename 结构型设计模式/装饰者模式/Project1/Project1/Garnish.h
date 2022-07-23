#pragma once
#include "FastFood.h"
class Garnish :
    public FastFood
{
private:
    FastFood* ffd;

public:
    Garnish(FastFood* fd, float pr, string desc) : FastFood(pr, desc)
    {
        ffd = fd;
    }


    FastFood* GetFastFood()
    {
        return ffd;
    }
    virtual float Cost() = 0;

};

