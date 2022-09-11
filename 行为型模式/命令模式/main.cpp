#include "common.h"

/*

	命令模式： 将一个请求封装为一个对象，使发出请求的责任和执行请求的责任分割开。这样两者之间通过命令对象
		      进行沟通，这样方便将命令对象进行存储、传递、调用、增加与管理。

	组成部分： 抽象命令角色。 具体命令角色（聚合命令执行者）。 请求执行者，调用者（聚合命令角色）。
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


