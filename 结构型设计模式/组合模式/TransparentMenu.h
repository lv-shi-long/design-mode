#pragma once
#include "common.h"
class TransparentMenu
{
public:
	string name;
	int level;
public:
	TransparentMenu(string n, int l) :name(n), level(l) {}

	virtual void Add(TransparentMenu* tm)
	{
		throw string("not support");
	}

	virtual void Remove(TransparentMenu* tm)
	{
		throw string("not support");
	}

	virtual TransparentMenu* GetChild(int i)
	{
		throw string("not support");
	}

	virtual void Print()
	{
		throw string("not support");
	}

};

