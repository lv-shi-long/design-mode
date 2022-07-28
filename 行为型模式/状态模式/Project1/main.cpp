
#include "common.h"

/*
	״̬ģʽ:   ����״̬�Ķ��󣬰Ѹ��ӵġ��ж��߼�����ȡ����ͬ��״̬�����У�����״̬���������ڲ�״̬�����ı�
			   ʱ�ı�����Ϊ��

	��ɲ��֣�  ������ɫ��Ӧ�þ���״̬��
	           ����״̬��Ӧ�û�����ɫ��
			   ����ת̨��ʵ�ֳ���״̬�ĸ���ת��״̬�ķ�����

*/
#include "Context.h"
#include "OppenState.h"
#include "CloseState.h"
#include "RunningState.h"
#include "StopState.h"


int main()
{
	Context con;
	con.SetCurrentState(new CloseState());
	con.open();
	con.close();
	con.run();
	con.open();
	con.stop();

	return 0;
}

