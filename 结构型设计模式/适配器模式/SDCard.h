#pragma once
#include "common.h"
class SDCard
{
public:

	virtual void WriteSD(string s) = 0;
	virtual string ReadSD() = 0;
};

