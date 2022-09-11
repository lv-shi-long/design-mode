#pragma once
#include "Rectangle.h"
#include "common.h"
class Square :
    public Rectangle
{
public:
	void SetWidth(int w)
	{
		Rectangle::SetLength(w);
		Rectangle::SetWidth(w);
	}

	void SetLength(int l)
	{
		Rectangle::SetLength(l);
		Rectangle::SetWidth(l);
	}
};



