#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
	void visit2();
	Building* building;
};

class Building
{
	friend void GoodGay::visit();

public:
	Building();
	string m_SittingRom;
private:
	string m_BedRom;		
};

Building::Building()
{
	m_SittingRom = "����";
	m_BedRom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit����" << building->m_SittingRom << endl;
	cout << "visit����" << building->m_BedRom << endl;

}
void GoodGay::visit2()
{
	cout << "visit2����" << building->m_SittingRom << endl;

}

void test1()
{
	GoodGay g;
	g.visit();
	g.visit2();

}
int main()
{
	test1();
	return 0;
}