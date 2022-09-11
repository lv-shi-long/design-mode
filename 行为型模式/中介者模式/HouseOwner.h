#pragma once
#include "Person.h"
#include "common.h"
class HouseOwner :
    public Person
{
public:
    HouseOwner(string n, Mediator* m) : Person(n, m) {}

    void Contacat(string n);

    void GetMessage(string s);
};

