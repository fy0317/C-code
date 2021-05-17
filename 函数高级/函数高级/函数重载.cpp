#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数重载
//函数名相同，提高复用性
//重载条件： 1、同一个作用域下
//			 2、函数名相同
//			 3、函数参数类型不同，或者个数不同或者顺序不同

//void func1()
//{
//	cout << "这是func1的调用\n";
//}

//void func1(int a)
//{
//	cout << "这是func1(int a)的调用\n";
//}

//函数重载遇到引用
void fun(int& a)
{
	cout << "fun(int& a)调用\n";
}

void fun(const int& a)
{
	cout << "fun(const int& a)调用\n";
}

//函数重载遇到默认参数
//出现二义性
void fun1(int a)
{
	cout << "fun1(int a)的调用\n";
}
void fun1(int a, int b = 10)
{
	cout << "fun1(int a, int b = 10)的调用\n";
}

int main()
{
	int a = 10;
	//fun(a);
	//fun(10);
	//fun1(a);		//二义性
	fun1(a,20);
	return 0;
}