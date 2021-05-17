/*
	代码区、全局区、栈区、堆区

*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int global_a = 10;
//int global_b = 20;
//const int const_global_a = 10;
//const int const_global_b = 20;
//int main()
//{
//	int local_a = 10;
//	int local_b = 20;
//	static int static_a = 10;
//	static int static_b = 20;
//	const int const_local_a = 10;
//	const int const_local_b = 20;
//	//全局变量
//	cout << "全局变量的地址: " << &global_a << endl;
//	cout << "全局变量的地址: " << &global_b << endl;
//	//局部变量
//	cout << "局部变量的地址: " << &local_a << endl;
//	cout << "局部变量的地址: " << &local_b << endl;
//	//静态变量
//	cout << "静态变量的地址：" << &static_a << endl;
//	cout << "静态变量的地址：" << &static_b << endl;
//
//	//全局常量
//	cout << "全局常量的地址：" << &const_global_a << endl;
//	cout << "全局常量的地址：" << &const_global_b << endl;
//
//	//局部常量
//	cout << "局部常量的地址：" << &const_local_a << endl;
//	cout << "局部常量的地址：" << &const_local_b << endl;
//
//	//字符串常量
//	cout << "字符串常量的地址：" << &"hello world" << endl;
//	return 0;
//}

//用new在堆区开辟空间
int* fun()
{
	return new int(10);
}
void test1()
{
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
}
void test2()
{
	int* arr = new int[10];		//在堆区开辟一片连续的空间
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	delete[] arr;
	
}

//引用  ： 给变量其别名

// 注意事项：
//引用必须初始化

//引用初始化后，不可以更改引用
//引用作为函数参数
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void test3()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	//int& b = a;
	//b = 20;
	//cout << "a = " << a << " b = " << b << endl;
	//cout << "a的地址：" << &a << " b的地址：" << &b << endl;
}

//引用作函数返回值
//不能返回局部变量的引用
//函数的调用的左值
int& f()
{
	static int a = 10;
	return a;
}
void test4()
{
	int& b = f();
	cout << b << endl;
	f() = 100;		//函数作为左值
	cout << b << endl;

}

//引用的本质就是指针常量
// int& p = a;
//编译器将其转换为 int* const p = &a;


//常量引用：
// 
//用来保护形参
void Print(const int& p)
{
	cout << p << endl;
	//p = 1000;//非法
}
void test5()
{
	int a = 10;
	int& p = a;
	//int& q = 10;	//非法
	const int& q = 10;	//合法		编译器将其变为 int tmp = 10, const int& q = tmp;
	Print(a);
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}