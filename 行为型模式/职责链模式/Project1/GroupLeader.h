#pragma once
#include "AbstractHandler.h"
class GroupLeader :
    public AbstractHandler
{
public:
    GroupLeader(int n, int e) :AbstractHandler(n, e) {}

    void HandleRequest(LeaveRequest* lr)
    {
        cout << lr->name << "���" << lr->num << " day ԭ��" << lr->content << " С�鳤ͬ��" << endl;
    }


};

