#pragma once
#include "Abstract.h"
class CookCaiXin :
    public Abstract
{
public:
    virtual void PourVegetable()
    {
        cout << "�����߲�" << endl;
    }

    virtual void PourFlavour()
    {
        cout << "������ǻ���" << endl;
    }
};

