#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class AbstractDriking
{
public:

	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
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
	//煮水
	virtual void Boil()
	{
		cout << "煮开水\n";
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲咖啡\n";
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中\n";
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶\n";
	}
};

class Tea :public AbstractDriking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮开水\n";
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲茶叶\n";
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中\n";
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞\n";
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

