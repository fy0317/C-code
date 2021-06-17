#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//普通实现计算器
class Calculator
{
public:
	double GetResult(string oper)
	{
		if (oper == "+")
			return m_num1 + m_num2;
		else if (oper == "-")
			return m_num1 - m_num2;
		else if (oper == "*")
			return m_num1 * m_num2;
	}
	double m_num1;
	double m_num2;
};


//利用多态实现计算器

//1、组织结构清晰
//2、可读性强
//3、对于前期和后期的扩展及维护性高

class AbstractCalculator
{
public:
	virtual double getResult()
	{
		return 0;
	}
	double m_num1;
	double m_num2;
};
class AddCalculator :public AbstractCalculator
{
public:
	double getResult()
	{
		return m_num1 + m_num2;
	}
};

class SubCalculator :public AbstractCalculator
{
public:
	double getResult()
	{
		return m_num1 - m_num2;
	}
};

class MulCalculator :public AbstractCalculator
{
public:
	double getResult()
	{
		return m_num1 * m_num2;
	}
};


void test1()
{
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 11;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.GetResult("+") << endl;
	cout << c.m_num1 << "-" << c.m_num2 << "=" << c.GetResult("-") << endl;
	cout << c.m_num1 << "*" << c.m_num2 << "=" << c.GetResult("*") << endl;
}

void test2()
{
	AbstractCalculator* abc = new AddCalculator;		//发生多态
	abc->m_num1 = 10;
	abc->m_num2 = 11;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;
	abc = new SubCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 11;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;
	abc = new MulCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 11;
	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main()
{
	//test1();
	test2();
	return 0;
}

