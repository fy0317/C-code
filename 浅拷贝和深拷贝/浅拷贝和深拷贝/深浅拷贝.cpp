//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用\n";
//	}
//	Person(int age, int heigt)
//	{
//		m_age = age;
//		m_heigt = new int(heigt);
//		cout << "Person的有参构造函数调用\n";
//	}
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用\n";
//		m_age = p.m_age;
//		//m_heigt = p.m_heigt;	//默认拷贝函数使用的方式（浅拷贝）会导致数据重复释放
//		m_heigt = new int(*p.m_heigt);
//	}
//
//	//释放空间时，使用系统默认的拷贝构造函数，会导致堆区数据重复释放
//	~Person()
//	{
//		if (m_heigt != NULL)
//		{
//			delete m_heigt;
//			m_heigt = NULL;
//		}
//		cout << "Person的析构函数调用\n";
//	}
//	int m_age;
//	int* m_heigt;
//};
//
////深浅拷贝
//
//void test1()
//{
//	Person p1(18,160);
//	Person p2(p1);		
//	cout << "p1的年龄：" << p1.m_age << "p1的身高：" << *p1.m_heigt <<endl;
//	cout << "p2的年龄：" << p2.m_age << "p1的身高：" << *p2.m_heigt <<endl;
//}
//
//// 初始化列表
//class Person1
//{
//public:
//	Person1(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//};
//void test2()
//{
//	Person1 p1(10, 20, 30);
//	cout << "m_a = " << p1.m_a << endl;
//	cout << "m_b = " << p1.m_b << endl;
//	cout << "m_c = " << p1.m_c << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
