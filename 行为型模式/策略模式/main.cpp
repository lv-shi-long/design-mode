#include "common.h"

/*
	����ģʽ�� �ǽ�һϵ���㷨����װ������ʹ��������໥�滻����ģ�巽��ģʽʵ����Ȼ���ƣ�����
	          ģ�巽��ǿ������ �㷨������ ĳ�����軹δʵ�֡�  ����ģʽǿ������ ����֮���໥�滻��
			  ����ɶ�һ��������ɫ��
	
	��ɣ�    ��������࣬��������࣬������ɫ�ࣨ����һ�����ԡ���

*/

#include "SalesMan.h"
int main()
{
	StrategyA sa;
	StrategyB sb;
	SalesMan sm1(&sa);
	SalesMan sm2(&sb);

	sm1.SalesManShow();
	sm2.SalesManShow();

	return 0;
}

