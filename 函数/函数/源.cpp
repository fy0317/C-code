#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);
void test7_4()
{
	double total, choices;
	cout << "输入总共可选择的数字，和允许选择的次数\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "共有";
		cout << probability(total, choices) << "可能\n";
		cout << "继续输入两个数字(q to quit) :";
	}
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result *= n / p;
	}
	return result;
}

int fill_Arr(double arr[], int size);
void PrintArr(const double arr[], int sz);
void revalue(double r, double arr[], int sz);
void test7_7()
{
	const int MAX = 5;
	double arr[MAX];

	int size = fill_Arr(arr, MAX);
	PrintArr(arr, size);
	if (size > 0)
	{
		cout << "请输入增减参数\n";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				;
			cout << "输入错误，请输入一个数字\n";
		}
		revalue(factor, arr, size);
		PrintArr(arr, size);
	}

}
int fill_Arr(double arr[], int size)
{
	double tmp;
	int i;
	for (i = 0; i < size; i++)
	{
		cout << "请输入数据:";
		if (!(cin >> tmp))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "输入错误\n";
			break;
		}
		if (tmp < 0)
		{
			cout << "请输入大于0的数\n";
			//cin >> tmp;
			break;
		}
		arr[i] = tmp;
	}
	return i;
}
void revalue(double r, double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		arr[i] *= r;
}
void PrintArr(const double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		cout << arr[i] << " ";
	cout << endl;
}


//创建一个字符串
char* buildstr(char c, int n)
{
	char* str = new char[n + 1];
	str[n] = 0;
	n--;
	while (n >= 0)
	{
		str[n] = c;
		n--;
	}
	return str;
}
void test7_10()
{
	int times;
	char ch;
	cout << "请输入一个字符:";
	cin >> ch;
	cout << "\n请输入一个整数:";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete(ps);
}

//函数和结构体
//将直角坐标系中的坐标，转化为极坐标中的坐标
#include<cmath>
struct point1		//直角坐标系
{
	double x;
	double y;
};
struct point2		//极坐标系
{
	double l;
	double angle;
};
void  point1_to_point2(const point1* p1, point2* p2)
{
	p2->l = sqrt(p1->x * p1->x + p1->y * p1->y);
	p2->angle = atan2(p1->y, p1->x);
}

void show_point2(const point2* p)
{
	const double a = 57.29577951;
	cout <<"距离= " << p->l << "  角度=" << p->angle * a << endl;
}
void test7_12()
{
	point1 p1;
	point2 p2;
	cout << "输入x和y坐标的值:";
	while (cin >> p1.x >> p1.y)
	{
		point1_to_point2(&p1, &p2);
		show_point2(&p2);
		cout << "输入下一个x和y坐标值，（输入q退出）: ";
	}
}


//函数和string对象
#include<string>
void show_stringarr(const string* arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}
void test7_14()
{
	const int SIZE = 5;
	string arr[SIZE];
	cout << "输入你最喜欢的" << SIZE << "个城市:\n";
	for (int i = 0; i < SIZE; i++)
	{
		getline(cin, arr[i]);
	}
	cout << "你最喜欢的城市是：" << endl;
	show_stringarr(arr, SIZE);
}

//函数和array对象
#include<array>
const int Seasons = 4;
const array<string, Seasons>season = { "Spring", "Summer", "Fall", "Winter" };
void fill(array<double, Seasons>* pa)			//数组指针
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "输入" << season[i] << "的开支:";
		cin >> (*pa)[i];
	}
}
void show_array(array<double, Seasons>da)
{
	double sum = 0;
	cout << "开支如下：\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << season[i] << ":$" << da[i] << endl;
		sum += da[i];
	}
	cout << "总开支:$" << sum << endl;
}
void test7_15()
{
	array<double, Seasons>expenses;
	fill(&expenses);
	show_array(expenses);
}

//函数递归
//绘制尺子
const int Len = 66;
const int Divs = 6;
void subdivide(char arr[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (low + high) / 2;
	arr[mid] = '|';
	subdivide(arr, low, mid, level - 1);
	subdivide(arr, mid, high, level - 1);
}
void test7_17()
{
	char ruler[Len];
	int i = 0;
	for (i = 0; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = 0;
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';
	}
}
int main()
{
	//test7_4();
	//test7_7();
	//test7_10();
	//test7_12();
	//test7_14();
	//test7_15();
	test7_17();
	return 0;
}