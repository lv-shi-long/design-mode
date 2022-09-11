#include "Tenant.h"
#include "MediatorConstructure.h"


void Tenant::Contacat(string n)
{
	me->Contact(n, this);
}

void Tenant::GetMessage(string s)
{
	cout << name << "收到消息：" << s << endl;
}
