#include "common.h"

/*
	 
	 抽象工厂模式： 此模式是为了解决 工厂方法模式 只考虑一类产品的生产 的问题。比如工厂虽然不同，但是
				   只创建咖啡。经过不同的工厂创建出来的 咖啡 是不同种类的咖啡。

				   每增加一个 产品 那么久要新增一个工厂。比如增加 一个甜品类，那么就得增加一个甜品工厂。
				   如果再增加个 Latee 甜品， American 甜品  那么就得增加两个 工厂类。比较麻烦。

				   但是  工厂除了可以创建 咖啡，还可以创建 甜品，其它东西。抽象工厂里面可以再定义一个
				   创建甜品的方法。
	 
	 实现方式就是 定义一个抽象工厂类，里面定义 多个生产方法。生产不同的类。

*/

#include "CoffeeStore.h"
#include "AmericanCoffee.h"
#include "AmericanDesert.h"
#include "AmericanFactory.h"

#include "LateeCoffe.h"
#include "LateeDesert.h"
#include "LateeFactory.h"

int main()
{
	CoffeeStore cs;
	AmericanFactory amfa;
	LateeFactory lfa;

	cs.OrderCoffee(&amfa);
	cs.OrderDesert(&amfa);

	cs.OrderCoffee(&lfa);
	cs.OrderDesert(&lfa);

	return 0;
}
