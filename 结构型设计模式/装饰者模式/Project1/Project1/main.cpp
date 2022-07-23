
#include "common.h"

/*
	 װ����ģʽ�� ָ�ڲ��ı����ж���ṹ������£���̬�ظ��ö�������һЩְ�𣨼���������⹦�ܣ���ģʽ��
	 �����ӣ�     һ����͵꣬�г��������������ࡣÿ�����ֿ������һЩ ���ϣ���������� ֮��ġ�
	             ������ü̳еķ�ʽ �Ļ���ÿ����һ�� ��ͻ��� һ�����ϣ����ᵼ�������������͡�

	 ��ɣ�      ���󹹽��ࡣ   ��ȿ�͡�
	            ���幹���ࡣ    ��ȳ��������档
				����װ�����ࡣ  �̳��˿�� �� �ۺ��˿�͵� һ���ࡣ
				����װ�����ࡣ  �Ƕ�̬���ӵĹ��ܣ�������ϡ�

	 ӦΪ���幹����̳��� ���󹹽��࣬�����Ҫ����һ�� ������ֻ������һ���������ɣ�ͬ������һ������Ҳ����ˡ�
	             ������ι����Ͽ�ͣ�����Ϊ��Ͱ����˹����� ָ�룬���캯�����Դ��롣
*/

#include "Egg.h"
#include "FriedNoodle.h"
#include "FriedRice.h"
#include "Bacon.h"

int main()
{
	FriedRice friedRice;
	cout << "desc: " << friedRice.GetDesc() << " �۸�: " << friedRice.Cost() << "Ԫ" << endl;

	Egg *egg = new Egg(&friedRice);
	cout << "desc: " << egg->GetDesc() << " �۸�: " << egg->Cost() << "Ԫ" << endl;

	egg = new Egg(egg);
	cout << "desc: " << egg->GetDesc() << " �۸�: " << egg->Cost() << "Ԫ" << endl;

	egg = new Egg(egg);
	cout << "desc: " << egg->GetDesc() << " �۸�: " << egg->Cost() << "Ԫ" << endl;

	//  ����Ĳ���
	Bacon* bacon = new Bacon(&friedRice);
	cout << "desc: " << bacon->GetDesc() << " �۸�: " << bacon->Cost() << "Ԫ" << endl;

	bacon = new Bacon(bacon);
	cout << "desc: " << bacon->GetDesc() << " �۸�: " << bacon->Cost() << "Ԫ" << endl;

	bacon = new Bacon(bacon);
	cout << "desc: " << bacon->GetDesc() << " �۸�: " << bacon->Cost() << "Ԫ" << endl;

	return 0;
}



