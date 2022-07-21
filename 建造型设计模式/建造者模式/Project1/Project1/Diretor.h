#pragma once
#include "MobileBuilder.h"
#include "OfoBuilder.h"

class Diretor
{
public:
	Diretor(Builder* bu) : builder(bu) {};

	Bike* Construct()
	{
		builder->BuildFrame();
		builder->BuildSeat();
		return builder->CreateBike();
	}
private:
	Builder* builder;
};

