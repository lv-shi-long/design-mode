

/*
    ���ŷ��ԭ��ָ���� �� ����չ���������޸ķ�ա�

	��������⣺  ����һ��Ƥ�������Ƥ���� show ������
	             ��ʼֻ��Ĭ��Ƥ����������������ı仯�����ܻ���ָ��ָ�����Ƥ����Ҳ�Ͷ�Ӧ���ָ����� show ������
				 ���û�µ�Ƥ������д show ��������ô�ò���ά����

	����취��    ����һ�������Ƥ�����ࡣ ���в�ͬ����Ƥ���̳�����ࡣ��ô��ʵ�����������ܣ����Ӵ��룬����Ķ�����


	             
*/
#include <iostream>
#include "DefaltSkin.h"
#include "Skin.h"
#include "SpecialSkin.h"
using namespace std;


int main()
{
	DefaltSkin  ds;
	ds.Show();

	SpecialSkin ss;
	ss.Show();
	return 0;
}
