#pragma once
#include "Strategy.h"
class StrategyA :
    public Strategy
{
public:
    virtual void Show()
    {
        cout << "����A �� ��һ��һ" << endl;
    }
};

