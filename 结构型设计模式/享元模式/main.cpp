#include "common.h"

/*
	享元模式： 指的是 通过构造一系列 细粒度的类的对象，从而避免 对象频繁的构造和析构。

	组成部分： 抽象享元角色（比如抽象俄罗斯方块）。 具体享元角色（每个不同的方块）。 非享元角色。享元工厂。

*/

#include "BoxFactory.h"

int main()
{
	AbstractBox* i1 = BoxFactory::GetInstance()->GetBox("I");
	i1->Display("red");
	AbstractBox* i2 = BoxFactory::GetInstance()->GetBox("I");
	cout << (i1 == i2) << endl;

	AbstractBox* l1 = BoxFactory::GetInstance()->GetBox("L");
	l1->Display("green");

	return 0;
}
