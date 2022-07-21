#pragma once
#include "Builder.h"
class OfoBuilder :
    public Builder
{
public:
	virtual void BuildFrame()
	{
		bi->SetFrame("Ofo Frame");
	}
	virtual void BuildSeat()
	{
		bi->SetSeat("Ofo Seate");
	}
	virtual Bike* CreateBike()
	{
		return bi;
	}
};

