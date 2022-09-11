
#pragma once
#include "common.h"
#include "Context.h"
#include "OppenState.h"
#include "RunningState.h"
#include "StopState.h"
#include "CloseState.h"

class LiftState;
class OppenState;
class StopState;
class RunningState;
class CloseState;


Context::Context()
{
	os = new OppenState();
	rs = new RunningState();
	ss = new StopState();
	cs = new CloseState();
	curs = nullptr;
}
//电梯开门动作
void Context::open()
{
	curs->open();
}
//电梯关闭动作
void Context::close()
{
	curs->close();
}
//电梯运行动作
void Context::run()
{
	curs->run();
}
//电梯停止动作
void Context::stop()
{
	curs->stop();
}

void Context::SetCurrentState(LiftState* cur)
{
	curs = cur;
	curs->setContext(this);
}
