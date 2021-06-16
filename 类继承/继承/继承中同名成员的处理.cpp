//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base中func的调用\n";
//	}
//	void func1(int a)
//	{
//		cout << "Base中func1的调用\n";
//	}
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son中func的调用\n";
//	}
//
//	void func1()
//	{
//		cout << "Son中func1的调用\n";
//	}
//	int m_A;
//};
//
//void test1()
//{
//	Son s1;
//	cout << "Son中的m_A：" << s1.m_A << endl;
//	//通过子类对象访问父类中同名成员属性时，要加作用域
//	cout << "Base中的m_A：" << s1.Base::m_A << endl;
//
//	//如果没有同名的，则调用父类中的成员函数，如果有同名函数，直接调用则调用子类中的函数
//	s1.func();
//	s1.Base::func();
//
//	//如果子类中出现了父类中同名的函数，子类中的函数会隐藏父类中的同名成员函数
//	//如果子类和父类的函数参数不同，无法通过参数不同来访问父类中的函数，只能加作用域来访问
//
//	s1.func1();
//	//s1.func1(100);		//错误，父类中的void func1(int a ) 被隐藏了
//	s1.Base::func1(100);		//正确
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//
