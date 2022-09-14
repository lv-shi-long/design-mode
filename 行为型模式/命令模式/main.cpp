#include "common.h"

/*

	命令模式： 将一个请求封装为一个对象，使发出请求的责任和执行请求的责任分割开。这样两者之间通过命令对象
		      进行沟通，这样方便将命令对象进行存储、传递、调用、增加与管理。

	组成部分： 抽象命令角色（在本例子中是 Command）。 具体命令角色（聚合命令执行者和命令，在本例子中是 ConcreateCommand ），
			  请求调用者（聚合命令角色）, 在本例子中是（Invoker）。请求执行者，在本例子中是 Receiver。

	调用流程： ConcreateCommand.setOrder()  ConcreateCommand.setReceiver()
			  Invoker.setOrder()  Invoker.setCommand()
			  Invoker --> execute()   execute 里面 用之前 set的 Command调用 Command的 execute()方法
			  Command 的execute 方法 通过 order 传递参数，执行自己的业务路基。
*/

#include "ConcreteCommond.h"
#include "Invoker.h"

int main()
{
	map<string, int> m1;
	m1["青菜"] = 2;
	m1["花菜"] = 3;

	map<string, int> m2;
	m2["牛肉"] = 2;
	m2["猪肉"] = 4;

	Order o1;
	o1.SetOrder(1, m1);

	Order o2;
	o2.SetOrder(2, m2);

	Receiver r1;
	Receiver r2;

	ConcreteCommond cm1(&o1, &r1);

	ConcreteCommond cm2(&o2, &r2);

	Invoker in;
	in.lc.push_back(&cm1);
	in.lc.push_back(&cm2);

	in.Execute();
	return 0;
}


