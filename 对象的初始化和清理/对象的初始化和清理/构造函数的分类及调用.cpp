#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
	/*
		���캯�����ࣺ
		���ղ������ࣺ 1���޲Σ�Ĭ�Ϲ��캯����  2���в�
		�������ͷ��ࣺ 1����ͨ����   2����������
	*/
public:
	Person()
	{
		cout << "Person���޲ι��캯��\n";
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯��\n";
	}
	//�������캯��
	Person(const Person& p)		//ǰ���const����Ҫ�����÷�ʽ��ֵ
	{
		cout << "Person�Ŀ��������������\n";
		//��������˵��������Կ�������ǰ������
		age = p.age;
	}
	//��������
	~Person()
	{
		cout << "Person��������������\n";
	}
	int age;
};

void test2()
{
	//���캯���ĵ��ã�
	//1�����ŷ�
	//Person p;		//Ĭ�Ϲ��캯���ĵ���
	//Person p1(10);		//�вι��캯���ĵ���;
	//Person p2(p1);		//�������캯���ĵ���
	//cout << "p1�����䣺" << p1.age << endl;
	//cout << "p2�����䣺" << p2.age << endl;

	//ע������1��
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��();
	//Person p3();		//�������������Ϊ�������Ὣ����Ϊ��һ������������

	//2����ʾ����
	Person p1;					//�޲Σ�Ĭ�ϣ��������
	Person p2 = Person(10);		//�вι������
	Person p3 = Person(p2);		//��������
	Person(10);					//���������ص㣺��ǰִ�н�����ϵͳ�����̻��յ���������
	cout << "aaa" << endl;		//Person(10)���������û������aaaǰ

	//ע������2��
	//��Ҫ�ÿ������캯�� ��ʼ����������			����������ΪPerson��p3�� == Person p3���ض��壬����
	//Person(p3);  //�ض��壬����

	//3����ʽת����
	Person p4 = 10;		//�൱�� Person p4 = Person(10)		�вι���ĵ���
	Person p5 = p4;		//�൱�� Person p5 = Person(p4)     ��������
}
int main()
{
	test2();
	return 0;
}