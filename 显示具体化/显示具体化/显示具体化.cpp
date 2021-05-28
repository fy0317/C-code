#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <typename T>
void Swap(T& a, T& b); //常规模板
struct job
{
	char name[40];
	double salary;
	int floor;
};
template<>
void Swap(job& j1, job& j2);		//显示具体化
void show(const job& j);

void test8_13()
{
	cout.precision(2);		//显示两位小数
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "交换前：i = " << i << " j = " << j << endl;
	Swap(i, j);
	cout << "交换后：i = " << i << " j = " << j << endl;
	job j1 = { "张三", 650000.50, 7 };
	job j2 = { "李四", 850000.62, 8 };
	cout << "交换前：";
	show(j1);
	show(j2);
	Swap(j1, j2);
	cout << "交换后：";
	show(j1);
	show(j2);
}

template <typename T>
void Swap(T& a, T& b) //常规模板
{
	T tmp = a;
	a = b;
	b = tmp;
}
template<>
void Swap(job& j1, job& j2)
{
	double sal = j1.salary;
	j1.salary = j2.salary;
	j2.salary = sal;
	int floor = j1.floor;
	j1.floor = j2.floor;
	j2.floor = floor;
}
void show(const job& j)
{
	cout << "姓名：" << j.name << " 工资：" << j.salary << " 等级：" << j.floor << endl;
}
int main()
{
	test8_13();
	system("pause");
	return 0;
}

