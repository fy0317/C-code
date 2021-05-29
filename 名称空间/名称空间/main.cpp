#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"namespace.h"
void other();
void another();
int main()
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"张","三"}, 120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}

void other()
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "李", "四" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);
	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
	cout << "Total = " << sumDebts(zippy, 3) << endl;
}
void another()
{
	using pers::Person;
	Person p = { "王", "五" };
	pers::showPerson(p);
	std::cout << std::endl;;
}
