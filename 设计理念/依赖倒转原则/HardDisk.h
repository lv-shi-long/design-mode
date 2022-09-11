#pragma once
#include "common.h"
class HardDisk
{
public:
	virtual void Save(string s) = 0;
	virtual string Get() = 0;
};

