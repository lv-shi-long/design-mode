#pragma once
#include "Garnish.h"
class Bacon :
    public Garnish
{
public:
    Bacon(FastFood* ffd) : Garnish(ffd, 3.0, "Åà¸ù") {}

    virtual float Cost()
    {
        return GetPrice() + GetFastFood()->Cost();
    }

    string GetDesc()
    {
        return Garnish::GetDesc() + GetFastFood()->GetDesc();
    }
};

