#pragma once
#include "SDCard.h"
#include "TFCardImpl.h"
class ClassAdapter :
    public SDCard, TFCardImpl
{
public:
    virtual void WriteSD(string s)
    {
        TFCardImpl::WriteTF(s);
    }

    virtual string ReadSD()
    {
        return TFCardImpl::ReadTF();
    }
};

