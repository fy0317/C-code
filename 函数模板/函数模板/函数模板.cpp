#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//ʹ�ú���ģ�彻������������ֵ
template<typename T>
void Swap(T& a, T& b);
void test8_11()
{
	int i = 10, j = 20;
	cout << "����ǰi��j = " << i << "," << j << endl;
	Swap(i, j);
	cout << "������i��j = " << i << "," << j << endl;
	double a = 1.3, b = 4.77;
	cout << "����ǰa��b = " << a << "," << b << endl;
	Swap(a, b);
	cout << "������a��b = " << a << "," << b << endl;
	string str1 = "hello";
	string str2 = "world";
	Swap(str1, str2);
	cout << str1 << "," << str2 << endl;
}
template<typename T>	//����������
void Swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}



//����ģ������
template<typename T>
void Swap(T* a, T* b, int n);
void Show(int a[]);
const int Lim = 8;
void test8_12()
{
	int i = 10, j = 20;
	Swap(i, j);
	cout << i << "," << j << endl;
	int d1[Lim] = { 0, 7, 0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
	cout << "����ǰ��\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "������\n";
	Show(d1);
	Show(d2);
}
template <typename T>
void Swap(T* a, T* b, int n)
{
	T tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}
void Show(int arr[])
{
	cout << arr[0] << arr[1] << "/";
	cout << arr[2] << arr[3] << "/";

	for (int i = 4; i < Lim; i++)
		cout << arr[i];
	cout << endl;

}
int main()
{
	//test8_11();
	test8_12();
	system("pause");
	return 0;
}
