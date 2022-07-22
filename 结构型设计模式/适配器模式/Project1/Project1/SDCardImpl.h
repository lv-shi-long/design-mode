#pragma once
#include "SDCard.h"
class SDCardImpl :
    public SDCard
{
public:
    virtual void WriteSD(string s)
    {
        cout << "sd card write: " << s << endl;
    }
    virtual string ReadSD()
    {
        return "sd cart read";
    }
};

