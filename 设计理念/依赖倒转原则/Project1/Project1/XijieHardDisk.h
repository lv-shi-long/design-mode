#pragma once
#include "HardDisk.h"
class XijieHardDisk :
    public HardDisk
{
    string Name;
public:
    void Save(string s)
    {
        Name = s;
    }
    string Get()
    {
        return Name;
    }
};

