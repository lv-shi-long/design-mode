#include "StopState.h"

//���ݿ��Ŷ���
void StopState::open()
{
	this->context->SetCurrentState((LiftState*)this->context->os);
	this->context->open();
}
//���ݹرն���
void StopState::close()
{
	this->context->SetCurrentState((LiftState*)this->context->cs);
	this->context->close();
}
//�������ж���
void StopState::run()
{
	this->context->SetCurrentState((LiftState*)this->context->rs);
	this->context->run();
}
//����ֹͣ����
void StopState::stop()
{
	cout << "����ֹͣ" << endl;
}
