
#include "common.h"
/*
       依赖倒转原则主要是 解决一个 对象 由多个子对象组成。但是子对象的类型会很多的问题。

	   子对象如果太多，那么为了 不在新引入一个子对象的时候新增加一个类。那么 具体的子对象会被
	   替换成一个抽象类。 具体的子对象继承自这个抽象类。

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

