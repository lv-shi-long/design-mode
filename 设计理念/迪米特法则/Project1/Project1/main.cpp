#include "common.h"

/*
     �����ط��� ָ�����������ʵ�����û��ֱ��ͨ�ţ���ô�ò��÷����໥���á������õ�����
	 ��ת���õ��á���Ŀ���ǽ���ϵͳ������ԡ�

	 �������� �� ��˿�� ���Ƕ��� getName �ӿڡ� ���ʵ��һ�� meeting �ӿ���Ҫ�õ��������ӿڡ�
	 ��ô ��Ӧ��Ҫ����ȥ��  ��˿�� getName �ӿڡ�

	 Ӧ�����һ���������� ���� ���Ǻͷ�˿���� �࣬���� ͨ�������� ���� ˫���� getName �ӿڡ�

*/

#include "Fans.h"
#include "Star.h"
#include "Agent.h"
int main()
{
	Fans f;
	f.SetName("xxxxfans");

	Star s;
	s.SetName("xxxxstar");

	Agent a(&f, &s);
	a.Metting();
	return 0;
}
