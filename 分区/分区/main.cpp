/*
	��������ȫ������ջ��������

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
//	//ȫ�ֱ���
//	cout << "ȫ�ֱ����ĵ�ַ: " << &global_a << endl;
//	cout << "ȫ�ֱ����ĵ�ַ: " << &global_b << endl;
//	//�ֲ�����
//	cout << "�ֲ������ĵ�ַ: " << &local_a << endl;
//	cout << "�ֲ������ĵ�ַ: " << &local_b << endl;
//	//��̬����
//	cout << "��̬�����ĵ�ַ��" << &static_a << endl;
//	cout << "��̬�����ĵ�ַ��" << &static_b << endl;
//
//	//ȫ�ֳ���
//	cout << "ȫ�ֳ����ĵ�ַ��" << &const_global_a << endl;
//	cout << "ȫ�ֳ����ĵ�ַ��" << &const_global_b << endl;
//
//	//�ֲ�����
//	cout << "�ֲ������ĵ�ַ��" << &const_local_a << endl;
//	cout << "�ֲ������ĵ�ַ��" << &const_local_b << endl;
//
//	//�ַ�������
//	cout << "�ַ��������ĵ�ַ��" << &"hello world" << endl;
//	return 0;
//}

//��new�ڶ������ٿռ�
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
	int* arr = new int[10];		//�ڶ�������һƬ�����Ŀռ�
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	delete[] arr;
	
}

//����  �� �����������

// ע�����
//���ñ����ʼ��

//���ó�ʼ���󣬲����Ը�������
//������Ϊ��������
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
	//cout << "a�ĵ�ַ��" << &a << " b�ĵ�ַ��" << &b << endl;
}

//��������������ֵ
//���ܷ��ؾֲ�����������
//�����ĵ��õ���ֵ
int& f()
{
	static int a = 10;
	return a;
}
void test4()
{
	int& b = f();
	cout << b << endl;
	f() = 100;		//������Ϊ��ֵ
	cout << b << endl;

}

//���õı��ʾ���ָ�볣��
// int& p = a;
//����������ת��Ϊ int* const p = &a;


//�������ã�
// 
//���������β�
void Print(const int& p)
{
	cout << p << endl;
	//p = 1000;//�Ƿ�
}
void test5()
{
	int a = 10;
	int& p = a;
	//int& q = 10;	//�Ƿ�
	const int& q = 10;	//�Ϸ�		�����������Ϊ int tmp = 10, const int& q = tmp;
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