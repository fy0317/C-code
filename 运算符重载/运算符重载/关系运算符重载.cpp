#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��ϵ���������
class Person
{
public:
	bool operator==(Person p)
	{
		if (p.m_age == m_age && p.m_name == m_name)
			return true;
		else return false;
	}
	bool operator!=(Person p)
	{
		if (p.m_age == m_age && p.m_name == m_name)
			return false;
		else return true;
	}
	Person(string name, int age)
	{
		m_age = 0;
		m_name = name;
	}
	string m_name;
	int m_age;
};
void test1()
{
	Person p1("����", 20);
	Person p2("����", 18);
	if (p1 == p2)
		cout << "p1��p2���\n";
	else cout << "p1��p2�����\n";
	if (p1 != p2)
		cout << "p1��p2�����\n";
	else cout << "p1��p2���\n";
	
}

//������������
//���غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test;
	}
};

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test2()
{
	MyPrint m_print;
	m_print("Hello World");		//����ʹ�������ǳ��������ã���˳�Ϊ�º���
	//�º����ǳ���û�й̶���д��
	MyAdd m_add;
	int ret = m_add(100, 200);
	cout << "\nret = " << ret << endl;
	//������������
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}
