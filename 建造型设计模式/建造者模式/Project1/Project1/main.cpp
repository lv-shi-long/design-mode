


#include "common.h"

/*
	create by lsl
	建造者模式 ： 当一个类的组成非常复杂，由多个类聚合而成的时候，构建过程会很复杂。可以使用建造者模式
				 它 的组成有：抽象建造者，具体建造者，指挥者类，产品类。

	比如创建一个 单车类，单车有摩拜 和 Ofo 两类。都有 构建车座，车框架的步骤。
	            那么 
				抽象建造者类 有 建造车架 建造车座  建造自行车 三个接口。

				具体建造者实现这三个接口。

				director 类 负责调用这三个接口。并且返回最终结果。 这三个接口的调用也可以封装到建造者内部

    当一个类的构造函数参数太多时，可以用建造者模式重构。

*/

#include"Diretor.h"
#include "Computer.h"
int main()
{
	OfoBuilder ofb;
	MobileBuilder mob;

	Diretor diof(&ofb);
	Diretor dimob(&mob);

	Bike* of = diof.Construct();
	Bike* mo = dimob.Construct();

	of->Show();
	mo->Show();

	Computer::ComputerBuilder cob;
	Computer* com = cob.BuildCpu("Intel")
		->BuildBoard("huashuo")
		->BuildMemory("kingston")
		->BuildComputerEnd();

	com->Show();
	return 0;
}
