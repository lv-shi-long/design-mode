#pragma once
#include "Coffee.h"
#include "LateeCoffe.h"
#include "AmericanCoffee.h"
class SimpleFactory
{
public:
	Coffee* CreateCoffee(string type)
	{
		Coffee* res = NULL;
		if (type == "Latee")
		{
			res = new LateeCoffe();
		} 
		else if (type == "AmericanCoffee")
		{
			res = new AmericanCoffee();
		}
		else
		{
			cout << "no type applied" << endl;
		}
		return res;
	}
};

