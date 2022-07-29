#pragma once
#include "Student.h"
#include "StudentIterator.h"
class Agreeator
{
public:
	virtual void Add(Student s) = 0;

	virtual void Detach() = 0;

	virtual StudentIterator GetIterator() = 0;

};

