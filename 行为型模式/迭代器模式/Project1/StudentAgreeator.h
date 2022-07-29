#pragma once
#include "Agreeator.h"
class StudentAgreeator :
    public Agreeator
{
private:
	vector<Student> ve;
public:
	virtual void Add(Student s);

	virtual void Detach();

	virtual StudentIterator GetIterator();
};

