#include "common.h"

/*
	���ģʽָ���֣������ڰ�һ�����ƵĶ�����һ����һ�Ķ���

	��ɲ��֣� ������ڵ㣬 ��֦�ڵ㣬 Ҷ�ӽڵ�

	���ģʽ�ַ�Ϊ ͸�����ģʽ�Ͱ�ȫ���ģʽ��
			͸���� ָ�������з����� ������ڵ��ж����壬������д��
			��ȫ�� ���г��󷽷� ֻ��������Ҫʱ���������ж��塣
*/
#include "MenuItem.h"
#include "Menu.h"

int main()
{
	MenuItem i21("aaa", 3);
	MenuItem i22("bbb", 3);
	MenuItem i23("ccc", 3);

	Menu i2("abc", 2);
	i2.Add(&i21);
	i2.Add(&i22);
	i2.Add(&i23);

	MenuItem i31("aaa", 3);
	MenuItem i32("bbb", 3);
	MenuItem i33("ccc", 3);

	Menu i3("abc", 2);
	i3.Add(&i31);
	i3.Add(&i32);
	i3.Add(&i33);

	Menu i1("root", 1);
	MenuItem i11("fsadf", 2);
	i1.Add(&i2);
	i1.Add(&i11);
	i1.Add(&i3);

	

	i1.Print();
	return 0;
}



