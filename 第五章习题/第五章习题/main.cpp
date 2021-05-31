#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
void test1()
{
	int x, y;
	cout << "输入两个整数:\n";
	cin >> x >> y;
	if (x > y)
	{
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
	}
	int sum = 0;
	for (int i = x; i <= y; i++)
		sum += i;
	cout << sum << endl;
} 

#include<array>
void test2()
{
	const int size = 101;
	array<long double, size>arr = { 1 ,1 };
	for (int i = 2; i < size; i++)
	{
		arr[i] = i * arr[i - 1];
	}
	for (int i = 0; i < size; i++)
	{
		cout << i  << "!=" << arr[i] << endl;
	}
}

void test3()
{
	int sum = 0;
	int n = 0;
	do
	{
		cout << "请输入一个数:\n";
		cin >> n;
		sum += n;
	}while(n);
	cout << "sum = " << sum << endl;
}

void test4()
{
	int year = 0;
	double sum1 = 100;
	double sum2 = 100;
	while (sum1 >= sum2)
	{
		sum1 += 10;
		sum2 *= 1.05;
		year++;
	}
	cout << year << endl;
}

void test7()
{
	struct car
	{
		string name;
		int year;
	};
	int n = 0;
	cout << "有多少辆车？\n";
	cin >> n;
	car* p = new car[n];
	cout << "输入每辆车的生产商和生产时间：\n";
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].name >> p[i].year;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "生产商：" << p[i].name << " 生产时间：" << p[i].year << endl;
	}
	delete[]p;
}


//输入的单词数
#include<cstring>
void test8()
{
	char arr[20];
	int cnt = 0;
	cin >> arr;
	cin.get();
	//while (cin.get() != '\n')
	//	;
	//getchar();
	while (strcmp(arr, "done") != 0)
	{
		cnt++;
		cin >> arr;
		cin.get();
	}
	cout << cnt << endl;
}

void test9()
{
	string arr;
	int cnt = 0;
	getline(cin, arr);
	while (arr != "done")
	{
		cnt++;
		getline(cin, arr);
	}
	cout << cnt << endl;
}

void test10()
{
	int row = 0;
	cout << "输入行数\n";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < row - 1 - i; j++)
			cout << '.';
		for (j = 0; j < i + 1; j++)
			cout << '*';
		cout << endl;
	}
}
int main()
{

	//test1();
	//test2();
	//test3();
	//test4();
	//test7();
	//test8();
	//test9();
	test10();
	system("pause");
	return 0;
}

