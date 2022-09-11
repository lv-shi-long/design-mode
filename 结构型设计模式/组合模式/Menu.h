#pragma once
#include "TransparentMenu.h"
class Menu :
    public TransparentMenu
{
	vector<TransparentMenu* > ve;
public:

	Menu(string n, int level) : TransparentMenu(n, level) {}
	virtual void Add(TransparentMenu* tm)
	{
		ve.push_back(tm);
	}

	virtual void Remove(TransparentMenu* tm)
	{
		ve.pop_back();
	}

	virtual TransparentMenu* GetChild(int i)
	{
		return ve[i];
	}

	virtual void Print()
	{
		for (int i = 0; i < level; i++)
		{
			cout << "--";
		}
			
		cout << "*" << name << endl;
		for (auto v : ve)
		{
			v->Print();
		}
	}
};

