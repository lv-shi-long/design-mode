#pragma once
#include "AbstractVisitor.h"
class Owner :
    public AbstractVisitor
{
public:
    void Visit(Cat* cat);

    void Visit(Dog* dog);
};

