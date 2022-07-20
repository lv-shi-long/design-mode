#pragma once
#include "AbstractFactory.h"
#include "SimpleFactory.h"
class CoffeeStore
{
private:
	AbstractFactory* fa;
public:

	Coffee* OrderCoffee(string type)
	{
		SimpleFactory fa;
		Coffee * res = fa.CreateCoffee(type);
		res->AddMilk();
		res->AddSugar();
		return res;
	}

	Coffee* OrderCoffeEx(AbstractFactory* fa)
	{
		Coffee* res = fa->CreateCoffee();
		res->AddMilk();
		res->AddSugar();
		return res;
	}
};

