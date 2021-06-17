#define _CRT_SECURE_NO_WARNINGS


/*

多态使用时，如果子类中有属性开辟到堆区，那么父类指针无法调用到子类的析构代码，会造成内存泄露

解决方式：将父类中的析构函数改为  虚析构   或者   纯虚析构
 
*/
#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	virtual void Speak() = 0;
	Animal()
	{
		cout << "Animal构造函数调用\n";
	}
	//~Animal()
	//{
	//	cout << "Animal的析构函数\n";
	//}
	//virtual ~Animal()		//虚析构
	//{
	//	cout << "Animal的析构函数\n";
	//}

	virtual ~Animal() = 0;		//纯虚析构		要在类外实现

	//有纯虚析构，则这个类处于抽象类，无法实例化对象；	如果只是虚析构，不是抽象类

};

Animal::~Animal()
{
	cout << "Animal的纯虚析构调用\n";
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用\n";
		m_name = new string(name);
	}
	void Speak()
	{
		cout << *m_name << "在叫\n";
	}
	~Cat()
	{
		cout << "Cat析构函数调用\n";
		if (m_name)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};

void test1()
{
	//先构造父类，再构造子类
	Animal* animal = new Cat("Tom");
	animal->Speak();

	//如果不使用虚析构，父类指针在析构时，不会调用子类的析构函数，如果子类有堆区数据，会造成内存泄露
	//
	delete animal;
}
int main()
{
	test1();
	return 0;
}
