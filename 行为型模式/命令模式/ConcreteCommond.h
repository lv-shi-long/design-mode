#pragma once
#include "Commond.h"
#include "Order.h"
#include "Receiver.h" 
class ConcreteCommond :
    public Commond
{

private:
    Order* ord;
    Receiver* rec;
public:
    ConcreteCommond(Order* o, Receiver* r) :ord(o), rec(r) {}
    void Execute()
    {
        cout << ord->diningTable << " 点餐 " << endl;
        for (auto it = ord->order.begin(); it != ord->order.end(); it++)
        {
            rec->CookFood(it->first, it->second);
        }
    }

};

