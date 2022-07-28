#pragma once
#include "common.h"
class Receiver
{
public:

	void CookFood(string s, int i)
	{
		for (int j = 0; j < i; j++)
		{
			cout << s << " +1 ";
		}
		cout << endl;
	}
};

