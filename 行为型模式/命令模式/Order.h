#pragma once
#include <map>
#include <set>
#include "common.h"
class Order
{
public:
	int diningTable;
	map<string, int> order;

	void SetOrder(int d, map<string, int>& m)
	{
		diningTable = d;
		order = m;
	}
};

