#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"worker.h"

class Employee :public Worker
{
public:
	Employee(int id, string name, int dId);
	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ��Ϣ
	virtual string getDeptName();
};