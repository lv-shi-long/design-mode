#pragma once
#include "Cpu.h"
class IntelCpu :
    public Cpu
{
public:
    virtual void Run()
    {
        cout << "intel cpu begin to run" << endl;
    }
};

