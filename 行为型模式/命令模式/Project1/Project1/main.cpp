#include "common.h"

/*

	����ģʽ�� ��һ�������װΪһ������ʹ������������κ�ִ����������ηָ����������֮��ͨ���������
		      ���й�ͨ���������㽫���������д洢�����ݡ����á����������

	��ɲ��֣� ���������ɫ�� ���������ɫ���ۺ�����ִ���ߣ��� ����ִ���ߣ������ߣ��ۺ������ɫ����
*/

#include "ConcreteCommond.h"
#include "Invoker.h"

int main()
{
	map<string, int> m1;
	m1["���"] = 2;
	m1["����"] = 3;

	map<string, int> m2;
	m2["ţ��"] = 2;
	m2["����"] = 4;

	Order o1;
	o1.SetOrder(1, m1);

	Order o2;
	o2.SetOrder(2, m2);

	Receiver r1;
	Receiver r2;

	ConcreteCommond cm1(&o1, &r1);

	ConcreteCommond cm2(&o2, &r2);

	Invoker in;
	in.lc.push_back(&cm1);
	in.lc.push_back(&cm2);

	in.Execute();
	return 0;
}


