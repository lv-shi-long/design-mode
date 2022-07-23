
#include "common.h"

/*
	 装饰器模式： 指在不改变现有对象结构的情况下，动态地给该对象增加一些职责（即增加其额外功能）的模式。
	 举例子：     一个快餐店，有炒饭，炒面两个类。每个类又可以添加一些 配料，鸡蛋，培根 之类的。
	             如果采用继承的方式 的话，每增加一个 快餐或者 一个配料，都会导致类数量的膨胀。

	 组成：      抽象构建类。   类比快餐。
	            具体构建类。    类比炒饭，炒面。
				抽象装饰者类。  继承了快餐 和 聚合了快餐的 一个类。
				具体装饰者类。  是动态增加的功能，类比配料。

	 应为具体构建类继承了 抽象构建类，如果需要增加一个 构建，只需新增一个构建即可，同理，增加一个配料也是如此。
	             配料如何关联上快餐，是因为快餐包含了构建的 指针，构造函数可以传入。
*/

#include "Egg.h"
#include "FriedNoodle.h"
#include "FriedRice.h"
#include "Bacon.h"

int main()
{
	FriedRice friedRice;
	cout << "desc: " << friedRice.GetDesc() << " 价格: " << friedRice.Cost() << "元" << endl;

	Egg *egg = new Egg(&friedRice);
	cout << "desc: " << egg->GetDesc() << " 价格: " << egg->Cost() << "元" << endl;

	egg = new Egg(egg);
	cout << "desc: " << egg->GetDesc() << " 价格: " << egg->Cost() << "元" << endl;

	egg = new Egg(egg);
	cout << "desc: " << egg->GetDesc() << " 价格: " << egg->Cost() << "元" << endl;

	//  培根的测试
	Bacon* bacon = new Bacon(&friedRice);
	cout << "desc: " << bacon->GetDesc() << " 价格: " << bacon->Cost() << "元" << endl;

	bacon = new Bacon(bacon);
	cout << "desc: " << bacon->GetDesc() << " 价格: " << bacon->Cost() << "元" << endl;

	bacon = new Bacon(bacon);
	cout << "desc: " << bacon->GetDesc() << " 价格: " << bacon->Cost() << "元" << endl;

	return 0;
}



