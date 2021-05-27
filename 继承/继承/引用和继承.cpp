#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cerrno>
#include<fstream>
#include<cstdlib>
using namespace std;

const int LIMIT = 5;
void file_it(ostream& os, double fo, const double fe[], int n);
void test8_8()
{
	ofstream fout;
	const char* fn = "test.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		perror("错误原因");
		exit(1);
	}
	double objective;
	double eps[LIMIT];
	cout << "输入长度，单位mm\n";
	cin >> objective;
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepiece #" << i + 1 << ":";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
}
void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);		//按定点形式输出
	os.precision(0);
	os << "长度" << fo << "mm\n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "f.1.eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);
}
void PrintArr(const int(&a)[10], int sz)		//数组的引用
{

	for (int i = 0; i < sz; i++)
	{
		cout << a[i] << " ";
	}
}
//void test()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6,7,8,9,10 };
//	PrintArr(arr, 10);
//}
int main8_8()
{
	//test();
	test8_8();
	system("pause");
	return 0;
}


