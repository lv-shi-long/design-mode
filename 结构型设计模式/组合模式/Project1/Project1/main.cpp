#include "common.h"

/*
	组合模式指的手，是用于把一组相似的对象当作一个单一的对象。

	组成部分： 抽象根节点， 树枝节点， 叶子节点

	组合模式又分为 透明组合模式和安全组合模式。
			透明： 指的是所有方法在 抽象根节点中都定义，子类重写。
			安全： 所有抽象方法 只在子类需要时才在子类中定义。
*/
#include "MenuItem.h"
#include "Menu.h"

int main()
{
	MenuItem i21("aaa", 3);
	MenuItem i22("bbb", 3);
	MenuItem i23("ccc", 3);

	Menu i2("abc", 2);
	i2.Add(&i21);
	i2.Add(&i22);
	i2.Add(&i23);

	MenuItem i31("aaa", 3);
	MenuItem i32("bbb", 3);
	MenuItem i33("ccc", 3);

	Menu i3("abc", 2);
	i3.Add(&i31);
	i3.Add(&i32);
	i3.Add(&i33);

	Menu i1("root", 1);
	MenuItem i11("fsadf", 2);
	i1.Add(&i2);
	i1.Add(&i11);
	i1.Add(&i3);

	

	i1.Print();
	return 0;
}



