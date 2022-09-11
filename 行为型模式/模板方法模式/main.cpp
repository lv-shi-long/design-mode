#include "common.h"

/*
	
	模板方法模式：  在开发过程中，有很多算法知道了执行的关键步骤，且知道了执行顺序，执行顺序相对稳定。
				   但是某些步骤的实现还未知。

	组成部分：   抽象类。定义算法的骨架方法。 和还未实现的方法
	            具体子类。 实现还未实现的方法。


*/

#include "CookCaiXin.h"
#include "CookMeall.h"

int main()
{
	CookCaiXin cx;
	cx.Cook();

	CookMeall cm;
	cm.Cook();

	return 0;
}

