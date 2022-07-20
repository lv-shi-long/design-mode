#pragma once

#include "common.h"
#include "FireProof.h"
#include "WaterProof.h"
#include "TheftProof.h"
class ASafeDoor : 
	public FireProof,
	WaterProof, 
	TheftProof    //  ʹ�ö�̳еķ�ʽʵ�ֽӿھ���С������
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

