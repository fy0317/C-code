#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<new>
using namespace std;
const int BUF = 152;
const int N = 5;
char buffer[BUF];
//��λnew�����
void test9_10()
{
	double* p1, * p2;
	int i;
	p1 = new double[N];
	p2 = new (buffer)double[N];			//��buffer��ָ�����򿪱ٿռ��p2
	for (i = 0; i < N; i++)
		p2[i] = p1[i] = 1000 + 20.0 * i;
	cout << "������ַ��" << p1 << " ���ص�ַ��" << (void*)buffer << endl;
	cout << "�ڴ����ݣ�\n";
	for (i = 0; i < N; i++)
	{
		cout << p1[i] << "at" << &p1[i] << ";";
		cout << p2[i] << "at" << &p2[i] << endl;
	}
	double* p3, * p4;
	p3 = new double[N];
	p4 = new(buffer)double[N];
	for (i = 0; i < N; i++)
		p4[i] = p3[i] = 1000 + 40.0 * i;
	cout << "�ڴ����ݣ�\n";
	for (i = 0; i < N; i++)
	{
		cout << p3[i] << "at" << &p3[i] << ";";
		cout << p4[i] << "at" << &p4[i] << endl;
	}
	delete[]p1;
	p1 = new double[N];
	p2 = new(buffer + N * sizeof(double))double[N];
	for (i = 0; i < N; i++)
		p2[i] = p1[i] = 1000 + 60.0 * i;
	cout << "�ڴ����ݣ�\n";
	for (i = 0; i < N; i++)
	{
		cout << p1[i] << "at" << &p1[i] << ";";
		cout << p2[i] << "at" << &p2[i] << endl;
	}

	/*
		�˴�����delete[]p2����delete[]p4��
		��Ϊp2��p4����buffer������Ŀռ䣬��buffer�������ڶ���
	*/
	delete[]p1;
	delete[]p3;
}
int main()
{
	test9_10();
	system("pause");
	return 0;
}

