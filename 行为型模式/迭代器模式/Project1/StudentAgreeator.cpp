#include "StudentAgreeator.h"

void StudentAgreeator::Add(Student s)
{
	ve.push_back(s);
}

void StudentAgreeator::Detach()
{
	ve.pop_back();
}

StudentIterator StudentAgreeator::GetIterator()
{
	return StudentIterator(&ve);
}
