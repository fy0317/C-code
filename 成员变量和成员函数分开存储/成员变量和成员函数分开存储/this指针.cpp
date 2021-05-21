#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//this 指针指向   被调用的成员函数   所属的对象
		this->age = age;
	}
	//void PersonAdd(Person& p)
	//{
	//	this->age += p.age;
	//}

	//实现多次相加，返回对象的本体
	//因为this指针指向了对象，*this就是对象本身，重新定义PersonAdd
	Person& PersonAdd(Person& p)		//如果不是以引用方式返回，而是返回值，会调用拷贝构造函数
										//重新构造一个对象然后返回，不是原来的对象本身
	{
		this->age += p.age;
		return *this;
	}
	int age;
};

//this 指针的作用：

// 1、解决名称冲突

//形参和属性名称相同
void test1()
{
	Person p1(18);
	cout << "p1的年龄:" << p1.age << endl;
}
// 2、返回对象本身用*this 

void test2()
{
	Person p2(10);
	Person p3(10);
	p3.PersonAdd(p2);
	cout << "p3的年龄：" << p3.age << endl;
}

//多次相加
void test3()
{
	Person p2(10);
	Person p3(10);

	//链式编程思想
	p3.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2);
	cout << "p3的年龄：" << p3.age << endl;
}
int main()
{
	test1();
	//test2();
	test3();
	return 0;
}