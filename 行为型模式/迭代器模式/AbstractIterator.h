#pragma once

#include "Student.h"

class AbstractIterator
{
public:
	virtual bool hasNext() = 0;

	virtual Student next() = 0;
};

