#include "Dog.h"
#include "AbstractVisitor.h"
void Dog::accept(AbstractVisitor* ab)
{
	ab->Visit(this);

	cout << "dog is visited" << endl;

}
