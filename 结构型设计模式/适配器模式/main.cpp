
#include "common.h"

/*
	适配器模式： 当某个接口需要传入某个类作为参数的时候，该参数的类型和现有的参数类型不匹配，无法传入
	那么就需要用到这个模式，就像，国内的插口是两个角的，但是欧洲的插口是三个口的，那么就需要一个转接口
	进行转化。

	适配器模式  又分为 类适配器，和对象适配器。
	组成部分：  目标接口类。（最终要调用的接口）比如 两个口的中国插头。
	           适配者类。   现有的实现好的接口。  类比三个口的欧洲插口。
			   适配器类。   用来做转化两者不兼容的类。

			   类适配器 中 适配器类 继承了 适配者类(是继承具体的实现了接口的类)。
			   对象适配器 中 适配器类 聚合了 适配者类(是继承具体的实现了接口的类)。

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
	//  这里是无法传入 TFCard 这个类的。所以就无法调用TFCARD 的接口

	// 通过这 类适配器，它继承了 tf card 类，也继承了 sdcard 类，那么久可以调用
	// tf 的读写函数了。
	ClassAdapter* catf = new ClassAdapter();
	cout << com.RedadSD(catf) << endl;
	com.WrireSD(catf);

	TFCardImpl tfi;
	ObjectAdapter oba(&tfi);
	oba.WriteSD("jjjjj");
	cout << oba.ReadSD() << endl;
	
	return 0;
}
