#define _CRT_SECURE_NO_WARNINGS


/*

��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ���޷����õ�������������룬������ڴ�й¶

�����ʽ���������е�����������Ϊ  ������   ����   ��������
 
*/
#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	virtual void Speak() = 0;
	Animal()
	{
		cout << "Animal���캯������\n";
	}
	//~Animal()
	//{
	//	cout << "Animal����������\n";
	//}
	//virtual ~Animal()		//������
	//{
	//	cout << "Animal����������\n";
	//}

	virtual ~Animal() = 0;		//��������		Ҫ������ʵ��

	//�д���������������ദ�ڳ����࣬�޷�ʵ��������	���ֻ�������������ǳ�����

};

Animal::~Animal()
{
	cout << "Animal�Ĵ�����������\n";
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������\n";
		m_name = new string(name);
	}
	void Speak()
	{
		cout << *m_name << "�ڽ�\n";
	}
	~Cat()
	{
		cout << "Cat������������\n";
		if (m_name)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};

void test1()
{
	//�ȹ��츸�࣬�ٹ�������
	Animal* animal = new Cat("Tom");
	animal->Speak();

	//�����ʹ��������������ָ��������ʱ��������������������������������ж������ݣ�������ڴ�й¶
	//
	delete animal;
}
int main()
{
	test1();
	return 0;
}
