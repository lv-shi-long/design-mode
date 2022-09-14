#pragma once
#include "LeaveRequest.h"

class AbstractHandler
{
private:
	AbstractHandler* next;
	int numBegin;
	int numEnd;

public:
	AbstractHandler(int b, int e) :numBegin(b), numEnd(e)
	{
		next = NULL;
	}
	void SetNext(AbstractHandler* ne)
	{
		next = ne;
	}

	void Submit(LeaveRequest* lr)
	{
		this->HandleRequest(lr);
		if (next != NULL && lr->num > numEnd)
		{
			next->Submit(lr);
		}
		else
		{
			cout << "流程结束" << endl;
		}
	}

	virtual void HandleRequest(LeaveRequest* lr) = 0;
};

