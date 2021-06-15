#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cerrno>
#include<string>
using namespace std;

//文本文件，写文件
void test1()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄： 20" << endl; 
	ofs.close();
}

//读文件
void test2()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("文件打开失败");
		return;
	}

	//读数据

	//1、
	//char buf[1024] = { 0 };
	//while (!ifs.eof())
	//{
	//	ifs >> buf;
	// 	cout << buf << endl;
	//}


	//2、
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(ifs)))
	//{
	//	cout << buf << endl;
	//}

	//3、
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//4、
	char c = 0;
	while (!ifs.eof())
	{
		ifs.get(c);
		cout << c;
	}
	ifs.close();


}

//二进制操作文件

//二进制写文件

class Person
{
public:
	char m_name[40];
	int m_age;
};

void test3()
{
	//创建输出流对象
	ofstream ofs;
	//ofstream ofs("person.txt", ios::out | ios::binary);
	ofs.open("person.txt", ios::out | ios::binary);

	Person p = { "张三", 18 };
	//写文件
	ofs.write((const char*)&p, sizeof(p));

	//关闭文件
	ofs.close();
}


//二进制读文件
void test4()
{
	//创建流对象
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		perror("文件打开失败");
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
	ifs.close();
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0; 
}
