//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	//1、通过成员函数重载+号
//	//Person operator+(Person& p)
//	//{
//	//	Person tmp;
//	//	tmp.m_a = this->m_a + p.m_a;
//	//	tmp.m_b = this->m_b + p.m_b;
//	//	return tmp;
//	//}
//	int m_a;
//	int m_b;
//};
//
////2、全局函数重载+号 
//Person operator+(Person& p1, Person& p2)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
//
//Person operator+(Person& p1, int x)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + x;
//	tmp.m_b = p1.m_b + x;
//	return tmp;
//}
//void test1()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	Person p2;
//	p2.m_a = 10;
//	p2.m_b = 10;
//	//成员函数重载本质调用：
//	//Personp3 = p1.operator+(p2);
//
//	//全局函数重载本质调用：
//	//Personp3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//
//	//运算符重载  也可发生函数重载 
//	Person p4 = p1 + 100;
//	cout << p3.m_a << " " << p3.m_b << endl;
//	cout << p4.m_a << " " << p4.m_b << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}