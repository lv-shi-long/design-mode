#include "CloseState.h"

//���ݿ��Ŷ���
void CloseState::open()
{
	this->context->SetCurrentState((LiftState*)this->context->os);
	this->context->open();
}
//���ݹرն���
void CloseState::close()
{
	cout << "���ݹر�" << endl;
}
//�������ж���
void CloseState::run()
{
	this->context->SetCurrentState((LiftState*)this->context->rs);
	this->context->run();
}
//����ֹͣ����
void CloseState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}
