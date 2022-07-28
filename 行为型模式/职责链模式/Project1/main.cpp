#include "common.h"

/*
	责任链模式：  又名职责链模式，为了避免请求发送者与多个请求处理者耦合在一起，将所有请求的处理者通过前一对
				 象记住其下一个对象的引用而连成一条链；当有请求发生时，可将请求沿着这条链传递，直到有对象处
                 理它为止。
	
	组成部分 ：   抽象处理者（实现转发请求的逻辑，聚合抽象处理者的指针，）。 具体处理者(实现具体处理的逻辑）。
	             客户端类。负责首次调用 链头的 对象处理 请求。

*/

#include "Manager.h"
#include "GroupLeader.h"

int main()
{
	GroupLeader g(1, 3);
	Manager m(4, 7);

	g.SetNext(&m);
	LeaveRequest l("张三", 7, "生病");

	g.Submit(&l);
	return 0;
}



