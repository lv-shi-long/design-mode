#pragma once
#include "Abstract.h"
class CookCaiXin :
    public Abstract
{
public:
    virtual void PourVegetable()
    {
        cout << "倒入蔬菜" << endl;
    }

    virtual void PourFlavour()
    {
        cout << "倒入的是花椒" << endl;
    }
};

