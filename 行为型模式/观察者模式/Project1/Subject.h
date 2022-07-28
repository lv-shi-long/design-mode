#pragma once
#include "WeiXinUser.h"
class Subject
{
public:

	virtual void Attach(Observer* ob) = 0;
	virtual void Notify(string s) = 0;
};

