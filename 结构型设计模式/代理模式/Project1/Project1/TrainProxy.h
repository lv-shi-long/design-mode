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
        cout << "火车代理收取相关服务费用" << endl;
        tr.Sell();
    }
};

