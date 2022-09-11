#pragma once
#include "common.h"

class Rectangle
{
private:
	int Length;
	int Width;
public:
	int GetWidth()
	{
		return Width;
	}

	int GetLength()
	{
		return Length;
	}

	virtual void SetWidth(int w)
	{
		Width = w;
	}

	virtual void SetLength(int l)
	{
		Length = l;
	}
};

