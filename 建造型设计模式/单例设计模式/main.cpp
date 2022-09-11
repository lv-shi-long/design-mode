#include "common.h"
#include <mutex>
/*
	单例设计模式就是  一个类只能实例一个 对象。

	又分为 懒汉式 和 饿汉式。
		懒汉式：  顾名思义： 比较懒，用到的时候才创建。
		饿汉式：  顾名思义： 在用到之前就创建好了。如果不用也会创建。
*/

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

template<typename T> 
class SingletonLazyNotSafe
{
private:

	SingletonLazyNotSafe();
	~SingletonLazyNotSafe();

public:
	static T* value;

	static T* GetInstance()
	{
		if (value == NULL)
		{
			value = new T();
		}
		return value;
	}

};

template<typename T>
T *SingletonLazyNotSafe<T>::value = NULL;

mutex mt;
class SingletonLazySafe1
{
public:
	static SingletonLazySafe1* GetInstance()
	{
		if (NULL == instance)
		{
			lock_guard<mutex> lck(mt);
			if (instance == NULL)
			{
				instance = new SingletonLazySafe1();
			}
		}
		return instance;
	}

private:
	static SingletonLazySafe1* instance;
	SingletonLazySafe1() {}
	SingletonLazySafe1(const SingletonLazySafe1& other) {}
	SingletonLazySafe1& operator=(SingletonLazySafe1& other) {}
};
SingletonLazySafe1 *SingletonLazySafe1::instance = NULL;

class SingletonLazySafe2
{
public:
	static SingletonLazySafe2* GetInstance()
	{
		static SingletonLazySafe2 instance;
		return &instance;
	}

private:
	SingletonLazySafe2() {}
	SingletonLazySafe2(const SingletonLazySafe2& other) {}
	SingletonLazySafe2& operator=(SingletonLazySafe2& other) {}
};


class SingletonHungry
{
public:
	static SingletonHungry* GetInstance()
	{
		return &instance;
	}

private:
	static SingletonHungry instance;
	SingletonHungry() {}
	SingletonHungry(const SingletonHungry& other) {}

};
SingletonHungry SingletonHungry::instance;


 
int main()
{
	MyClass *sln1 = SingletonLazyNotSafe<MyClass>::GetInstance();
	MyClass *sln2 = SingletonLazyNotSafe<MyClass>::GetInstance();
	
	string ifsame = sln1 == sln2 ? "是同一个变量" : "不是同一个变量";
	cout << ifsame << endl;
	
	SingletonLazySafe1* s11 = SingletonLazySafe1::GetInstance();
	SingletonLazySafe1* s12 = SingletonLazySafe1::GetInstance();
	ifsame = s11 == s12 ? "是同一个变量" : "不是同一个变量";
	cout << ifsame << endl;


	SingletonLazySafe2* s21 = SingletonLazySafe2::GetInstance();
	SingletonLazySafe2* s22 = SingletonLazySafe2::GetInstance();
	ifsame = s21 == s22 ? "是同一个变量" : "不是同一个变量";
	cout << ifsame << endl;

	SingletonHungry* h1 = SingletonHungry::GetInstance();
	SingletonHungry* h2 = SingletonHungry::GetInstance();
	ifsame = h1 == h2 ? "是同一个变量" : "不是同一个变量";
	cout << ifsame << endl;

	
	return 0;
}
