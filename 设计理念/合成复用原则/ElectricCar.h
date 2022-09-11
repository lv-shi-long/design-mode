#pragma once
#include "Car.h"
class ElectricCar :
    public Car
{
public:
    void Move()
    {
        co->ShowColor();
        cout << "move by electric" << endl;
    }

    ElectricCar(Color* co)
    {
        this->co = co;
    }
};

