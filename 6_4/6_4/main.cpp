#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
const int strsize = 40;
const int usersize = 40;
struct bop
{
	char fullname[strsize];		//真实姓名
	char title[strsize];		//头衔
	char bopname[strsize];		//秘密姓名
	int preference;				//0 = fullname，1 = title， 2 = bopname 
};


void menu()
{
	cout << "a. display by fullname			" << "b. display by title\n";
	cout << "c. display by bopname			" << "d. display by preference\n";
	cout << "q. quit\n";
}

bop bop_array[usersize] ={
	{"Wimp Macho", "Programmer", "MIPS", 0},
	{"Raki Rhodes", "Junior Programmer", "", 1},
	{" Celia Laiter", "", "MIPS", 2},
	{"Hoppy Hipman", "Analyst Trainee", "", 1},
	{"Pat Hipman", "", "LOOPY", 2}
};

void display_by_name();
void display_by_title();
void display_by_bopname();
void display_by_preference();
int main()
{
	char choose = 0;
	cout << "请选择\n";
	menu();
	choose = cin.get();
	cin.get();
	while (choose != 'q' && choose != 'Q')
	{
		switch (choose)
		{
		case 'a':
		case 'A':
			display_by_name();
			break;
		case 'b':
		case 'B':
			display_by_title();
			break;
		case 'c':
		case 'S':
			display_by_bopname();
			break;
		case 'd':
		case 'D':
			display_by_preference();
			break;
		default:
			cout << "输入错误，请重新输入\n";
			break;
		}
		//cin.get();
		//cout << "下一次选择\n";
		//cin.get(choose);		
		cout << "下一次选择\n";
		cin.get(choose);
		cin.get();
	}
	return 0;
}

void display_by_name()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_array[i].fullname) == 0)
			break;
		else cout << bop_array[i].fullname << endl;
	}
}
void display_by_title()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_array[i].fullname) == 0)
			break;
		else cout << bop_array[i].title << endl;
	}
}
void display_by_bopname()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_array[i].fullname) == 0)
			break;
		else cout << bop_array[i].bopname << endl;
	}
}
void display_by_preference()
{
	for (int i = 0; i < usersize; i++)
	{
		if (strlen(bop_array[i].fullname) == 0)
			break;
		else
		{
			switch (bop_array[i].preference)
			{
			case 0:
				cout << bop_array[i].fullname << endl;
				break;
			case 1:
				cout << bop_array[i].title << endl;
				break;
			case 2:
				cout << bop_array[i].bopname << endl;
				break;
			}
		}
	}
}
