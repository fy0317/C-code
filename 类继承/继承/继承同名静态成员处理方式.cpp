//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base中的func调用\n";
//	}
//};
//
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son中的func调用\n";
//	}
//};
//
//int Son::m_A = 200;
//void test1()
//{
//
//	//通过对象访问：
//	Son s1;
//	cout << "通过对象访问：s1.m_A = " <<s1.m_A << endl;
//	cout << "通过对象访问：s1.Base::m_A = " << s1.Base::m_A << endl;
//
//	//通过类名访问：
//
//	cout << "通过类名访问：m_A = " << Son::m_A << endl;
//
//	//第一个::代表通过类名方式访问   第二个:: 表示访问父类作用域下的成员
//	cout << "通过类名访问：m_A = " << Son::Base::m_A << endl;
//}
//
//void test2()
//{
//	Son s1;
//
//	//通过对象访问
//	cout << "通过对象访问\n";
//	s1.func();
//	s1.Base::func();
//
//	//通过类名访问
//	cout << "通过类名访问\n";
//	Son::func();
//	Son::Base::func();
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//
