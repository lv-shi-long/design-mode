#include "HouseOwner.h"
#include "MediatorConstructure.h"
void HouseOwner::Contacat(string n)
{
	me->Contact(n, this);
}

void HouseOwner::GetMessage(string s)
{
	cout << name << "收到消息：" << s << endl;
}
