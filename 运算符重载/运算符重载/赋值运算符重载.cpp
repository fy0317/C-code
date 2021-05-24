//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person& operator=(Person& p)
//	{
//		if (m_age != NULL)
//			delete m_age;
//		m_age = new int(*p.m_age);
//		return *this;
//	}
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	int* m_age;
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//};
//void test()
//{
//	Person p(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p;		//会导致堆区重复释放
//	cout << *p.m_age << endl;
//	cout << *p2.m_age << endl;
//	cout << *p3.m_age << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}