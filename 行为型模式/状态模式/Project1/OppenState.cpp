#include "OppenState.h"

//���ݿ��Ŷ���
void OppenState::open()
{
	cout << "���ݿ���" << endl;
}
//���ݹرն���
void OppenState::close()
{
	this->context->SetCurrentState((LiftState*)this->context->cs);
	this->context->close();
}
//�������ж���
void OppenState:: run()
{

}
//����ֹͣ����
void OppenState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}
