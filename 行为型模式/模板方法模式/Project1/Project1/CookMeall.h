#pragma once
#include "Abstract.h"
class CookMeall :
    public Abstract
{
public:
    virtual void PourVegetable()
    {
        cout << "倒入牛肉" << endl;
    }

    virtual void PourFlavour()
    {
        cout << "倒入的是辣椒" << endl;
    }
};

