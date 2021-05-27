#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
#include<cstring>

//默认参数
const int Arrsize = 80;
using namespace std;
char* left1(const char* str, int n = 1);

void test8_9()
{
	char sample[Arrsize];
	cout << "输入一个字符串和一个数字\n";
	cin.getline(sample, Arrsize);
	int n = 0;
	cin >> n;
	char* ps = left1(sample, n);
	cout << ps << endl;
	delete[] ps;
	ps = left1(sample);
	cout << ps << endl;
	delete[]ps;
}
char* left1(const char* str, int n )
{
	//if (str == NULL) return;
	assert(str);
	if (n < 0) return NULL;
	int len = strlen(str);
	n = len > n ? n : len;
	char* p = new char[n + 1];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p[i] = str[i];
	}
	p[i] = 0;
	return p;
}

//函数重载
unsigned long left(unsigned long num, unsigned ct);		//left1
char* left(const char* str, int n);					//left2
void test8_10()
{
	const char* trip = "Hawaii!!";
	unsigned long n = 1234567;
	int i;
	char* tmp;
	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;			//调用left1
		tmp = left(trip, i);		//调用left2
		cout << tmp << endl;
		delete[]tmp;
	}
}

unsigned long left(unsigned long num, unsigned ct)		//left1
{
	unsigned digits = 1;
	unsigned long n = num;
	if (ct == 0 || num == 0)
		return 0;
	while (n /= 10)
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;
		return num;
	}
	else
		return num;
}


char* left(const char* str, int n = 1)					//left2
{
	assert(str);
	if (n < 0)
		return NULL;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	p[i] = 0;
	return p;
}
int main()
{
	//test8_9();
	test8_10();
	system("pause");
	return 0;
}

