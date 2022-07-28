#pragma once
#include "Subject.h"
#include <list>

class SubscriptionSubject :
    public Subject
{
public:
    list<Observer*> ls;
    virtual void Attach(Observer* ob)
    {
        ls.push_back(ob);
    }

    virtual void Notify(string s)
    {
        for (auto it = ls.begin(); it != ls.end(); it++)
        {
            (*it)->Update(s);
        }
    }

};

