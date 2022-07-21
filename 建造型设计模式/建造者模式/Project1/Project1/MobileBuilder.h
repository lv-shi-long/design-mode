#pragma once
#include "Builder.h"
class MobileBuilder :
    public Builder
{
public:

	virtual void BuildFrame()
	{
		bi->SetFrame("Mobile Frame");
	}
	virtual void BuildSeat()
	{
		bi->SetSeat("Mobile Seate");
	}
	virtual Bike* CreateBike()
	{
		return bi;
	}
};

