//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//public:
//	//ÖØÔØÇ°ÖÃ--
//	Person& operator--()
//	{
//		m_a--;
//		return *this;
//	}
//	Person operator--(int)
//	{
//		Person tmp;
//		tmp.m_a = m_a;
//		m_a--;
//		return tmp;
//	}
//	Person()
//	{
//		m_a = 10;
//	}
//private:
//	int m_a;
//};
//
//ostream& operator<<(ostream& cout, Person p)
//{
//	cout << p.m_a;
//	return cout;
//}
//void test1()
//{
//	Person p;
//	cout << p << endl;
//	cout << --p << endl;
//	cout << p-- << endl;
//
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
