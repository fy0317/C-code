#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//通讯录成员信息
struct Person		
{
	string name;	//姓名
	int sex;	//1男 2女
	unsigned age;	//年龄
	string tel;		//电话
	string home;	//住址
};

//通讯录
struct Addressbooks
{
	struct Person personArray[MAX];		//通讯录成员数组
	int m_size;		//当前通讯录大小
};

void AddPerson(Addressbooks* add);		//添加信息
void PrintAddBook(const Addressbooks* add);	//打印通讯录
void DeleteAddBook(Addressbooks* add);		//删除联系人
void Find(const Addressbooks* add);			//查找联系人
void Change(Addressbooks* add);				//修改联系人
void Clear(Addressbooks* add);				//清空通讯录
