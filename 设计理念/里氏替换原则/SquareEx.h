#pragma once
#include "Quadrilateral.h"
class SquareEx :
    public Quadrilateral
{
private:
    int Side;
public:
    virtual int GetLength()
    {
        return Side;
    }
    virtual int GetWidth()
    {
        return Side;
    }

    void SetWidth(int w)
    {
        Side = w;
    }

    void SetLength(int l)
    {
        Side = l;
    }
};

