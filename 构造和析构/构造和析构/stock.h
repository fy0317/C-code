#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Stock{
public:
	int a;
	Stock();
	Stock(const string& co, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock& topval(const Stock& s)const ;
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){
		total_val = shares * share_val;
	}
};
