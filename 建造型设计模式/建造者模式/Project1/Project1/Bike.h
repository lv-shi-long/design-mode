#pragma once
#include "common.h"
class Bike
{
private:
	string seat;
	string frame;
public:
	void SetSeat(string se)
	{
		seat = se;
	}

	void SetFrame(string fr)
	{
		frame = fr;
	}

	void Show()
	{
		cout << "seat = " << seat << " frame = " << frame << endl;
	}
};

