#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	static void func()
	{
		m_a = 100;		//��̬��Ա�������Է��ʾ�̬��Ա����,		m_a�����ж������
		//m_b = 20;		//�Ǿ�̬��Ա�������ܷ���,�޷�����m_b���ĸ����������
		cout << "func�ĵ���\n";
	}
	static int m_a;		//��̬��Ա��������������
	int m_b;			//�Ǿ�̬��Ա����
};

int Person::m_a = 0;		//�������ʼ��
void test1()
{
	//1��ͨ���������
	Person p1;
	p1.func();

	//2��ͨ����������
	Person::func();
}
int main()
{
	test1();
	return 0;
}