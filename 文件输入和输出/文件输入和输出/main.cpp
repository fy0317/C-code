#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cerrno>
using namespace std;


//写入到文件文本中
void test6_15()
{
	char arr[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;		//创建一个对象，将数据输出到文件中
	outFile.open("test.txt");		//打开一个文件（不存在则创建一个）
	cout << "输入：";
	cin.getline(arr, 50);
	cout << "输入年：";
	cin >> year;
	cout << "输入最初的价格\n";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//显示信息
	cout << fixed;		//以一般形式显示浮点数
	cout.precision(2);		//控制输出浮点数的精度
	cout.setf(ios_base::showpoint);		//显示浮点数小数后面的0
	cout << "Make and model：" << arr << endl;
	cout << "Year：" << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;


	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model:" << arr << endl;
	outFile << "Year:" << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;
	outFile.close();
}

//读取文本文件
void test6_16()
{
	const int SIZE = 60;
	char filename[60];
	ifstream inFile;
	cout << "输入数据文件的名称\n";
	cin.getline(filename, SIZE);
	inFile.open(filename);		//从文件filename中读取信息存入控制台
	if (!inFile.is_open())	//没有打开文件
	{
		perror("文件打开失败");			//错误原因
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0;
	inFile >> value;		//读取数据到value中
	int count = 0;
	while (inFile.good())	//判断是否出错,没有出错则读取数据
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())	//判断是否读到文件结尾
		cout << "文件读取结束\n";
	else if (inFile.fail())		//判断是否遇到了类型不匹配的问题
		cout << "因为数据不匹配导致文件读取结束\n";
	else perror("其他原因");
	if (count == 0)
		cout << "没有数据\n";
	else
	{
		cout << "有" << count << "个数据\n";
		cout << "Sum = " << sum << "\nAverage = " << sum / count << endl;
	}
	inFile.close();
}
int main()
{
	//test6_15();
	test6_16();
	return 0;
}
