//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Myinteger
//{
//	friend ostream& operator<< (ostream& cout, Myinteger myint);
//public:
//	//重载前置++
//	Myinteger& operator++()		//返回引用是为了一直对一个对象进行++
//	{
//		++m_num;
//		return *this;
//	}
//	//重载后置++
//	Myinteger operator++(int)		//后置++返回值，因为返回的是一个局部对象，函数结束后，tmp就被释放了
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
