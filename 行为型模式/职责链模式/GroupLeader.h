#pragma once
#include "AbstractHandler.h"
class GroupLeader :
    public AbstractHandler
{
public:
    GroupLeader(int n, int e) :AbstractHandler(n, e) {}

    void HandleRequest(LeaveRequest* lr)
    {
        cout << lr->name << "请假" << lr->num << " day 原因：" << lr->content << " 小组长同意" << endl;
    }


};

