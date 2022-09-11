

#include "common.h"

/*
	�����滻ԭ�� �ĺ��ľ��� �κγ��ָ���ĵط�������һ�����Գ��֡�����ֻ�����丸��Ĺ��ܣ������޸ĸ���ķ�����

	��������⣺ ���������˸���ķ�������ô �������ϵͳ���ö�̬�Ƚ϶�Ļ�����ô ����ĸ��ʻ�ǳ���

	������ ������ �޷��̳��� �����Ρ�����Ȼ����ѧ���������������ǳ����Ρ���

	// ����취��
*/
#include "Rectangle.h"
#include "Square.h"
#include "Quadrilateral.h"
#include "SquareEx.h"
#include "RectangleEx.h"

void resize(Rectangle &rp)
{
	while (rp.GetLength() <= rp.GetWidth())
	{
		rp.SetLength(rp.GetLength() + 1);
	}
	cout << "after set length = " << rp.GetLength() << " width = " << rp.GetWidth() << endl;
}

void resizeEx(RectangleEx &re)
{
	while (re.GetLength() <= re.GetWidth())
	{
		re.SetLength(re.GetLength() + 1);
	}
	cout << "after set length = " << re.GetLength() << " width = " << re.GetWidth() << endl;
}

int main()
{
	Rectangle r;
	r.SetLength(2), r.SetWidth(4);
	resize(r);
	//  �����  ������볤������ô û���⵫��������������� �Ͳ��С�

	Square s;
	s.SetLength(2), s.SetWidth(4);
	//resize(s);  //  �˴��ᷢ����ѭ������ΪSquare ��д�� Rectangle �ķ�����


	RectangleEx re;
	re.SetLength(2), re.SetWidth(4);
	resizeEx(re);  // ��ʱ  ������ ����û�м̳��Գ��������� ���ﲻ�ܴ��������β���

	return 0;
}

