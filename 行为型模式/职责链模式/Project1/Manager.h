#pragma once
#include "AbstractHandler.h"
class Manager :
    public AbstractHandler
{
public:
    Manager(int n, int e) :AbstractHandler(n, e) {}

    void HandleRequest(LeaveRequest* lr)
    {
        cout << lr->name << "���" << lr->num << " day ԭ��" << lr->content <<  " ����ͬ��" << endl;
    }
};

