//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Myinteger
//{
//	friend ostream& operator<< (ostream& cout, Myinteger myint);
//public:
//	//����ǰ��++
//	Myinteger& operator++()		//����������Ϊ��һֱ��һ���������++
//	{
//		++m_num;
//		return *this;
//	}
//	//���غ���++
//	Myinteger operator++(int)		//����++����ֵ����Ϊ���ص���һ���ֲ����󣬺���������tmp�ͱ��ͷ���
//	{
//		Myinteger tmp = *this;
//		m_num++;
//		return tmp;
//	}
//	Myinteger()
//	{
//		m_num = 0;
//	}
//private:
//	int m_num;
//};
//ostream& operator<< (ostream& cout, Myinteger myint)
//{
//	cout << myint.m_num;
//	return cout;
//}
//
//
//void test1()
//{
//	Myinteger myint;
//	//cout << ++myint << endl; 
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
