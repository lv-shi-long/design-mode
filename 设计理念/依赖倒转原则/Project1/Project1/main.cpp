
#include "common.h"
/*
       ������תԭ����Ҫ�� ���һ�� ���� �ɶ���Ӷ�����ɡ������Ӷ�������ͻ�ܶ�����⡣

	   �Ӷ������̫�࣬��ôΪ�� ����������һ���Ӷ����ʱ��������һ���ࡣ��ô ������Ӷ���ᱻ
	   �滻��һ�������ࡣ ������Ӷ���̳�����������ࡣ

*/

#include "Cpu.h"
#include "IntelCpu.h"
#include "HardDisk.h"
#include "KingsTonMemory.h"
#include "Memory.h"
#include "XijieHardDisk.h"
#include "Computer.h"

int main()
{
	IntelCpu *ic = new IntelCpu;
	KingsTonMemory *ktm = new KingsTonMemory;
	XijieHardDisk *xjhd = new XijieHardDisk;

	Computer com(ic, xjhd, ktm);
	com.Run();

	return 0;
}

