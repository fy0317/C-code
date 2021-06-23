#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cerrno>
#include<string>
using namespace std;
void test6_8()
{
	ifstream ifs;
	char filename[50];
	cout << "输入文件名\n";
	cin.getline(filename, 50);
	ifs.open(filename);
	if (!ifs.is_open())
	{
		perror("文件打开失败");
		return;
	}
	else
	{
		char read_char;
		int cnt = 0;
		while (!ifs.eof())
		{
			ifs >> read_char;
			cnt++;
		}
		cout << filename << "有" << cnt << "个字符\n";
		ifs.close();
	}
}

struct Person
{
	string name;
	double fund;
};
void test6_9()
{
	string filename;
	cout << "输入文件名：";
	getline(cin, filename);
	ifstream ifs;
	ifs.open(filename);
	if (!ifs.is_open())
	{
		perror("文件打开失败");
		return;
	}
	else
	{
		int num = 0;
		if (ifs.eof())
			return;
		ifs >> num;
		if (num <= 0)
			return;
		ifs.get();
		Person* person = new Person[num];
		for (int i = 0; i < num; i++)
		{
			getline(ifs, person[i].name);
			ifs >> person[i].fund;
			ifs.get();		//获取换行
		}
		ifs.close();
		for (int i = 0; i < num; i++)
		{
			cout << person[i].name << ':' << person[i].fund << endl;
		}
		delete[]person;
	}
}
int main()
{
	//test6_8();
	test6_9();
	return 0;
}

