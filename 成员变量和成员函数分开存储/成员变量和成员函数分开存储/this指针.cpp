#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//this ָ��ָ��   �����õĳ�Ա����   �����Ķ���
		this->age = age;
	}
	//void PersonAdd(Person& p)
	//{
	//	this->age += p.age;
	//}

	//ʵ�ֶ����ӣ����ض���ı���
	//��Ϊthisָ��ָ���˶���*this���Ƕ��������¶���PersonAdd
	Person& PersonAdd(Person& p)		//������������÷�ʽ���أ����Ƿ���ֵ������ÿ������캯��
										//���¹���һ������Ȼ�󷵻أ�����ԭ���Ķ�����
	{
		this->age += p.age;
		return *this;
	}
	int age;
};

//this ָ������ã�

// 1��������Ƴ�ͻ

//�βκ�����������ͬ
void test1()
{
	Person p1(18);
	cout << "p1������:" << p1.age << endl;
}
// 2�����ض�������*this 

void test2()
{
	Person p2(10);
	Person p3(10);
	p3.PersonAdd(p2);
	cout << "p3�����䣺" << p3.age << endl;
}

//������
void test3()
{
	Person p2(10);
	Person p3(10);

	//��ʽ���˼��
	p3.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2);
	cout << "p3�����䣺" << p3.age << endl;
}
int main()
{
	test1();
	//test2();
	test3();
	return 0;
}