

/*
    开放封闭原则指的是 ： 对扩展开发。对修改封闭。

	解决的问题：  对于一个皮肤插件。皮肤有 show 方法。
	             开始只有默认皮肤，但是由于需求的变化。可能会出现各种各样的皮肤。也就对应各种各样的 show 方法。
				 如果没新的皮肤都重写 show 方法。那么久不好维护。

	解决办法：    定义一个抽象的皮肤基类。 所有不同风格的皮肤继承这个类。那么久实现了新增功能，增加代码，无需改动代码


	             
*/
#include <iostream>
#include "DefaltSkin.h"
#include "Skin.h"
#include "SpecialSkin.h"
using namespace std;


int main()
{
	DefaltSkin  ds;
	ds.Show();

	SpecialSkin ss;
	ss.Show();
	return 0;
}
