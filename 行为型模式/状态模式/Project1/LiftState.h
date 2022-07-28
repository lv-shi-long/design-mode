#pragma once
#include "common.h"

#include "Context.h"

class LiftState
{
protected:
	Context* context;
public:
	void setContext(Context* context);

	//���ݿ��Ŷ���
	virtual  void open() = 0;
	//���ݹرն���
	virtual  void close() = 0;
	//�������ж���
	virtual  void run() = 0;
	//����ֹͣ����
	virtual  void stop() = 0;
};

