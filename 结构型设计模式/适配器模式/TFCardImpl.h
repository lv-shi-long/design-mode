#pragma once
#include "TFCard.h"
class TFCardImpl :
    public TFCard
{
public:
    virtual void WriteTF(string s)
    {
        cout << "tf card write:" << s << endl;
    }
    virtual string ReadTF()
    {
        return "tf card read";
    }
};

