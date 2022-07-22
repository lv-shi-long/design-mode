#pragma once
#include "common.h"
#include "SDCard.h"
class Computer
{
public:
	string RedadSD(SDCard* sd)
	{
		return sd->ReadSD();
	}

	void WrireSD(SDCard* sd)
	{
		sd->WriteSD("hello");
	}
};

