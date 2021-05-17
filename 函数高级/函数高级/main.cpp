//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////C++中，形参可以赋初值
//int sum1(int a, int b, int c)
//{
//	return a + b + c;
//}
//
////如果某个位置的形参赋了初值，则后面的参数都要赋初值
////int sum 3(int a, int b = 20, int c)
////{
////	return a + b + c;
////}
//
////如果传入了参数，就用传入的参数
//int sum2(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
////如果函数的声明有默认参数，函数的实现就不能有默认参数
////int fun2(int a = 10, int b = 20);			//错误
////int fun2(int a = 20, int b = 10)		//声明和实现的同一个变量只能有一个有默认参数
////{
////	return a + b;
////}
//
//
////占位参数
////返回值类型  函数名（数据类型）{}
//void func(int a, int = 10)			//第二个只是占位参数，占位参数也可以初始化参数
//{
//	cout << "This is a func\n";
//}
//
//

//int main()
//{
//	//int a = 10, b = 20, c = 30;
//	//cout << sum1(a, b, c) << endl;
//	//cout << sum2(a) << endl;
//	//func(10, 20);		//20在func函数中找不到
//	func1(2);
//	return 0;
//}
