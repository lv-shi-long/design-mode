#include "common.h"

/*
	��Ԫģʽ�� ָ���� ͨ������һϵ�� ϸ���ȵ���Ķ��󣬴Ӷ����� ����Ƶ���Ĺ����������

	��ɲ��֣� ������Ԫ��ɫ������������˹���飩�� ������Ԫ��ɫ��ÿ����ͬ�ķ��飩�� ����Ԫ��ɫ����Ԫ������

*/

#include "BoxFactory.h"

int main()
{
	AbstractBox* i1 = BoxFactory::GetInstance()->GetBox("I");
	i1->Display("red");
	AbstractBox* i2 = BoxFactory::GetInstance()->GetBox("I");
	cout << (i1 == i2) << endl;

	AbstractBox* l1 = BoxFactory::GetInstance()->GetBox("L");
	l1->Display("green");

	return 0;
}
