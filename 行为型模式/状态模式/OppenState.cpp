#include "OppenState.h"

//电梯开门动作
void OppenState::open()
{
	cout << "电梯开门" << endl;
}
//电梯关闭动作
void OppenState::close()
{
	this->context->SetCurrentState((LiftState*)this->context->cs);
	this->context->close();
}
//电梯运行动作
void OppenState:: run()
{

}
//电梯停止动作
void OppenState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}
