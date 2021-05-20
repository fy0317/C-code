//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//class Phone
//{
//public:
//	Phone(string Pname)
//	{
//		cout << "手机的构造函数调用\n";
//		m_Pname = Pname;
//	}
//	string m_Pname;
//	~Phone()
//	{
//		cout << "手机的析构函数调用\n";
//
//	}
//};
//class Person
//{
//public:
//	//m_phone(Pname) 相当于 Phone m_phone = Pname;		隐式转换法调用构造函数
//	Person(string name, string Pname): m_name(name), m_phone(Pname)
//	{
//		cout << "人的构造函数调用\n";
//	}
//	string m_name;
//	Phone m_phone;
//	~Person()
//	{
//		cout << "人的析构函数调用\n";
//	}
//};
//
////当其他类对象作为本类成员，构造时先构造类对象，再构造自身
//
////当其他类对象作为本类成员，析构顺序和构造相反
//void test()
//{
//	Person p("张三", "华为");
//	cout << p.m_name << "拿着" << p.m_phone.m_Pname << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}