#pragma once
#include <map>
#include "IBox.h"
#include "LBOX.h"
class BoxFactory
{
private:
	map<string, AbstractBox*> ma;
	BoxFactory() 
	{
		ma["I"] = new IBox();
		ma["L"] = new LBOX();
	}
public:
	static BoxFactory* GetInstance()
	{
		static BoxFactory bf;
		return &bf;
	}

	AbstractBox* GetBox(string shape)
	{
		return ma[shape];
	}


};

