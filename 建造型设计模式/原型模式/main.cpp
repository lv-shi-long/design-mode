

#include "common.h"

/*
	ԭ��ģʽ�Ƚϼ򵥣����ǵ�����Ĺ����Ƚϸ��ӵ�ʱ�򣬲���һ�����еĶ�������������һ������

	�����ֱ���Ϊ�����ǳ������  ǳ���� �����ָ���ԭ�������ָ����ָ��ͬһ���ַ�ġ�
	������� ���¿���һ��ָ�룬ָ��ָ������� ����ԭ�������ݡ�

*/

#include "MyObject.h"
int main()
{
	MyObject* m1 = new MyObject;

	MyObject* m2 = (MyObject*)m1->Clone();

	cout << m1->ptr << endl << m2->ptr << endl << (m1->ptr == m2->ptr) << endl;

	return 0;
}


