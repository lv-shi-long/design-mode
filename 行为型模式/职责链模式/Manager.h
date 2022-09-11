#pragma once
#include "AbstractHandler.h"
class Manager :
    public AbstractHandler
{
public:
    Manager(int n, int e) :AbstractHandler(n, e) {}

    void HandleRequest(LeaveRequest* lr)
    {
        cout << lr->name << "请假" << lr->num << " day 原因：" << lr->content <<  " 经理同意" << endl;
    }
};

