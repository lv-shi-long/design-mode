#include "common.h"
 

/*
	�۲���ģʽ�� �ֱ���Ϊ����-���ģ�Publish/Subscribe��ģʽ����������һ��һ�Զ��������ϵ���ö���۲���
				����ͬʱ����ĳһ���������������������״̬�仯ʱ����֪ͨ���еĹ۲��߶���ʹ�����ܹ���
				�������Լ���


	��ɲ��֣�   ����۲��ߡ�����۲��ߡ� ���󱻹۲��ߣ����屻�۲��ߡ� 
	            ���۲��� �ۺ��˶���۲��ߡ�


*/
#include "WeiXinUser.h"
#include "SubscriptionSubject.h"

int main()
{
	WeiXinUser w1, w2, w3;

	SubscriptionSubject s1;
	s1.Attach(&w1);
	s1.Attach(&w2);
	s1.Attach(&w3);

	s1.Notify("dfsfsdf");

	return 0;
}