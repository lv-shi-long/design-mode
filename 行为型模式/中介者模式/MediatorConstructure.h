#pragma once
#include "Mediator.h"
#include "HouseOwner.h"
#include "Tenant.h"

class MediatorConstructure :
    public Mediator
{
private:
    HouseOwner* ho;
    Tenant* te;

public:

    //MediatorConstructure(Person* h, Person* t) : ho((HouseOwner*) h), te((HouseOwner*) t) {}

    void SetHouseOwner(HouseOwner* h);
    
    void SetTenant(Tenant* t);

    void Contact(string message, Person* p);
};

