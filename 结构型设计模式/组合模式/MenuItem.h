#pragma once
#include "TransparentMenu.h"
class MenuItem :
    public TransparentMenu
{
public:
    MenuItem(string n, int l) : TransparentMenu(n, l) {}

    void Print()
    {
        for (int i = 0; i < level; i++)
        {
            cout << "--";
        }
        cout << "#" << name << endl;
    }
};

