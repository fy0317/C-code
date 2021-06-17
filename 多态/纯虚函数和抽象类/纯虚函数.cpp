#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*

纯虚函数语法 virtual 返回类型 函数名（参数列表）= 0;

当一个类中有了纯虚函数后，这个类也称作抽象类

1、无法实例化对象
2、子类必须重写父类中的纯虚函数，否则也是抽象类

*/

class Base
{
public:
	virtual void func() = 0;		//纯虚函数
};

//Base b1;		//错误，抽象类无法实例化对象
//Base* b = new Base; //也错误

class test :public Base
{
public:
	
};
//test t1;	//如果不重写，子类也是抽象类，无法实例化


class Son : public Base
{
public:
	void func()
	{
		cout << "fun调用\n";
	}
};


//多态使用用父类的指针或者父类的引用
void test1()
{
	Base* base = new Son;		//父类的指针使用多态
	Son s1;
	Base& base1 = s1;		//父类的引用使用多态

	base->func();
	base1.func();
	delete base;
}

int main()
{
	test1();
	return 0;
}

