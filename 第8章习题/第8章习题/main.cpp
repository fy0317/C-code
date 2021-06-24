#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

//第一题
void Print_Str(const char* str, int n = 0)
{
	static int cnt = 0;
	cnt++;
	if (n != 0)
	{
		for (int i = 0; i < cnt; i++)
			cout << str << endl;
	}
	else cout << str << endl;
}
void test8_1()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	Print_Str(arr1);
	Print_Str(arr2);
	Print_Str(arr1, 3);
}

//第二题
struct CandyBar
{
	string Candy_name;
	double weight;
	int hot;
};

void Set_Candy(CandyBar& candy, const char* name, double weight, int hot)
{
	candy.Candy_name = name;
	candy.weight = weight;
	candy.hot = hot;
}

void Print_Candy(const CandyBar& candy)
{
	cout << "品牌名称：" << candy.Candy_name << " 重量：" << candy.weight << " 热量：" << candy.hot << endl;
}
void test8_2()
{
	CandyBar candy = { "金丝猴", 2.85, 350 };
	Print_Candy(candy);
	Set_Candy(candy, "大白兔", 2.7, 200);
	Print_Candy(candy);
}

//第三题
void Set_Str(string& str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
	}
}
void test8_3()
{
	string str;
	cout << "输入字符串：(q结束)";
	getline(cin, str);
	while (str != "q")
	{
		Set_Str(str);
		cout << str << endl;
		cout << "输入下一个字符串\n";
		getline(cin, str);

	}

}

//第四题
struct stringy
{
	char* str;		//字符串
	int ct;		//字符串长度
};

void set(stringy& beany, const char* testing)
{
	if (testing == NULL)return;
	int len = strlen(testing);
	if (len == 0)return;
	beany.str = new char[len + 1];
	strcpy(beany.str, testing);
	beany.ct = len;
}

void show(const stringy& beany)
{
	cout << "字符串：" << beany.str << " 长度：" << beany.ct << endl;
}

void show(const stringy& beany, int n)
{
	for (int i = 0; i < n; i++)
		cout << "字符串：" << beany.str << " 长度：" << beany.ct << endl;
}

void show(const char* str)
{
	if (str == NULL)return;
	else
		cout << str << endl;
}
void show(const char* str, int n)
{
	if (str == NULL)return;
	else
		for (int i = 0; i < n; i++)
			cout << str << endl;
}

void test8_4()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
}

//第五题
template <typename T>
T max5(T arr[5])
{
	T max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
void test8_5()
{
	int int_arr[5] = { 1, 5,8,10,21 };
	cout << max5(int_arr) << endl;
	double double_arr[] = { 3.1, 5.5, 7.6, 9.23, 9.31 };
	cout << max5(double_arr) << endl;
}

//第六题
template <typename type>type maxn(type arr[], int n)
{
	type max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

//显示具体化
template <>char* maxn<char*>(char* arr[], int n)
{
	int maxlen = strlen(arr[0]);
	int ret = 0;
	int len = 0;
	for (int i = 1; i < n; i++)
	{
		len = strlen(arr[i]);
		if (len > maxlen)
		{
			maxlen = len;
			ret = i;
		}
	}
	return arr[ret];
}
//char* maxn(char* arr[], int n)
//{
//	int maxlen = strlen(arr[0]);
//	int ret = 0;
//	int len = 0;
//	for (int i = 1; i < n; i++)
//	{
//		len = strlen(arr[i]);
//		if (len > maxlen)
//		{
//			maxlen = len;
//			ret = i;
//		}
//	}
//	return arr[ret];
//}
void test8_6()
{
	int int_arr[5] = { 1, 2, 5, 4, 3 };
	double double_arr[] = { 19.6, 13, 19.8, 100.8, 98.4 };
	string ss[] = { "hello", "hello world" };
	cout << "int型数组中的最大值：" << maxn(int_arr, 5) << endl;
	cout << "double型数组中的最大值：" << maxn(double_arr, 5) << endl;
	cout << "最长字符串为：" << maxn(ss, 2) << endl;
}

//第七题
struct debts
{
	char name[50];
	double amount;
};

template<typename T1>
T1 SumArray(T1 arr[], int n)
{
	T1 sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

template<>debts SumArray<debts>(debts arr[], int n)
{
	debts sum = { "Sum", 0 };
	sum.amount = 0;
	for (int i = 0; i < n; i++)
		sum.amount += arr[i].amount;
	return sum;
}

void test8_7()
{
	int tings[6] = { 13, 31, 103, 301, 310, 130 };
	debts arr[3] =
	{
		{"aaa", 2400},
		{"bbb", 1300},
		{"ccc", 1800.5}
	};
	debts sum = SumArray(arr, 3);
	cout << "Sum of tings = " << SumArray(tings, 6) << endl;
	cout << sum.name << "  " << sum.amount << endl;
}
int main()
{
	//test8_1();
	//test8_2();
	//test8_3();
	//test8_4();
	//test8_5();
	//test8_6();
	test8_7();
	return 0;
}