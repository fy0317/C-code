#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;

//����һ����
class Circle
{
	//����Ȩ��
public:		//����Ȩ��

	//����
	int r;

	//��Ϊ��һ���ú�������ʾ
	double calcalate()
	{
		return 2 * PI * r;
	}
};

void test1()
{
	//ͨ��Բ�ഴ��һ�������Բ  ������		ʵ������ͨ��һ���ഴ��һ������
	Circle c1;
	c1.r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calcalate() << endl;
}

class Student
{
	//Ȩ��
public:
	//���е����Ժ���Ϊͳ��Ϊ��Ա

	//����		Ҳ�г�Ա���Ի��߳�Ա����
	string name;
	int id;

	//��Ϊ		��Ա�������Ա����
	void Print()
	{
		cout << "����:" << name << " ѧ�ţ�" << id << endl;
	}

	void Setname(string Name)
	{
		name = Name;
	}
};
void test2()
{
	Student s1 = { "����", 2033113 };
	s1.Print();
	Student s2;
	s2.Setname("����");
	s2.id = 1;
	s2.Print();
}

//���Ȩ��
class Person
{
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func()		//���ڿ��Է���
	{
		m_name = "����";
		m_car = "����";
		m_password = 123456;
	}
};
void test3()
{
	Person p1;
	p1.m_name = "����";
	//p1.m_car = "������";  //���Ϸ����޷���Ȩ��
	//p1.m_password = 12313123;	//���Ϸ�
}

//class ��struct ������
// struct Ĭ��Ȩ����public    class Ĭ��Ȩ����privata
struct C1
{
	int m_a;
};
class C2
{
	int m_b;
};
void test4()
{
	C1 c1;
	c1.m_a = 10;
	C2 c2;
	//c2.m_b = 10;	//�Ƿ�����Ȩ��
}

//ͨ������Ա������Ϊ˽��
//�ô���
//1�������Լ��������ݵĶ�дȨ��
//2������дȨ�ޣ����Լ�����ݵ���Ч��
class people
{
	string m_name;	//�������ɶ���д
	int m_age;		//���䣺ֻ��
	string m_car;	//��������д
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		m_age = 20;
		return m_name;
	}
	int getage()
	{
		return m_age;
	}
	void setcar(string car)
	{
		m_car = car;
	}
};

void test5()
{
	people p1;
	p1.setname("����");
	cout << "������" << p1.getname() << endl;
	cout << "���䣺" << p1.getage() << endl;
	p1.setcar("����");
}

int main()
{
	//test1();
	//test2();
	test5();
	return 0;
}
