

#include "common.h"

/*
	原型模式比较简单，就是当对象的构建比较复杂的时候，采用一个已有的对象来构建另外一个对象

	构建又被分为深拷贝和浅拷贝。  浅拷贝 里面的指针和原来对象的指针是指向同一块地址的。
	但是深拷贝 会新开辟一个指针，指针指向的内容 拷贝原来的内容。

*/

#include "MyObject.h"
int main()
{
	MyObject* m1 = new MyObject;

	MyObject* m2 = (MyObject*)m1->Clone();

	cout << m1->ptr << endl << m2->ptr << endl << (m1->ptr == m2->ptr) << endl;

	return 0;
}


