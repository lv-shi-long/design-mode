#include "CloseState.h"

//电梯开门动作
void CloseState::open()
{
	this->context->SetCurrentState((LiftState*)this->context->os);
	this->context->open();
}
//电梯关闭动作
void CloseState::close()
{
	cout << "电梯关闭" << endl;
}
//电梯运行动作
void CloseState::run()
{
	this->context->SetCurrentState((LiftState*)this->context->rs);
	this->context->run();
}
//电梯停止动作
void CloseState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}
