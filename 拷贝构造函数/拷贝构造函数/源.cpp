#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person Ĭ�Ϲ��캯���ĵ���\n";
	}
	Person(int age)
	{
		cout << "Person �вι��캯���ĵ���\n";
		m_age = age;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person �������캯���ĵ���\n";
	}

	~Person()
	{
		cout << "Person ������������\n";
	}

	int m_age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������

void test1()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2�����䣺" << p2.m_age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ

void dowork(Person p)
{
	;
}
void test2()
{
	Person p1;
	dowork(p1);		//�������ÿ������캯��
}

//3��ֵ��ʽ���ؾֲ�����
Person dowork1()
{
	Person p;
	return p;
}
void test3()
{
	Person p = dowork1();
}

//Ĭ�����3��������1��Ĭ�Ϲ��캯��  2��Ĭ����������   3��Ĭ�Ͽ������캯��


class Person1
{
public:
	Person1()
	{
		cout << "Person1��Ĭ�Ϲ��캯������\n";
	}

	Person1(int age)
	{
		cout << "Person1���вι��캯������\n";
		m_age = age;
	}

	//Person1(const Person1& p)
	//{
	//	m_age = p.m_age;
	//	cout << "Person1�Ŀ������캯������\n";

	//}
	~Person1()
	{
		cout << "Person1��������������\n";
	}
	int m_age;
};

void test4()
{
	Person1 p1;
	p1.m_age = 19;
	Person1 p2(p1);
	cout << "p2�����䣺" << p2.m_age << endl;

}

//���д���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯���������ṩ�������캯��
//���д�˿������캯�����������Ͳ����ṩ�������캯����Ĭ�Ϻ��вΣ�
class Person2
{
public:
	Person2(int age)
	{
		m_age = age;
	}
	~Person2()
	{
		cout << "Person2��������������\n";
	}
	int m_age;
};
class Person3
{
public:
	Person3(const Person3& p)
	{
		m_age = p.m_age;
	}
	~Person3()
	{
		cout << "Person3��������������\n";
	}
	int m_age;
};

void test5()
{
	//Person2 p;			//����û��Ĭ�Ϲ��캯��
	Person2 p1(28);		
	Person2 p2(p1);		//�������ṩ�������캯��
	cout << "p2�����䣺" << p2.m_age << endl;
}

void test6()
{
	//Person3 p1;		//����û��Ĭ�Ϲ��캯��
	//Person3 p2(10);		//����û���вι��캯��
	
}
int main()
{
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
	//test1();
	//2��ֵ���ݵķ�ʽ������������ֵ
	//test2();
	//3��ֵ��ʽ���ؾֲ�����
	//test3();

	//test4();
	//test5();
	test6();
	return 0;
}
