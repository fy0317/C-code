#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
	/*
		构造函数分类：
		按照参数分类： 1、无参（默认构造函数）  2、有参
		按照类型分类： 1、普通构造   2、拷贝构造
	*/
public:
	Person()
	{
		cout << "Person的无参构造函数\n";
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数\n";
	}
	//拷贝构造函数
	Person(const Person& p)		//前面加const并且要以引用方式传值
	{
		cout << "Person的拷贝参数构造调用\n";
		//将传入的人的所有属性拷贝到当前人身上
		age = p.age;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用\n";
	}
	int age;
};

void test2()
{
	//构造函数的调用：
	//1、括号法
	//Person p;		//默认构造函数的调用
	//Person p1(10);		//有参构造函数的调用;
	//Person p2(p1);		//拷贝构造函数的调用
	//cout << "p1的年龄：" << p1.age << endl;
	//cout << "p2的年龄：" << p2.age << endl;

	//注意事项1：
	//调用默认构造函数时，不要加();
	//Person p3();		//不会有输出，因为编译器会将其认为是一个函数的声明

	//2、显示法：
	Person p1;					//无参（默认）构造调用
	Person p2 = Person(10);		//有参构造调用
	Person p3 = Person(p2);		//拷贝构造
	Person(10);					//匿名对象，特点：当前执行结束后，系统会立刻回收掉匿名对象
	cout << "aaa" << endl;		//Person(10)的析构调用会在输出aaa前

	//注意事项2：
	//不要用拷贝构造函数 初始化匿名对象			编译器会认为Person（p3） == Person p3；重定义，报错
	//Person(p3);  //重定义，报错

	//3、隐式转化法
	Person p4 = 10;		//相当于 Person p4 = Person(10)		有参构造的调用
	Person p5 = p4;		//相当于 Person p5 = Person(p4)     拷贝构造
}
int main()
{
	test2();
	return 0;
}