#pragma once
#include "SDCard.h"
#include "SDCardImpl.h"
#include "TFCardImpl.h"
class ObjectAdapter :
    public SDCard
{
public:
    TFCardImpl* tfi;
    ObjectAdapter(TFCardImpl* tf) :tfi(tf) {}
    virtual void WriteSD(string s)
    {
        tfi->WriteTF(s);
    }

    virtual string ReadSD()
    {
        return tfi->ReadTF();
    }
};

