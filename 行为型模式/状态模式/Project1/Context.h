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
	//���ݿ��Ŷ���
	void open();
	//���ݹرն���
	void close();
	//�������ж���
	void run();
	//����ֹͣ����
	void stop();

	void SetCurrentState(LiftState* cur);
};

