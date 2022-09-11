#include "common.h"

/*
	 
	 ���󹤳�ģʽ�� ��ģʽ��Ϊ�˽�� ��������ģʽ ֻ����һ���Ʒ������ �����⡣���繤����Ȼ��ͬ������
				   ֻ�������ȡ�������ͬ�Ĺ������������� ���� �ǲ�ͬ����Ŀ��ȡ�

				   ÿ����һ�� ��Ʒ ��ô��Ҫ����һ���������������� һ����Ʒ�࣬��ô�͵�����һ����Ʒ������
				   ��������Ӹ� Latee ��Ʒ�� American ��Ʒ  ��ô�͵��������� �����ࡣ�Ƚ��鷳��

				   ����  �������˿��Դ��� ���ȣ������Դ��� ��Ʒ���������������󹤳���������ٶ���һ��
				   ������Ʒ�ķ�����
	 
	 ʵ�ַ�ʽ���� ����һ�����󹤳��࣬���涨�� �������������������ͬ���ࡣ

*/

#include "CoffeeStore.h"
#include "AmericanCoffee.h"
#include "AmericanDesert.h"
#include "AmericanFactory.h"

#include "LateeCoffe.h"
#include "LateeDesert.h"
#include "LateeFactory.h"

int main()
{
	CoffeeStore cs;
	AmericanFactory amfa;
	LateeFactory lfa;

	cs.OrderCoffee(&amfa);
	cs.OrderDesert(&amfa);

	cs.OrderCoffee(&lfa);
	cs.OrderDesert(&lfa);

	return 0;
}
