#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������
class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
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

	//ʹ����̳к������������ 
	st.m_Age = 10;
}
int main()
{
	test1();
	return 0;
}
