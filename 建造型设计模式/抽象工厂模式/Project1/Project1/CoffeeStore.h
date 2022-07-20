#pragma once
#include "AbstractFactory.h"
#include "AmericanCoffee.h"
#include "LateeCoffe.h"
#include "AmericanDesert.h"
#include "LateeDesert.h"

class CoffeeStore
{
private:
	AbstractFactory* fa;
public:

	Coffee* OrderCoffee(AbstractFactory* fa)
	{
		Coffee* co = fa->CreateCoffee();
		co->AddMilk();
		co->AddSugar();
		return co;
	}

	Desert* OrderDesert(AbstractFactory* fa)
	{
		Desert* de = fa->CreateDesert();
		de->AddMilk();
		de->AddSugar();
		return de;
	}
};

