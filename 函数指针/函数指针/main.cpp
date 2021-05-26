#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数指针和回调函数
double betsy(int);
double pam(int);
void estimate(int lines, double (*pf)(int));
void test7_18()
{
	int code;
	cout << "需要多少行代码?";
	cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code, betsy);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);
}
double betsy(int lns)
{
	return 0.05 * lns;
}
double pam(int lns)
{
	return 0.03 * lns + 0.004 * lns * lns;
}
void estimate(int lines, double (*pf)(int))
{
	cout << lines << "lines will take ";
	cout << pf(lines) << "hour(s)\n";
}


//函数指针数组
const double* f1(const double arr[], int n);
const double* f2(const double [], int );
const double* f3(const double* , int);

typedef const double* (*p_fun)(const double*, int);

void test7_19()
{
	double av[3] = { 1112.3, 1542.6, 227.9 };
	const double* (*p1)(const double[], int) = f1;
	auto p2 = f2;

	cout << "用函数指针调用函数：\n";
	cout << "地址/数值:\n";
	cout << p1(av, 3) << ":" << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

	//函数指针数组
	const double* (*pa[3])(const double*, int) = { f1, f2, f3 };

	auto pb = pa;
	cout << "用函数指针数组调用函数：\n";
	cout << "pa: 地址/数值:\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
	cout << "pb: 地址/数值:\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ":" << *pb[i](av, 3) << endl;
	//函数指针数组指针
	auto pc = &pa;
	cout << "pc: 地址/数值:\n";
	cout << (*pc)[0](av, 3) << ":" << *(*pc)[0](av, 3) << endl;

	//不使用auto函数指针数组指针
	cout << "不使用auto函数指针数组指针\n";
	const double* (*(*pd)[3])(const double*,int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ":" << *pdb << endl;	
	cout << (*pd)[2](av, 3) << ":" << *((*pd)[2](av, 3)) << endl;

}
const double* f1(const double arr[], int n)
{
	return arr;
}
const double* f2(const double arr[], int)
{
	return arr + 1;
}
const double* f3(const double* arr, int)
{
	return arr + 2;
}
int main()
{
	//test7_18();
	test7_19();
	return 0;
}
