#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;
//int main()
//{
//	cout << "输入延迟的时间\n";
//	float sec;
//	cin >> sec;
//	clock_t delay = sec * CLOCKS_PER_SEC;
//	clock_t start = clock();
//	cout << "开始\n";
//	while (clock() - start < delay)
//	{
//		;
//	}
//	cout << "结束\n";
//	return 0;
//}

//基于范围的for循环
//int main()
//{
//	double price[] = { 4.99, 10.99, 6.87, 7.99 ,8.49 };
//	for (double &x : price)		//引用
//		x = 0;
//	for (double x : price)
//		cout << x << endl;
//	return 0;
//}

//整形提升
//int main()
//{
//	unsigned a = 3;
//	int b = -1;
//	if (a > b)
//		cout << "呵呵\n";
//	else cout << "哈哈\n";
//	return 0;
//}

//int main()
//{
//	char ch;
//	int cnt = 0;
//	cout << "输入字符\n";
//	cin.get(ch);
//	while (ch !='#')
//	{
//		cout << ch;
//		cnt++;
//		cin.get(ch);
//
//	}
//	cout << endl << cnt << endl;
//	return 0;
//}

//二维数组
int main()
{
	const int city = 5;
	const int year = 4;
	const char* City[city] = {
		"北京",
		"上海",
		"南京",
		"苏州",
		"无锡"
	};
	int temp[year][city] =
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	for (int i = 0; i < city; i++)
	{
		cout << City[i] << "：\t";
		for (int j = 0; j < year; j++)
			cout << temp[j][i] << "\t";
		cout << endl;
	}
	return 0;
}