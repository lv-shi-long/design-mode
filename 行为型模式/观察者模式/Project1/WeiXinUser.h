#pragma once
#include "Observer.h"
class WeiXinUser :
    public Observer
{
public:
    void Update(string s);
};

