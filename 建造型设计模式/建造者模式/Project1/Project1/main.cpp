


#include "common.h"

/*
	create by lsl
	������ģʽ �� ��һ�������ɷǳ����ӣ��ɶ����ۺ϶��ɵ�ʱ�򣬹������̻�ܸ��ӡ�����ʹ�ý�����ģʽ
				 �� ������У��������ߣ����彨���ߣ�ָ�����࣬��Ʒ�ࡣ

	���紴��һ�� �����࣬������Ħ�� �� Ofo ���ࡣ���� ��������������ܵĲ��衣
	            ��ô 
				���������� �� ���쳵�� ���쳵��  �������г� �����ӿڡ�

				���彨����ʵ���������ӿڡ�

				director �� ��������������ӿڡ����ҷ������ս���� �������ӿڵĵ���Ҳ���Է�װ���������ڲ�

    ��һ����Ĺ��캯������̫��ʱ�������ý�����ģʽ�ع���

*/

#include"Diretor.h"
#include "Computer.h"
int main()
{
	OfoBuilder ofb;
	MobileBuilder mob;

	Diretor diof(&ofb);
	Diretor dimob(&mob);

	Bike* of = diof.Construct();
	Bike* mo = dimob.Construct();

	of->Show();
	mo->Show();

	Computer::ComputerBuilder cob;
	Computer* com = cob.BuildCpu("Intel")
		->BuildBoard("huashuo")
		->BuildMemory("kingston")
		->BuildComputerEnd();

	com->Show();
	return 0;
}
