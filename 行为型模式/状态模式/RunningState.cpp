#include "RunningState.h"
//���ݿ��Ŷ���
void RunningState::open()
{

}
//���ݹرն���
void RunningState::close()
{

}
//�������ж���
void RunningState::run()
{
	cout << "��������" << endl;
}
//����ֹͣ����
void RunningState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}