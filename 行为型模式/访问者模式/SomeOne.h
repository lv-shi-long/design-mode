#pragma once
#include "AbstractVisitor.h"
class SomeOne :
    public AbstractVisitor
{
    void Visit(Cat* cat);

    void Visit(Dog* dog);
};

