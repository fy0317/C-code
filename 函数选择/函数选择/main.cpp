#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <typename T>
void ShowArray(T arr[], int n);
template <typename T>
void ShowArray(T* arr[], int n);
struct debets
{
	char name[50];
	double amount;
};
void test8_14()
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debets mr_E[3] =
	{
		{"张三", 2400},
		{"李四", 1300},
		{"王五", 2000}
	};
	double* pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &(mr_E[i].amount);
	cout << "显示debets：\n";
	ShowArray(things, 6);
	ShowArray(pd, 3);
}

template <typename T>
void ShowArray(T arr[], int n)
{
	cout << "template A:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
template <typename T>
void ShowArray(T* arr[], int n)
{
	cout << "template B:\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}

//自定义选择
template <typename T>
T lesser(T a, T b)
{
	cout << "使用模板\n";
	return a > b ? b : a;
}
int lesser(int a, int b)
{
	cout << "常规函数\n";
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a > b ? b : a;
}
void test8_15()
{
	int m = 20;
	int n = -13;
	double x = 10.4;
	double y = 11.7;
	cout << lesser(m, n) << endl;
	cout << lesser(x, y) << endl;
	cout << lesser<>(x, y) << endl;
	cout << lesser<int>(x, y) << endl;
}

//关键字decltype
template <class T1, class T2>
auto Add(T1 x, T2 y)
{
	typedef decltype (x + y) xpy;
	xpy num = x + y;
	return num;
}
int fun(int& a)
{
	a = 100;
	return a;
}
void test()
{
	int x = 10;
	double y = 1.34;
	auto sum = Add(x, y);
	cout << sum << endl;
	decltype (fun(x)) b = 10;		//不会实际调用函数
	cout << x << ' ' << b << endl;

}
int main()
{
	//test8_14();
	//test8_15();
	test();
	system("pause");
	return 0;
}

