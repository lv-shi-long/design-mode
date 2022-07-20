#include "common.h"
#include <mutex>
/*
	�������ģʽ����  һ����ֻ��ʵ��һ�� ����

	�ַ�Ϊ ����ʽ �� ����ʽ��
		����ʽ��  ����˼�壺 �Ƚ������õ���ʱ��Ŵ�����
		����ʽ��  ����˼�壺 ���õ�֮ǰ�ʹ������ˡ��������Ҳ�ᴴ����
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
	
	string ifsame = sln1 == sln2 ? "��ͬһ������" : "����ͬһ������";
	cout << ifsame << endl;
	
	SingletonLazySafe1* s11 = SingletonLazySafe1::GetInstance();
	SingletonLazySafe1* s12 = SingletonLazySafe1::GetInstance();
	ifsame = s11 == s12 ? "��ͬһ������" : "����ͬһ������";
	cout << ifsame << endl;


	SingletonLazySafe2* s21 = SingletonLazySafe2::GetInstance();
	SingletonLazySafe2* s22 = SingletonLazySafe2::GetInstance();
	ifsame = s21 == s22 ? "��ͬһ������" : "����ͬһ������";
	cout << ifsame << endl;

	SingletonHungry* h1 = SingletonHungry::GetInstance();
	SingletonHungry* h2 = SingletonHungry::GetInstance();
	ifsame = h1 == h2 ? "��ͬһ������" : "����ͬһ������";
	cout << ifsame << endl;

	
	return 0;
}
