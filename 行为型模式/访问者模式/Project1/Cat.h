#pragma once
#include "Animal.h"

class AbstractVisitor;

class Cat :
    public Animal
{
public:

    void accept(AbstractVisitor* ab);

};

