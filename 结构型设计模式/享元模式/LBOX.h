#pragma once
#include "AbstractBox.h"
class LBOX :
    public AbstractBox
{
public:
    string GetShape()
    {
        return "LBOX";
    }
};

