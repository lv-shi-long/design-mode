

#include "common.h"

/*
	里氏替换原则 的核心就是 任何出现父类的地方。子类一定可以出现。子类只能扩充父类的功能，不能修改父类的方法。

	解决的问题： 如果子类改了父类的方法，那么 如果整个系统运用多态比较多的话，那么 出错的概率会非常大。

	反例： 正方形 无法继承自 长方形。（虽然在数学领域，正方形无疑是长方形。）

	// 解决办法：
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
	//  这里的  如果传入长方形那么 没问题但是如果传入正方形 就不行。

	Square s;
	s.SetLength(2), s.SetWidth(4);
	//resize(s);  //  此处会发生死循环。因为Square 重写了 Rectangle 的方法。


	RectangleEx re;
	re.SetLength(2), re.SetWidth(4);
	resizeEx(re);  // 此时  正方形 由于没有继承自长方形所以 这里不能传入正方形参数

	return 0;
}

