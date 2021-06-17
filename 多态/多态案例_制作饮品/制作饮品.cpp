#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class AbstractDriking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDriking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ\n";
	}

	//����
	virtual void Brew()
	{
		cout << "�忧��\n";
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��\n";
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��\n";
	}
};

class Tea :public AbstractDriking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ\n";
	}

	//����
	virtual void Brew()
	{
		cout << "���Ҷ\n";
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��\n";
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�������\n";
	}
};

void doWork(AbstractDriking* abs)
{
	abs->makeDrink();
	delete abs;
}
void test1()
{
	doWork(new Coffee);
	cout << "---------------------------\n";
	doWork(new Tea);
}
int main()
{
	test1();
	return 0;
}

