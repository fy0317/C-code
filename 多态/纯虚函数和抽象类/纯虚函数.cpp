#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*

���麯���﷨ virtual �������� �������������б�= 0;

��һ���������˴��麯���������Ҳ����������

1���޷�ʵ��������
2�����������д�����еĴ��麯��������Ҳ�ǳ�����

*/

class Base
{
public:
	virtual void func() = 0;		//���麯��
};

//Base b1;		//���󣬳������޷�ʵ��������
//Base* b = new Base; //Ҳ����

class test :public Base
{
public:
	
};
//test t1;	//�������д������Ҳ�ǳ����࣬�޷�ʵ����


class Son : public Base
{
public:
	void func()
	{
		cout << "fun����\n";
	}
};


//��̬ʹ���ø����ָ����߸��������
void test1()
{
	Base* base = new Son;		//�����ָ��ʹ�ö�̬
	Son s1;
	Base& base1 = s1;		//���������ʹ�ö�̬

	base->func();
	base1.func();
	delete base;
}

int main()
{
	test1();
	return 0;
}

