#pragma once
#include "LiftState.h"
class CloseState :
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
