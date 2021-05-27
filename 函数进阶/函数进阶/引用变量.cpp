#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void swap1(int& a, int& b)
{
	int tmp = b;
	b = a;
	a = tmp;
}
void swap2(int* p, int* q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
void swap3(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main8_4()
{
	int a = 0, b = 0;
	cin >> a >> b;
	int tmp1 = a, tmp2 = b;
	cout << "a = " << a << " b = " << b << endl;
	swap1(a, b);
	cout << "swap1:" << "a = " << a << " b = " << b << endl;
	a = tmp1, b = tmp2;
	swap2(&a, &b);
	cout << "swap2:" << "a = " << a << " b = " << b << endl;
	a = tmp1, b = tmp2;
	swap3(a, b);
	cout << "swap3:" << "a = " << a << " b = " << b << endl;

	system("pause");
	return 0;
}
