#pragma once
#include "SellTickets.h"
#include "TrainStation.h"
class TrainProxy :
    public SellTickets
{
public:
    void Sell()
    {
        TrainStation tr;
        cout << "�𳵴�����ȡ��ط������" << endl;
        tr.Sell();
    }
};

