#pragma once
#include "AbstractBox.h"
class IBox :
    public AbstractBox
{
public:
    string GetShape()
    {
        return "IBOX";
    }
};

