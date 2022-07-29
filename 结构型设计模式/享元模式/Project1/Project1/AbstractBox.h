#pragma once
#include "common.h"
class AbstractBox
{
public:

	virtual string GetShape() = 0;

	void Display(string color) // 这里的color 是不可共享的。外部角色
	{
		cout << GetShape() << " color is " << color << endl;
	}
};

