#include "common.h"
 

/*
	观察者模式： 又被称为发布-订阅（Publish/Subscribe）模式，它定义了一种一对多的依赖关系，让多个观察者
				对象同时监听某一个主题对象。这个主题对象在状态变化时，会通知所有的观察者对象，使他们能够自
				动更新自己。


	组成部分：   抽象观察者。具体观察者。 抽象被观察者，具体被观察者。 
	            被观察者 聚合了多个观察者。


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