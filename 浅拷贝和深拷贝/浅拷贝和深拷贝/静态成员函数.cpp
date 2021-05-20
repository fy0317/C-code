#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//静态成员函数只能访问静态成员变量
class Person
{
public:
	static void func()
	{
		m_a = 100;		//静态成员函数可以访问静态成员变量,		m_a是所有对象共享的
		//m_b = 20;		//非静态成员变量不能访问,无法区分m_b是哪个对象的属性
		cout << "func的调用\n";
	}
	static int m_a;		//静态成员变量在类内声明
	int m_b;			//非静态成员变量
};

int Person::m_a = 0;		//在类外初始化
void test1()
{
	//1、通过对象访问
	Person p1;
	p1.func();

	//2、通过类名访问
	Person::func();
}
int main()
{
	test1();
	return 0;
}