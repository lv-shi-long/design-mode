#pragma once
#include "common.h"
class AbstractBox
{
public:

	virtual string GetShape() = 0;

	void Display(string color) // �����color �ǲ��ɹ���ġ��ⲿ��ɫ
	{
		cout << GetShape() << " color is " << color << endl;
	}
};

