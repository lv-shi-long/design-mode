
#include "common.h"

/*
	�Ž�ģʽ: ��һ����������ά�ȵı仯ʱ������ͨ������������������� ��ը����������ʹ���Ž�ģʽ

	��ɲ��֣� ���󹹽��ࡣ �ۺ���ʵ�ֵ�������Ǹ��ӿ��ࡣ
	          ���幹���ࡣ ʵ���˳��󹹽���ķ������ڸ÷����� ͨ������ ʵ�������ķ������ҵ��

			  ����ʵ�����ɫ�� ʵ���� �����ҵ��
			  ����ʵ�����ɫ�� ʵ���˳�����ʵ�ֽ�ɫ�Ľӿڡ�

*/

#include "Mac.h"
#include "WindowsSystem.h"
int main()
{
	AviFile af;
	RmviFIle rmf;

	Mac mac(&af);
	WindowsSystem wins(&af);

	Mac mac2(&rmf);
	WindowsSystem wins2(&rmf);

	mac.Display("��Ӱ");
	wins.Display("��Ӱ");

	mac2.Display("��Ӱ");
	wins2.Display("��Ӱ");

	return 0;
}

