#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
struct Person
{
	string name;
	int age;
	double salary;
};
template<typename DataType>
void Swap(DataType& x, DataType& y);

//显示具体化
template<> void Swap<Person>(Person& x, Person& y);

void test1()
{
	Person x = { "张三", 20 , 100};
	Person y = { "李四", 30 ,200 };
	//cout << "输入整形数据：";
	cout << "交换前：" << x.name << " " << x.age << " "  << x.salary << " " << y.name << " " << y.age << " " << y.salary << endl;
	Swap(x, y);
	cout << "交换前：" << x.name << " " << x.age << " " << x.salary << " " << y.name << " " << y.age << " " << y.salary << endl;
}
int main()
{
	test1();
	return 0;
}
template<typename DataType> void Swap(DataType& x, DataType& y)
{
	DataType tmp = x;
	x = y;
	y = tmp;
}
template<> void Swap<Person>(Person& x, Person& y)
{
	int tmp1;
	double tmp2;
	tmp1 = x.age;
	x.age = y.age;
	y.age = tmp1;
	tmp2 = x.salary;
	x.salary = y.salary;
	y.salary = tmp2;
}