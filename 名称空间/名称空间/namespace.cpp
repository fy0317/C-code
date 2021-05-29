#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"namespace.h"
namespace pers
{
	using std::cout;
	using std::cin;
	void getPerson(Person& p)
	{
		cout << "�����գ�";
		cin >> p.fname;
		cout << "��������";
		cin >> p.lname;
	}
	void showPerson(const Person& p)
	{
		cout << p.fname << p.lname;
	}
}

namespace debts
{
	using std::cout;
	using std::cin;
	void getDebt(Debt& d)
	{
		getPerson(d.name);
		cout << "����debt:";
		cin >> d.amount;
	}
	void showDebt(const Debt& d)
	{
		showPerson(d.name);
		cout << ":$" << d.amount << std::endl;
	}
	double sumDebts(const Debt arr[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
			total += arr[i].amount;
		return total;
	}
}


