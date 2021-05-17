#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;

//创建一个类
class Circle
{
	//访问权限
public:		//公共权限

	//属性
	int r;

	//行为，一般用函数来表示
	double calcalate()
	{
		return 2 * PI * r;
	}
};

void test1()
{
	//通过圆类创建一个具体的圆  （对象）		实例化：通过一个类创建一个对象
	Circle c1;
	c1.r = 10;
	cout << "圆的周长为：" << c1.calcalate() << endl;
}

class Student
{
	//权限
public:
	//类中的属性和行为统称为成员

	//属性		也叫成员属性或者成员变量
	string name;
	int id;

	//行为		成员函数或成员方法
	void Print()
	{
		cout << "姓名:" << name << " 学号：" << id << endl;
	}

	void Setname(string Name)
	{
		name = Name;
	}
};
void test2()
{
	Student s1 = { "张三", 2033113 };
	s1.Print();
	Student s2;
	s2.Setname("李四");
	s2.id = 1;
	s2.Print();
}

//类的权限
class Person
{
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func()		//类内可以访问
	{
		m_name = "张三";
		m_car = "宝马";
		m_password = 123456;
	}
};
void test3()
{
	Person p1;
	p1.m_name = "李四";
	//p1.m_car = "拖拉机";  //不合法，无访问权限
	//p1.m_password = 12313123;	//不合法
}

//class 和struct 的区别
// struct 默认权限是public    class 默认权限是privata
struct C1
{
	int m_a;
};
class C2
{
	int m_b;
};
void test4()
{
	C1 c1;
	c1.m_a = 10;
	C2 c2;
	//c2.m_b = 10;	//非法，无权限
}

//通常将成员属性设为私有
//好处：
//1、可以自己控制数据的读写权限
//2、对于写权限，可以检测数据的有效性
class people
{
	string m_name;	//姓名：可读可写
	int m_age;		//年龄：只读
	string m_car;	//车辆：可写
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		m_age = 20;
		return m_name;
	}
	int getage()
	{
		return m_age;
	}
	void setcar(string car)
	{
		m_car = car;
	}
};

void test5()
{
	people p1;
	p1.setname("张三");
	cout << "姓名：" << p1.getname() << endl;
	cout << "年龄：" << p1.getage() << endl;
	p1.setcar("宝马");
}

int main()
{
	//test1();
	//test2();
	test5();
	return 0;
}
