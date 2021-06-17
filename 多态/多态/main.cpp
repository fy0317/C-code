#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void Speak()		//加上virtual后，类中有了一个虚函数指针vfptr，指向虚函数表  vftable,在表的内部记录一个虚函数的地址
								//如果不重写，在子类继承父类时，会将vfptr继承，
								//虚函数表中存放的是父类的Speak地址，如果重写了，则子类中的Speak地址会覆盖父类的Speak地址
	{
		cout << "动物在叫\n";
	}
};

class Cat :public Animal
{
public:
	void Speak()
	{
		cout << "猫在叫\n";
	}
};

class Dog :public Animal
{
public:
	void Speak()
	{
		cout << "狗在叫\n";
	}
};

//动态多态的满足条件：
//1、有继承关系
//2、子类重写父类的虚函数  
//重写： 函数名，返回值，参数列表完全相等

//动态多态使用：父类的指针或者引用  执行于类对象

/*
	地址早绑定		在编译阶段就确定函数的地址
	如果想执行子类中的函数，这个函数就不能提前绑定，需要在运行阶段绑定，也就是地址晚绑定

*/

void Dospeak(Animal& animal)
{
	animal.Speak();
}

void test1()
{
	cout << sizeof(Animal) << endl;
	Cat cat;
	Dog dog;
	Dospeak(cat);
	Dospeak(dog);
}
int main()
{

	test1();
	return 0;
}

