#include "common.h"

/*
	策略模式： 是将一系列算法，封装起来，使得其可以相互替换。与模板方法模式实现虽然相似，但是
	          模板方法强调的是 算法过程中 某个步骤还未实现。  策略模式强调的是 策略之间相互替换。
			  且组成多一个环境角色。
	
	组成：    抽象策略类，具体策略类，环境角色类（持有一个策略。）

*/

#include "SalesMan.h"
int main()
{
	StrategyA sa;
	StrategyB sb;
	SalesMan sm1(&sa);
	SalesMan sm2(&sb);

	sm1.SalesManShow();
	sm2.SalesManShow();

	return 0;
}

