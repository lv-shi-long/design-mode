#include "common.h"

/*
	痛点： 在开发中，如果所有的对象都使用 new 的形式创建，那么当这个对象变化了，所有
	 new 这个对象的地方都要改变。导致耦合度高。

	简单工厂模式： 是指将类的创建 不再用 new 的 方式，而是用一个工厂，通过工厂传入参数然后
	创建对应的对象。不属于23种设计模式的一种。 这样当后续新增类的时候不用改创建 时的代码。
	只用改工厂的代码



*/
#include "CoffeeStore.h"
#include "AmericanFactory.h"
#include "LateeFactory.h"

int main()
{
	CoffeeStore cs;
	// 简单工厂模式创建咖啡
	cout << "简单工厂模式创建咖啡" << endl;
	Coffee* c1 = cs.OrderCoffee("Latee");
	
	Coffee* c2 = cs.OrderCoffee("AmericanCoffee");

	// 工厂方法模式创建咖啡
	cout << "工厂方法模式创建咖啡" << endl;
	AbstractFactory* lfa = new LateeFactory();
	AbstractFactory* amfa = new AmericanFactory();

	cs.OrderCoffeEx(lfa);
	cs.OrderCoffeEx(amfa);
	
	return 0;
}




