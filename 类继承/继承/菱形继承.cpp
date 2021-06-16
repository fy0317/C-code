#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
class Sheep:virtual public Animal
{

};
class Tuo :virtual public Animal
{

};

class SheepTuo : public Sheep ,public Tuo
{
	 
};

void test1()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;

	//使用虚继承后可以这样访问 
	st.m_Age = 10;
}
int main()
{
	test1();
	return 0;
}
