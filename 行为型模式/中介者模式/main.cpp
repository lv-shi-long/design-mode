#include "common.h"

/*

	中介者模式： 又叫调停模式，定义一个中介角色来封装一系列对象之间的交互，使原有对象之间的耦合
				松散，且可以独立地改变它们之间的交互。

	组成部分：   抽象中介者（定义了同时对象之间交互的抽象方法）
				具体中介者（实现了同事之间交互的接口，依赖于同事对象, 同时又聚合同事对象）
				抽象同事对象（保存中介者对象（聚合），定义同事之间的交互接口）
				具体同事类对象 （实现同事之间交互的具体方法）
*/

#include "HouseOwner.h"
#include "MediatorConstructure.h"
#include "Tenant.h"

int main()
{
	MediatorConstructure mec;
	HouseOwner h("房东", &mec);
	Tenant t("租户", &mec);

	mec.SetHouseOwner(&h);
	mec.SetTenant(&t);

	h.Contacat("我有房子要租赁");
	t.Contacat("我要租房子");

	return 0;
}


