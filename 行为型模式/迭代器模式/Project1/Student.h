#pragma once
#include "common.h"
class Student
{
private:
	string name;
	int num;
public:
	Student(string s, int n)
	{
		name = s;
		num = n;
	}

	void Show()
	{
		cout << "name: " << name << "num: " << num << endl;
	}
};

