#pragma once
#include "OperationSystem.h"
class WindowsSystem :
    public OperationSystem
{
public:
    WindowsSystem(VideoFile* v) :OperationSystem(v) {}
    virtual void Display(string file)
    {
        vf->Play(file);
    }
};

