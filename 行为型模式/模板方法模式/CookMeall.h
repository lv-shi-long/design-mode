#pragma once
#include "Abstract.h"
class CookMeall :
    public Abstract
{
public:
    virtual void PourVegetable()
    {
        cout << "����ţ��" << endl;
    }

    virtual void PourFlavour()
    {
        cout << "�����������" << endl;
    }
};

