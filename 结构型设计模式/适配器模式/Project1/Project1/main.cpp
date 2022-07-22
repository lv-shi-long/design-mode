
#include "common.h"

/*
	������ģʽ�� ��ĳ���ӿ���Ҫ����ĳ������Ϊ������ʱ�򣬸ò��������ͺ����еĲ������Ͳ�ƥ�䣬�޷�����
	��ô����Ҫ�õ����ģʽ�����񣬹��ڵĲ���������ǵģ�����ŷ�޵Ĳ���������ڵģ���ô����Ҫһ��ת�ӿ�
	����ת����

	������ģʽ  �ַ�Ϊ �����������Ͷ�����������
	��ɲ��֣�  Ŀ��ӿ��ࡣ������Ҫ���õĽӿڣ����� �����ڵ��й���ͷ��
	           �������ࡣ   ���е�ʵ�ֺõĽӿڡ�  ��������ڵ�ŷ�޲�ڡ�
			   �������ࡣ   ������ת�����߲����ݵ��ࡣ

			   �������� �� �������� �̳��� ��������(�Ǽ̳о����ʵ���˽ӿڵ���)��
			   ���������� �� �������� �ۺ��� ��������(�Ǽ̳о����ʵ���˽ӿڵ���)��

*/

#include "Computer.h"
#include "SDCardImpl.h"
#include "TFCardImpl.h"

#include "ClassAdapter.h"
#include "ObjectAdapter.h"

int main()
{
	Computer com;
	SDCard* sd = new SDCardImpl();
	TFCard* tf = new TFCardImpl();
	cout << com.RedadSD(sd) << endl;
	com.WrireSD(sd);
	//com.RedadSD(tf);
	//  �������޷����� TFCard �����ġ����Ծ��޷�����TFCARD �Ľӿ�

	// ͨ���� �������������̳��� tf card �࣬Ҳ�̳��� sdcard �࣬��ô�ÿ��Ե���
	// tf �Ķ�д�����ˡ�
	ClassAdapter* catf = new ClassAdapter();
	cout << com.RedadSD(catf) << endl;
	com.WrireSD(catf);

	TFCardImpl tfi;
	ObjectAdapter oba(&tfi);
	oba.WriteSD("jjjjj");
	cout << oba.ReadSD() << endl;
	
	return 0;
}
