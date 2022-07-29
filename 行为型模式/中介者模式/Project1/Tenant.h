#pragma once
#include "Person.h"
class Tenant :
    public Person
{
public:
    Tenant(string n, Mediator* m) : Person(n, m) {}

    void Contacat(string n);

    void GetMessage(string s);
};

