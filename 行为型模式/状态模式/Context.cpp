
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
//���ݿ��Ŷ���
void Context::open()
{
	curs->open();
}
//���ݹرն���
void Context::close()
{
	curs->close();
}
//�������ж���
void Context::run()
{
	curs->run();
}
//����ֹͣ����
void Context::stop()
{
	curs->stop();
}

void Context::SetCurrentState(LiftState* cur)
{
	curs = cur;
	curs->setContext(this);
}
