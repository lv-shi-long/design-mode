#pragma once

#include "common.h"
#include "FireProof.h"
#include "WaterProof.h"
#include "TheftProof.h"
class ASafeDoor : 
	public FireProof,
	WaterProof, 
	TheftProof    //  使用多继承的方式实现接口尽量小的问题
{
public:
	void AntiFire()
	{
		cout << "i can Anti Fire" << endl;
	}

	void AntiTheft()
	{
		cout << "i can Anti Theft" << endl;
	}

	void AntiWater()
	{
		cout << "i can Anti Water" << endl;
	}

	void Run()
	{
		AntiFire();
		AntiTheft();
		AntiWater();
	}
};

