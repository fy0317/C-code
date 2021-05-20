#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person 默认构造函数的调用\n";
	}
	Person(int age)
	{
		cout << "Person 有参构造函数的调用\n";
		m_age = age;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person 拷贝构造函数的调用\n";
	}

	~Person()
	{
		cout << "Person 析构函数调用\n";
	}

	int m_age;
};

//1、使用一个已经创建完毕的对象来初始化一个对象

void test1()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄：" << p2.m_age << endl;
}

//2、值传递的方式给函数参数传值

void dowork(Person p)
{
	;
}
void test2()
{
	Person p1;
	dowork(p1);		//这里会调用拷贝构造函数
}

//3、值方式返回局部对象
Person dowork1()
{
	Person p;
	return p;
}
void test3()
{
	Person p = dowork1();
}

//默认添加3给函数：1、默认构造函数  2、默认析构函数   3、默认拷贝构造函数


class Person1
{
public:
	Person1()
	{
		cout << "Person1的默认构造函数调用\n";
	}

	Person1(int age)
	{
		cout << "Person1的有参构造函数调用\n";
		m_age = age;
	}

	//Person1(const Person1& p)
	//{
	//	m_age = p.m_age;
	//	cout << "Person1的拷贝构造函数调用\n";

	//}
	~Person1()
	{
		cout << "Person1的析构函数调用\n";
	}
	int m_age;
};

void test4()
{
	Person1 p1;
	p1.m_age = 19;
	Person1 p2(p1);
	cout << "p2的年龄：" << p2.m_age << endl;

}

//如果写了有参构造函数，编译器就不会提供默认构造函数，但会提供拷贝构造函数
//如果写了拷贝构造函数，编译器就不会提供其他构造函数（默认和有参）
class Person2
{
public:
	Person2(int age)
	{
		m_age = age;
	}
	~Person2()
	{
		cout << "Person2的析构函数调用\n";
	}
	int m_age;
};
class Person3
{
public:
	Person3(const Person3& p)
	{
		m_age = p.m_age;
	}
	~Person3()
	{
		cout << "Person3的析构函数调用\n";
	}
	int m_age;
};

void test5()
{
	//Person2 p;			//报错，没有默认构造函数
	Person2 p1(28);		
	Person2 p2(p1);		//编译器提供拷贝构造函数
	cout << "p2的年龄：" << p2.m_age << endl;
}

void test6()
{
	//Person3 p1;		//报错，没有默认构造函数
	//Person3 p2(10);		//报错，没有有参构造函数
	
}
int main()
{
	//1、使用一个已经创建完毕的对象来初始化一个对象
	//test1();
	//2、值传递的方式给函数参数传值
	//test2();
	//3、值方式返回局部对象
	//test3();

	//test4();
	//test5();
	test6();
	return 0;
}
