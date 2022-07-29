#include "common.h"



#include "common.h"

/*
	备忘录模式： 又叫快照模式，在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态，
				以便以后当需要时能将该对象恢复到原先保存的状态。

	组成部分：  发起角色。 该角色 定义存储 状态，和恢复状态的方法。
	           状态角色。 用来保存发起角色的状态。
			   管理者角色(又叫看门人角色)。  用一系列数据结构，存储 状态角色。一个或者多个，功发起角色 
			   保存状态和恢复状态。


*/

#include "Caretaker.h"
#include "FighterMemento.h"
#include "Fighter.h"

int main()
{
	Fighter f;
	f.Display();

	Caretaker ca;

	ca.SetMemento(f.SaveState());
	f.Beat();
	f.Beat();
	f.Display();

	f.RecoverState(ca.GetMemento());
	f.Display();

	return 0;
}

