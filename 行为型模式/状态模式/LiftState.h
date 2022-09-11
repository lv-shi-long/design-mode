#pragma once
#include "common.h"

#include "Context.h"

class LiftState
{
protected:
	Context* context;
public:
	void setContext(Context* context);

	//电梯开门动作
	virtual  void open() = 0;
	//电梯关闭动作
	virtual  void close() = 0;
	//电梯运行动作
	virtual  void run() = 0;
	//电梯停止动作
	virtual  void stop() = 0;
};

