#pragma once
#include "LiftState.h"
class OppenState :
	public LiftState
{
private:

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
