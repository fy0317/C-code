#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��\n";
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "è��˵��\n";
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "����˵��\n";
	}
};

//ִ��˵������
//��ַ��󶨣��ڱ���׶�ȷ�������ĵ�ַ
//���Ҫִ��Cat�е�speak�����������ĵ�ַ�Ͳ�����󶨣���Ҫ�����н׶ΰ󶨣�Ҳ���ǵ�ַ���
//�ڸ����еĺ���ǰ����   virtual �ؼ���
void Speak(Animal& cat)
{
	cat.speak();
}
void test1()
{
	Cat cat;
	Dog dog;
	Animal animal;
	Speak(cat);
	Speak(dog);
	Speak(animal);
}

//��̬��̬����������
//1���м̳й�ϵ
//2������Ҫ��д������麯������д��������������ֵ����������ȣ�
//�������еĺ�����virtual�ɼӿɲ���

//��̬��̬��ʹ�ã�
//�����ָ���������  ��ָ������Ķ���
int main()
{
	test1();
	return 0;
}

