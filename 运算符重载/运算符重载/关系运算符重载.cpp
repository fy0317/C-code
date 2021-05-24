#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//关系运算符重载
class Person
{
public:
	bool operator==(Person p)
	{
		if (p.m_age == m_age && p.m_name == m_name)
			return true;
		else return false;
	}
	bool operator!=(Person p)
	{
		if (p.m_age == m_age && p.m_name == m_name)
			return false;
		else return true;
	}
	Person(string name, int age)
	{
		m_age = 0;
		m_name = name;
	}
	string m_name;
	int m_age;
};
void test1()
{
	Person p1("张三", 20);
	Person p2("李四", 18);
	if (p1 == p2)
		cout << "p1和p2相等\n";
	else cout << "p1和p2不相等\n";
	if (p1 != p2)
		cout << "p1和p2不相等\n";
	else cout << "p1和p2相等\n";
	
}

//函数调用重载
//重载后的使用方式非常像函数的调用，因此称为仿函数
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test;
	}
};

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test2()
{
	MyPrint m_print;
	m_print("Hello World");		//由于使用起来非常像函数调用，因此成为仿函数
	//仿函数非常灵活，没有固定的写法
	MyAdd m_add;
	int ret = m_add(100, 200);
	cout << "\nret = " << ret << endl;
	//匿名函数对象
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}
