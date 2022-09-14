#include "common.h"

/*

	�н���ģʽ�� �ֽе�ͣģʽ������һ���н��ɫ����װһϵ�ж���֮��Ľ�����ʹԭ�ж���֮������
				��ɢ���ҿ��Զ����ظı�����֮��Ľ�����

	��ɲ��֣�   �����н��ߣ�������ͬʱ����֮�佻���ĳ��󷽷���
				�����н��ߣ�ʵ����ͬ��֮�佻���Ľӿڣ�������ͬ�¶���, ͬʱ�־ۺ�ͬ�¶���
				����ͬ�¶��󣨱����н��߶��󣨾ۺϣ�������ͬ��֮��Ľ����ӿڣ�
				����ͬ������� ��ʵ��ͬ��֮�佻���ľ��巽����
*/

#include "HouseOwner.h"
#include "MediatorConstructure.h"
#include "Tenant.h"

int main()
{
	MediatorConstructure mec;
	HouseOwner h("房东", &mec);
	Tenant t("租户", &mec);

	mec.SetHouseOwner(&h);
	mec.SetTenant(&t);

	h.Contacat("我有房子要租赁");
	t.Contacat("我要租房子");

	return 0;
}


