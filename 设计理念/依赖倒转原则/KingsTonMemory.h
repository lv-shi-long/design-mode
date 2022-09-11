#pragma once
#include "Memory.h"
class KingsTonMemory :
    public Memory
{
private:
    string Name;
public:
    virtual void Save(string s)
    {
        Name = s;
    }
};

