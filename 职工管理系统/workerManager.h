#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class WorkerManager
{
public:
	void menu();			//菜单
	WorkerManager();
	~WorkerManager();
	void ExitManager();		//退出系统
};