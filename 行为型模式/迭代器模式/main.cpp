#include "common.h"

/*
	迭代器模式：  提供一个对象来按照某种顺序访问聚合对象中的一系列数据，而不暴露聚合对象的内部表示。

	元素角色    ：  数据的构成者。
	抽象聚合角色：  某元素的组织者。（提供增加，删除，创造迭代类的功能）
	具体聚合角色：  实现抽象角色提供的接口。

	抽象迭代器类：  定义 hasNext  Next 接口。 是聚合角色返回的类。
	具体迭代器类：  通过聚合 （具体聚合角色） 的结构的访问指针，实现 hasNext 和 Next 接口
*/

#include "StudentAgreeator.h"
#include "AbstractIterator.h"

int main()
{
	StudentAgreeator sa;
	Student s1("张三", 1);
	Student s2("李四", 2);
	Student s3("王五", 3);
	Student s4("赵六", 9);

	sa.Add(s1);
	sa.Add(s2);
	sa.Add(s3);
	sa.Add(s4);

	StudentIterator si = sa.GetIterator();
	
	while (si.hasNext())
	{
		Student s = si.next();
		s.Show();
	}

	return 0;
}

