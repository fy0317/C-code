//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Blank
//{
//
//};
//
//class Person1
//{
//	int m;
//};
//class Person2
//{
//	int m;				//只有非静态成员变量属于类的对象上，其他都不算
//	static int n;		//静态成员变量，不属于类对象上，sizeof，不算其大小
//	void func() {}		//非静态成员函数		不属于类的对象上
//	static void func2(){}	//静态成员函数		不属于类的对象上
//};
//int Person2::n = 0;
//
//void test1()
//{
//	//空对象占用的字节大小是1
////C++为每个空对象分配一个字节的空间，为了区分不同的空对象所占的内存空间
////每个空对象也有一个独一无二的内存地址
//	Blank blank;
//	cout << "空对象占用的大小:" << sizeof(blank) << endl;
//}
//
//void test2()
//{
//	Person1 p0;
//	Person2 p1;
//	cout << "Person1对象所占字节大小：" << sizeof(Person1) << endl;
//	cout << "Person2对象所占字节大小：" << sizeof(Person2) << endl;
//
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
