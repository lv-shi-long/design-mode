#pragma once
#include "Cloneable.h"
#include "common.h"
class MyObject :
    public Cloneable
{
public:
    char* ptr;
    MyObject()
    {
        ptr = new char[16];
        memcpy(ptr, "abcdef", 16);
    }
    
    MyObject(const MyObject& other)
    {
        if (other.ptr != NULL)
        {
            this->ptr = new char[16];
            memcpy(this->ptr, other.ptr, sizeof(this->ptr));
        }
    }
    Cloneable* Clone()
    {
        return new MyObject(*this);
    }
};

