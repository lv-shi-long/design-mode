#include "Cat.h"
#include "AbstractVisitor.h"

 
void Cat::accept(AbstractVisitor* ab)
{
	ab->Visit(this);
	cout << "cat is visited" << endl;
}
