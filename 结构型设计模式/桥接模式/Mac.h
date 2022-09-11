#pragma once
#include "OperationSystem.h"
class Mac :
    public OperationSystem
{
public:
    Mac(VideoFile* v) :OperationSystem(v) {}
    virtual void Display(string file)
    {
        vf->Play(file);
    }
};

