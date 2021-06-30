#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话\n";
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "猫在说话\n";
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "狗在说话\n";
	}
};

//执行说话函数
//地址早绑定，在编译阶段确定函数的地址
//如果要执行Cat中的speak函数，函数的地址就不能早绑定，需要在运行阶段绑定，也就是地址晚绑定
//在父类中的函数前加上   virtual 关键字
void Speak(Animal& cat)
{
	cat.speak();
}
void test1()
{
	Cat cat;
	Dog dog;
	Animal animal;
	Speak(cat);
	Speak(dog);
	Speak(animal);
}

//动态多态满足条件：
//1、有继承关系
//2、子类要重写父类的虚函数（重写：函数名，返回值，参数都相等）
//在子类中的函数，virtual可加可不加

//动态多态的使用：
//父类的指针或者引用  来指向子类的对象
int main()
{
	test1();
	return 0;
}

