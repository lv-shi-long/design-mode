
#include "common.h"

/*
	桥接模式: 当一个类有两个维度的变化时，避免通过集成来造成类数量的 爆炸增长。可以使用桥接模式

	组成部分： 抽象构建类。 聚合了实现的类对象。是个接口类。
	          具体构建类。 实现了抽象构建类的方法。在该方法中 通过调用 实现类对象的方法完成业务。

			  抽象实现类角色。 实现了 具体的业务。
			  具体实现类角色。 实现了抽象类实现角色的接口。

*/

#include "Mac.h"
#include "WindowsSystem.h"
int main()
{
	AviFile af;
	RmviFIle rmf;

	Mac mac(&af);
	WindowsSystem wins(&af);

	Mac mac2(&rmf);
	WindowsSystem wins2(&rmf);

	mac.Display("电影");
	wins.Display("电影");

	mac2.Display("电影");
	wins2.Display("电影");

	return 0;
}

