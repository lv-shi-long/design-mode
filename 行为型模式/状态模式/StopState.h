#pragma once
#include "LiftState.h"

class StopState :
	public LiftState
{
public:
	//���ݿ��Ŷ���
	virtual  void open();
	//���ݹرն���
	virtual  void close();
	//�������ж���
	virtual  void run();
	//����ֹͣ����
	virtual  void stop();
};
