#pragma once
#include "Car.h"
class OilCar :
    public Car
{
public:
    void Move()
    {
        co->ShowColor();
        cout << "move by oil" << endl;
    }

    OilCar(Color* co)
    {
        this->co = co;
    }

};

