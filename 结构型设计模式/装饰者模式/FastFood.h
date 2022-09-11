#pragma once
#include "common.h"
class FastFood
{
public:
	virtual float GetPrice()
	{
		return price;
	}

	virtual string GetDesc()
	{
		return desc;
	}

	FastFood(float pr, string de) :price(pr), desc(de) {}

	virtual float Cost() = 0;
private:
	string desc;
	float price;
};

