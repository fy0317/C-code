#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
void test2()
{
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		//else cout << ++ch;
		else cout << ch + 1;		//会发生整型提升
		cin.get(ch);
	}
}

#include<cctype>
void test6_1()
{
	char ch;
	//cin.get(ch);
	//while (ch != '@')
	//{
	//	if (isdigit(ch))
	//	{
	//		cin.get(ch);
	//		continue;
	//	}
	//	else if (islower(ch))
	//	{
	//		ch = toupper(ch);
	//	}
	//	else if (isupper(ch))
	//		ch = tolower(ch);
	//	cout << ch;
	//	cin.get(ch);
	//}
	while ((ch = cin.get()) != '@')
	{
		if (!isdigit(ch))
		{
			if (islower(ch))
				ch = toupper(ch);
			else if (isupper(ch))
				ch = tolower(ch);
			cout << ch;
		}
	}
}

#include<array>
void test6_2()
{
	array<double, 10>donations = { 0 };
	double input = 0;
	double sum = 0;
	double average = 0;
	int i = 0;
	int cnt = 0;
	cin >> input;
	while (input != 0 && i < 10)
	{
		donations[i++] = input;
		cin >> input;
	}
	for (i = 0; i < 10; i++)
		sum += donations[i];
	average = sum / 10;
	for (i = 0; i < 10; i++)
		if (donations[i] > average)
			cnt++;
	cout << "平均值：" << average << " 有" << cnt << "个数大于平均值\n";
}

void test6_3()
{
	cout << "c) carnivore		p) pianist\n";
	cout << "t) tree		    g) game   \n";
	cout << "请选择：\n";
	char ch;
	ch = cin.get();
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{
		cout << "c) carnivore		p) pianist\n";
		cout << "t) tree		    g) game   \n";
		cout << "请选择：\n";
		cin.get(ch);
	}
	switch (ch)
	{
	case 'c':
		cout << "选择了carnivore\n";
		break;
	case 'p':
		cout << "选择了pianist\n";
		break;	
	case 't':
		cout << "选择了tree\n";
		break;
	case 'g':
		cout << "选择了game\n";
		break;
	}
}

void test6_5()
{
	float salary = 0.0, tax;
	cout << "输入你的薪水：\n";
	cin >> salary;
	while (salary > 0)
	{
		if (salary <= 5000)
			tax = 0;
		else if (salary <= 15000)
			tax = (salary - 5000) * 0.1;
		else if (salary < 35000)
			tax = 10000 * 0.1 + (salary - 15000) * 0.15;
		else tax = 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
		cout << "你需要缴税：" << tax << endl;
		cout << "下一次输入：\n";
		cin >> salary;
	}
}

struct Person
{
	string name;
	double fund;
};
void test6_6()
{
	int num;
	cout << "请输入捐赠人数：\n";
	cin >> num;
	cin.get();
	Person* arr = new Person[num];
	cout << "输入捐赠者的信息：\n";
	for (int i = 0; i < num; i++)
	{
		cout << "姓名：";
		getline(cin, arr[i].name);
		cout << "捐款数：";
		cin >> arr[i].fund;
		cin.get();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "姓名：" << arr[i].name << " 捐款数：" << arr[i].fund << endl;
	}
	delete[]arr;
}

void test6_7()
{
	int cnt1 = 0;		//元音
	int cnt2 = 0;		//辅音
	int other = 0;		//其他
	char words[40];
	cout << "输入一个单词：（输入q结束）\n";
	cin >> words;
	while (strcmp(words, "q"))
	{
		if (!isalpha(words[0]))
			other++;
		else
		{
			switch (words[0])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cnt1++;
				break;
			default:
				cnt2++;
				break;
			}
		}
		cout << "下一个单词\n";
		cin >> words;
	}
	cout << "元音：" << cnt1 << "个" << "辅音：" << cnt2 << "个" << " 其他：" << other << "个" << endl;
}


int main()
{
	//test2();
	//test6_1();
	//test6_2();
	//test6_3();
	//test6_5();
	//test6_6();
	test6_7();
	return 0;
}

