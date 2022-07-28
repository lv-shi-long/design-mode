#pragma once
#include "LiftState.h"

class StopState :
	public LiftState
{
public:
	//电梯开门动作
	virtual  void open();
	//电梯关闭动作
	virtual  void close();
	//电梯运行动作
	virtual  void run();
	//电梯停止动作
	virtual  void stop();
};
