#include "StudentIterator.h"


bool StudentIterator::hasNext()
{
	return position < (*ls).size();
}

Student StudentIterator::next()
{
	return (*ls)[position++];
}
