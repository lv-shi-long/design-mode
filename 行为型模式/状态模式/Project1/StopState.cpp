#include "StopState.h"

//电梯开门动作
void StopState::open()
{
	this->context->SetCurrentState((LiftState*)this->context->os);
	this->context->open();
}
//电梯关闭动作
void StopState::close()
{
	this->context->SetCurrentState((LiftState*)this->context->cs);
	this->context->close();
}
//电梯运行动作
void StopState::run()
{
	this->context->SetCurrentState((LiftState*)this->context->rs);
	this->context->run();
}
//电梯停止动作
void StopState::stop()
{
	cout << "电梯停止" << endl;
}
