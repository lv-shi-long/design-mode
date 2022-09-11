#include "common.h"

/*
	ʹ�㣺 �ڿ����У�������еĶ���ʹ�� new ����ʽ��������ô���������仯�ˣ�����
	 new �������ĵط���Ҫ�ı䡣������϶ȸߡ�

	�򵥹���ģʽ�� ��ָ����Ĵ��� ������ new �� ��ʽ��������һ��������ͨ�������������Ȼ��
	������Ӧ�Ķ��󡣲�����23�����ģʽ��һ�֡� �����������������ʱ���øĴ��� ʱ�Ĵ��롣
	ֻ�øĹ����Ĵ���



*/
#include "CoffeeStore.h"
#include "AmericanFactory.h"
#include "LateeFactory.h"

int main()
{
	CoffeeStore cs;
	// �򵥹���ģʽ��������
	cout << "�򵥹���ģʽ��������" << endl;
	Coffee* c1 = cs.OrderCoffee("Latee");
	
	Coffee* c2 = cs.OrderCoffee("AmericanCoffee");

	// ��������ģʽ��������
	cout << "��������ģʽ��������" << endl;
	AbstractFactory* lfa = new LateeFactory();
	AbstractFactory* amfa = new AmericanFactory();

	cs.OrderCoffeEx(lfa);
	cs.OrderCoffeEx(amfa);
	
	return 0;
}




