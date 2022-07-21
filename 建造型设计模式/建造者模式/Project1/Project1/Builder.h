#pragma once

#include "Bike.h"
class Builder
{
protected:
	Bike *bi = new Bike();
public:
	virtual void BuildFrame() = 0;
	virtual void BuildSeat() = 0;
	virtual Bike* CreateBike() = 0;
};

