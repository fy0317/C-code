#define _CRT_SECURE_NO_WARNINGS
//面向过程：关注程序的执行的过程
//面向对象：关注的是对象，将一件事情拆分成几个对象

//例如外卖软件，面向过程就是关注做菜，点单，接单，配送等小的过程
//				而面向对象就是关注卖家，骑手和用户各个对象之间的关系，使整个系统更加地清晰

//C++是基于面向对象的语言，既有面向对象，也有面向过程

//C   面向过程  --- 把数据和方法分开
//
//CPP 面向对象	--- 把数据和方法放一起


//封装：  把数据和方法放在一起，  可以更好地保护数据，只能通过给定的方法去访问数据

#include<iostream>
using namespace std;

struct student
{
	void set_student(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void print_student()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}
	int _age;
	char _name[20];
	char _gender[3];
};

//计算类型大小时，只考虑成员变量，不考虑成员函数，	成员函数存储在	代码区
// 因为如果把成员函数也放在类中，那么每创建一个对象时，都要将成员函数也一起创建，而不同对象的成员变量虽然不一样，但是它们的成员函数都是一样的，这样就会造成内存浪费
//如果类中一个成员变量都没有，则类的大小为1个字节
class Stack 
{
public:
	void init(){}
	void push(int x){}
private:
	int* arr;
	int top;
	int capacity;
};

//空类
class A
{
};

class B
{
public:
	void f1(){}
	void f2(){}
};

class Data
{
public:
	//void Init(Data* this, int year, int month, int day) //隐含的一个参数
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;

		Print();	//成员函数也可以调用其他的成员函数, 因为有this指针
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}


private:
	int _year;
	int _month;
	int _day;
};

//通一个类的不同对象去访问成员函数时，编译器为了知道在成员函数中访问的是哪个对象的成员变量，引入了this指针，在调用成员函数的时候，编译器会隐含地加上一个参数，即当前对象的地址，也就是this指针

//this指针是形参，是存放在栈上的，VS中this是通过寄存器ecx传递的


class AA
{
public:
	void Show()
	{
		cout << "Show\n";	//这样不会崩溃
	}
	void Print()
	{
		cout << "Show:" << _a << _b << endl;	//空指针，这样会崩溃，越界
	}
private:
	int _a;
	int _b;
};
int main()
{
	//student s;
	//s.set_student("Perter", 20, "男");
	//s.print_student();
	Stack s;
	//s.init();
	//s.push(10);
	cout << sizeof(s) << endl;
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;

	//如果一个类没有成员变量，需要给一个字节进行占位，创建对象的时候才能表示对象存在，这1字节不存储有效的数据


	Data d1;
	Data d2;

	d1.Init(2021, 10, 9);	//d1.Init(&d1, 2021, 10, 9);	隐含的参数
	d2.Init(2022, 10, 9);	//d2.Init(&d2, 2021, 10, 9);	隐含的参数
	
	d1.Print();	//d1.Print(&d1);
	d2.Print();	//d2.Print(&d1);

	AA* p = nullptr;

	p->Show();	//可以正常运行，因为对象的成员函数在公共代码段，在调用时，不会去访问p的地址，也就没有空指针的解引用，
				//在调用Show()函数时，只会传递隐含的this指针，但在Show()函数内部，也没有去解引用this指针，也没有空指针的解引用，所以不会越界

	//p->Print();	//会崩溃，因为在Print中会对this指针解引用

	return 0;
}

