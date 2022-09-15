#pragma once

//#include "OppenState.h"
//#include "OppenState.h"
//#include "CloseState.h"
//#include "RunningState.h"
//#include "StopState.h"

class LiftState;
class OppenState;
class RunningState;
class StopState;
class CloseState;


class Context
{
public:
	OppenState* os;
	RunningState* rs;
	StopState* ss;
	CloseState* cs;
	LiftState* curs;
	Context();
	//电梯开门动作
	void open();
	//电梯关闭动作
	void close();
	//电梯运行动作
	void run();
	//电梯停止动作
	void stop();

	void SetCurrentState(LiftState* cur);
};

