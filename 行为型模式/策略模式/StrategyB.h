#pragma once
#include "Strategy.h"
class StrategyB :
    public Strategy
{
public:
    virtual void Show()
    {
        cout << "����B �� ��60��5" << endl;
    }
};

