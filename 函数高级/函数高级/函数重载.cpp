#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��������
//��������ͬ����߸�����
//���������� 1��ͬһ����������
//			 2����������ͬ
//			 3�������������Ͳ�ͬ�����߸�����ͬ����˳��ͬ

//void func1()
//{
//	cout << "����func1�ĵ���\n";
//}

//void func1(int a)
//{
//	cout << "����func1(int a)�ĵ���\n";
//}

//����������������
void fun(int& a)
{
	cout << "fun(int& a)����\n";
}

void fun(const int& a)
{
	cout << "fun(const int& a)����\n";
}

//������������Ĭ�ϲ���
//���ֶ�����
void fun1(int a)
{
	cout << "fun1(int a)�ĵ���\n";
}
void fun1(int a, int b = 10)
{
	cout << "fun1(int a, int b = 10)�ĵ���\n";
}

int main()
{
	int a = 10;
	//fun(a);
	//fun(10);
	//fun1(a);		//������
	fun1(a,20);
	return 0;
}