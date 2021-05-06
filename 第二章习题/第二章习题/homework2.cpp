#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//第一题
void _1(void)
{
	cout << "东南大学，冯宇" << endl;
}
//第二题
void _2()
{
	double distance = 0;
	cin >> distance;
	cout << "Distance in long = " << distance << " in yard = " << distance * 220 << endl;
}
//第三题
void test1()
{
	cout << "Three bline mice" << endl;
}
void test2()
{
	cout << "See how they run" << endl;
}
void _3()
{
	test1();
	test2();
}
//第四题
void _4()
{
	int age = 0;
	cout << "请输入你的年龄" << endl;
	cin >> age;
	cout << age << "有" << 12 * age << "个月" << endl;
}
//第五题
float convert(float f)
{
	return 1.8 * f + 32;
}
void _5()
{
	cout << "请输入摄氏度\n";
	float f = 0;
	cin >> f;
	cout << f << "摄氏度 = " << convert(f) << "华氏度" << endl;
}
//第六题
double change(double lyear)
{
	return 63240 * lyear;
}
void _6()
{
	cout << "请输入光年值\n";
	double year = 0;
	cin >> year;
	cout << year << "光年= " << change(year) << "天文单位" << endl;
}
//第7题
void _7()
{
	int hours = 0;
	int minutes = 0;
	cout << "请输入小时:" << endl;
	cin >> hours;
	cout << "请输入分钟:" << endl;
	cin >> minutes;
	cout << "Time: " << hours << ":" << minutes << endl;
}
int main()
{
	//_1();
	//_2();
	//_3();
	//_4();
	//_5();
	//_6();
	_7();
	return 0;
}
