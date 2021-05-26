#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
using namespace std;
void test6_1()
{
	int space = 0;
	int total = 0;
	char ch = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			space++;
		total++;
		cin.get(ch);
	}
	cout << space << "个空格，" << total << "个字符" << endl;
}

//cctype库
void test6_8()
{
	cout << "输入字符串，并且用@来结束分析\n";
	char ch;
	int space = 0;		//空格数
	int digits = 0;		//数字
	int chars = 0;		//字符
	int punct = 0;		//逗号和句号
	int others = 0;		//其他字符
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			space++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else others++;
		cin.get(ch);
	}
	cout << "字符：" << chars << " 空格：" << space << " 数字：" << digits << " 逗句号：" << punct << " 其他：" << others << endl;
}

//cinfinish
void test6_13()
{
	const int MAX = 5;
	double fish[MAX];
	cout << "请输入鱼的重量，" << "最多" << MAX << "个。" << "输入q结束\n";
	cout << "fish #1：";
	int i = 0;
	while (i <MAX && cin >> fish[i])		//当输入的不是数字时，由于类型不匹配，cin将返回false
	{
		if (++i < MAX)
			cout << "fish #" << i + 1 << ":";
	}
	double total = 0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "没有鱼\n";
	else cout << i << "条鱼的平均重量：" << total / i << endl;
}
//当cin输入类型不匹配时，重置输入，并重新输入
void test6_14()
{
	const int MAX = 5;
	int goal[MAX];
	cout << "请输入分数：\n";
	for (int i = 0; i < MAX; i++)
	{
		cout << "round #" << i + 1 << ":";
		while (!(cin >> goal[i]))
		{
			cin.clear();
			/*不处理错误数据的话，例如输入一个q，由于类型不匹配，不会给goal[i]赋值，q会一直存储在输入队列中，
			当下一次输入时，输入队列中还是q，还是不会给goal[i]赋值，将死循环*/
			while (cin.get() != '\n')		
				continue;		//不能用break
			cout << "请输入数字：\n";
		}
	}
	double total = 0;
	for (int i = 0; i < MAX; i++)
		total += goal[i];
	cout << "平均分：" << total / MAX << endl;
}
int main()
{
	//test6_1();
	//test6_8();
	//test6_13();
	test6_14();
	return 0;
}
