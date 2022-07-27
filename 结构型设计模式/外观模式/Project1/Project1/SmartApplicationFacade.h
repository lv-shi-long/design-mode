#pragma once

#include "Aircondition.h"
#include "TV.h"
#include "Light.h"
class SmartApplicationFacade
{
private:
	TV* tv;
	Aircondition* air;
	Light* li;

public:
	SmartApplicationFacade()
	{
		tv = new TV();
		air = new  Aircondition();
		li = new Light();
	}

	void DealWithMessage(string c)
	{
		if (c.find("on") != c.npos)
		{
			On();
		}
		else if (c.find("off") != c.npos)
		{
			Off();
		}
		else
		{
			cout << "no thing to do" << endl;
		}
	}

private:

	void On()
	{
		tv->TVOn();
		li->LightOn();
		air->AirconditionOn();
	}
	void Off()
	{
		tv->TVOff();
		li->LightOff();
		air->AirconditionOff();
	}

};

