#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��һ��
void _1(void)
{
	cout << "���ϴ�ѧ������" << endl;
}
//�ڶ���
void _2()
{
	double distance = 0;
	cin >> distance;
	cout << "Distance in long = " << distance << " in yard = " << distance * 220 << endl;
}
//������
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
//������
void _4()
{
	int age = 0;
	cout << "�������������" << endl;
	cin >> age;
	cout << age << "��" << 12 * age << "����" << endl;
}
//������
float convert(float f)
{
	return 1.8 * f + 32;
}
void _5()
{
	cout << "���������϶�\n";
	float f = 0;
	cin >> f;
	cout << f << "���϶� = " << convert(f) << "���϶�" << endl;
}
//������
double change(double lyear)
{
	return 63240 * lyear;
}
void _6()
{
	cout << "���������ֵ\n";
	double year = 0;
	cin >> year;
	cout << year << "����= " << change(year) << "���ĵ�λ" << endl;
}
//��7��
void _7()
{
	int hours = 0;
	int minutes = 0;
	cout << "������Сʱ:" << endl;
	cin >> hours;
	cout << "���������:" << endl;
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
