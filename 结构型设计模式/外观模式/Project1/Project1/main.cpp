

#include "common.h"

/*
	���ģʽ�� ָ���ǵ�һ��ϵͳ�ǳ����ӵ�ʱ�������Ҫ���������ϵͳ���в�������ʱ����Ҫ
	��������Ϥ�ڲ�ϵͳ�Ĺ��ɣ����������Χ������ô���ṩһ�� Facade �࣬�������ⲿ�ṩͳһ��
	�ӿڡ��ⲿ����ͨ���ӿڵ��� �Ӷ��ﵽ����ϵͳ�Ĳ�����

	��ɲ��֣� ��۽�ɫ����ϵͳ��ɫ��

	���ӣ�  ĳλ������͵Ĵ�ү��ÿ�춼�Ὺ�ƣ����յ�����ô��Ҫ������Щ�ӿڣ���ô����Ҫ֪����Щ�ӿ�
	�����ơ� ���鷳�����Ƕ���һ�� Facade �࣬����࣬�ṩͳһ�Ľӿڸ� ��λ��ү����


*/
#include "SmartApplicationFacade.h"


int main()
{
	SmartApplicationFacade smt;
	smt.DealWithMessage("please on k");
	smt.DealWithMessage("off xx");
	smt.DealWithMessage("hahah");

	return 0;
}

