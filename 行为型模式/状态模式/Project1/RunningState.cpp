#include "RunningState.h"
//电梯开门动作
void RunningState::open()
{

}
//电梯关闭动作
void RunningState::close()
{

}
//电梯运行动作
void RunningState::run()
{
	cout << "电梯运行" << endl;
}
//电梯停止动作
void RunningState::stop()
{
	this->context->SetCurrentState((LiftState*)this->context->ss);
	this->context->stop();
}