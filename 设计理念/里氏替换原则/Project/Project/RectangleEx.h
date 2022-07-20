#pragma once
#include "Quadrilateral.h"
class RectangleEx :
    public Quadrilateral
{
private:
    int Length;
    int Width;
public:
    virtual int GetLength()
    {
        return Length;
    }
    virtual int GetWidth()
    {
        return Width;
    }

    void SetWidth(int w)
    {
        Width = w;
    }

    void SetLength(int l)
    {
        Length = l;
    }
};

