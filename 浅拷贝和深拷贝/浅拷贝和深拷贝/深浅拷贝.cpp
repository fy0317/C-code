//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������\n";
//	}
//	Person(int age, int heigt)
//	{
//		m_age = age;
//		m_heigt = new int(heigt);
//		cout << "Person���вι��캯������\n";
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������\n";
//		m_age = p.m_age;
//		//m_heigt = p.m_heigt;	//Ĭ�Ͽ�������ʹ�õķ�ʽ��ǳ�������ᵼ�������ظ��ͷ�
//		m_heigt = new int(*p.m_heigt);
//	}
//
//	//�ͷſռ�ʱ��ʹ��ϵͳĬ�ϵĿ������캯�����ᵼ�¶��������ظ��ͷ�
//	~Person()
//	{
//		if (m_heigt != NULL)
//		{
//			delete m_heigt;
//			m_heigt = NULL;
//		}
//		cout << "Person��������������\n";
//	}
//	int m_age;
//	int* m_heigt;
//};
//
////��ǳ����
//
//void test1()
//{
//	Person p1(18,160);
//	Person p2(p1);		
//	cout << "p1�����䣺" << p1.m_age << "p1����ߣ�" << *p1.m_heigt <<endl;
//	cout << "p2�����䣺" << p2.m_age << "p1����ߣ�" << *p2.m_heigt <<endl;
//}
//
//// ��ʼ���б�
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
