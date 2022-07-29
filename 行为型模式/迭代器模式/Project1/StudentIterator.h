#pragma once
#include "AbstractIterator.h"
#include <vector>
class StudentIterator :
    public AbstractIterator
{
public:
    vector<Student>* ls;
    unsigned int position;
public:
    StudentIterator(vector<Student>* l)
    {
        ls = l;
        position = 0;
    }

    StudentIterator(const StudentIterator& other)
    {
        ls = other.ls;
        position = other.position;
    }
    bool hasNext();

    Student next();
};

