
#include "common.h"

/*
	状态模式:   对有状态的对象，把复杂的“判断逻辑”提取到不同的状态对象中，允许状态对象在其内部状态发生改变
			   时改变其行为。

	组成部分：  环境角色（应用具体状态）
	           抽象状态（应用环境角色）
			   具体转台（实现抽象状态的各种转换状态的方法）

*/
#include "Context.h"
#include "OppenState.h"
#include "CloseState.h"
#include "RunningState.h"
#include "StopState.h"


int main()
{
	Context con;
	con.SetCurrentState(new CloseState());
	con.open();
	con.close();
	con.run();
	con.open();
	con.stop();

	return 0;
}

