//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base�е�func����\n";
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
//		cout << "Son�е�func����\n";
//	}
//};
//
//int Son::m_A = 200;
//void test1()
//{
//
//	//ͨ��������ʣ�
//	Son s1;
//	cout << "ͨ��������ʣ�s1.m_A = " <<s1.m_A << endl;
//	cout << "ͨ��������ʣ�s1.Base::m_A = " << s1.Base::m_A << endl;
//
//	//ͨ���������ʣ�
//
//	cout << "ͨ���������ʣ�m_A = " << Son::m_A << endl;
//
//	//��һ��::����ͨ��������ʽ����   �ڶ���:: ��ʾ���ʸ����������µĳ�Ա
//	cout << "ͨ���������ʣ�m_A = " << Son::Base::m_A << endl;
//}
//
//void test2()
//{
//	Son s1;
//
//	//ͨ���������
//	cout << "ͨ���������\n";
//	s1.func();
//	s1.Base::func();
//
//	//ͨ����������
//	cout << "ͨ����������\n";
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
