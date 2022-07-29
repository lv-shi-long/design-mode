#pragma once

class AbstractVisitor;
class Animal
{
public:

	virtual void accept(AbstractVisitor* ab) = 0;

};

