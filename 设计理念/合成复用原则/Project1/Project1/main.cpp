


using namespace std;

#include "common.h"

/*
	合成复用原则是指：尽量先使用组合或者聚合等关联关系来实现，其次才考虑使用继承关系来实现。

	举个例子： 如果采用继承。有个车辆。 如果按照 能源来分。那么有 电能汽车，油能汽车。
			  此时会派生出两个类。
			  如果又按照颜色来分，汽车有红色，蓝色。 那么电能 汽车会派生出 电能红色，电能蓝色。
			  这样会出现 派生的类很多。不好维护。

	可以抽象一个颜色 类的虚类，蓝色  红色作为其子类。颜色类为汽车的成员。

*/
#include "OilCar.h"
#include "ElectricCar.h"

int main()
{
	Color* re = new Red();
	Color* bl = new Blue();

	ElectricCar el(re);
	OilCar oi(bl);

	el.Move();
	oi.Move();

	return 0;
}



