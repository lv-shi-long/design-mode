#pragma once
#include "common.h"
class TFCard
{
public:
	virtual void WriteTF(string s) = 0;
	virtual string ReadTF() = 0;
};

