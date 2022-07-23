#pragma once
#include "Garnish.h"
class Egg :
    public Garnish
{
public:
    Egg(FastFood* ffd) : Garnish(ffd, 2.0, "¼¦µ°") {}

    virtual float Cost()
    {
        return GetPrice() + GetFastFood()->Cost();
    }

    string GetDesc()
    {
        return Garnish::GetDesc() + GetFastFood()->GetDesc();
    }
};

