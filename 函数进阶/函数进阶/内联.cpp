#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
inline double square(double x)
{
	return x * x;
}
void test8_1()
{
	double a = 2.1, b = 2.2, c = 3.5;
	cout << square(a) << endl;
	cout << square(b) << endl;
	cout << square(c) << endl;

}
int main8_1()
{
	test8_1();
	return 0;
}
