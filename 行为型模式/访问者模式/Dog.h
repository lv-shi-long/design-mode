#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
public:

    void accept(AbstractVisitor* ab);

};

