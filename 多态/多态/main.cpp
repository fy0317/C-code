#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void Speak()		//����virtual����������һ���麯��ָ��vfptr��ָ���麯����  vftable,�ڱ���ڲ���¼һ���麯���ĵ�ַ
								//�������д��������̳и���ʱ���Ὣvfptr�̳У�
								//�麯�����д�ŵ��Ǹ����Speak��ַ�������д�ˣ��������е�Speak��ַ�Ḳ�Ǹ����Speak��ַ
	{
		cout << "�����ڽ�\n";
	}
};

class Cat :public Animal
{
public:
	void Speak()
	{
		cout << "è�ڽ�\n";
	}
};

class Dog :public Animal
{
public:
	void Speak()
	{
		cout << "���ڽ�\n";
	}
};

//��̬��̬������������
//1���м̳й�ϵ
//2��������д������麯��  
//��д�� ������������ֵ�������б���ȫ���

//��̬��̬ʹ�ã������ָ���������  ִ���������

/*
	��ַ���		�ڱ���׶ξ�ȷ�������ĵ�ַ
	�����ִ�������еĺ�������������Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣�Ҳ���ǵ�ַ���

*/

void Dospeak(Animal& animal)
{
	animal.Speak();
}

void test1()
{
	cout << sizeof(Animal) << endl;
	Cat cat;
	Dog dog;
	Dospeak(cat);
	Dospeak(dog);
}
int main()
{

	test1();
	return 0;
}

