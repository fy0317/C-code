#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef unsigned long Item;
class Stack {
private:
	enum { MAX = 10 };;
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);
};
