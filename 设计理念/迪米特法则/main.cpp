#include "common.h"

/*
     迪米特法则： 指的是两个软件实体如果没有直接通信，那么久不该发生相互调用。可以用第三方
	 来转发该调用。其目的是降低系统的耦合性。

	 比如明星 和 粉丝， 他们都有 getName 接口。 如果实现一个 meeting 接口需要用到这两个接口。
	 那么 不应该要明星去掉  粉丝的 getName 接口。

	 应该设计一个第三方类 包含 明星和粉丝两个 类，这样 通过第三方 调用 双方的 getName 接口。

*/

#include "Fans.h"
#include "Star.h"
#include "Agent.h"
int main()
{
	Fans f;
	f.SetName("xxxxfans");

	Star s;
	s.SetName("xxxxstar");

	Agent a(&f, &s);
	a.Metting();
	return 0;
}
