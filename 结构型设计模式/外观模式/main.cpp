

#include "common.h"

/*
	外观模式： 指的是当一个系统非常复杂的时候，如果想要对里面的子系统进行操作，此时会需要
	操作方熟悉内部系统的构成，这个会难以围护，那么久提供一个 Facade 类，这个类对外部提供统一的
	接口。外部可以通过接口调用 从而达到对子系统的操作。

	组成部分： 外观角色。子系统角色。

	例子：  某位上了年纪的大爷，每天都会开灯，开空调。那么需要调用这些接口，那么久需要知道这些接口
	的名称。 很麻烦，于是定义一个 Facade 类，这个类，提供统一的接口给 这位大爷调用


*/
#include "SmartApplicationFacade.h"


int main()
{
	SmartApplicationFacade smt;
	smt.DealWithMessage("please on k");
	smt.DealWithMessage("off xx");
	smt.DealWithMessage("hahah");

	return 0;
}

