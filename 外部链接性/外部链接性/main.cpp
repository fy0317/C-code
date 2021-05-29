#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//外部链接性
//
// 
//double warming = 0.3;
//void update(double dt);
//void local();
//int main()
//{
//	cout << "全局变量warming = " << warming << endl;
//	update(0.1);
//	cout << "全局变量warming = " << warming << endl;
//	local();
//	cout << "全局变量warming = " << warming << endl;
//	system("pause");
//	return 0;
//}


//static使用
const int ArrSize = 10;
void strcount(const char* arr);

int main()
{
	char arr[ArrSize];
	cout << "输入字符串:\n";
	cin.get(arr, ArrSize);
	char next;
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(arr);
		cout << "输入下一个字符串\n";
		cin.get(arr, ArrSize);
	}
	return 0;
}

void strcount(const char* arr)
{
	if (arr == NULL) return;
	static int total = 0;
	int cnt = 0;
	while (*arr != 0)
	{
		cnt++;
		arr++;
	}
	total += cnt;
	cout << "当前输入的字符串有" << cnt << "个字符\n";
	cout << "总共有" << total << "个字符\n";
}

