#include "common.h"

/*
	������ģʽ��  �ṩһ������������ĳ��˳����ʾۺ϶����е�һϵ�����ݣ�������¶�ۺ϶�����ڲ���ʾ��

	����ۺϽ�ɫ��  ĳԪ�ص���֯�ߡ����ṩ���ӣ�ɾ�������������Ĺ��ܣ�
	����ۺϽ�ɫ��  ʵ�ֳ����ɫ�ṩ�Ľӿڡ�

	����������ࣺ  ���� hasNext  Next �ӿڡ� �ǾۺϽ�ɫ���ص��ࡣ
	����������ࣺ  ͨ���ۺ� �ۺϽ�ɫ �Ľṹ�ķ���ָ�룬ʵ�� hasNext �� Next �ӿ�
*/

#include "StudentAgreeator.h"
#include "AbstractIterator.h"

int main()
{
	StudentAgreeator sa;
	Student s1("����", 1);
	Student s2("����", 2);
	Student s3("����", 3);
	Student s4("����", 9);

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

