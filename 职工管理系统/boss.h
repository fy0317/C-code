#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"worker.h"
using namespace std;
class Boss :public Worker
{
public:
	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo() ;

	//获取岗位信息
	virtual string getDeptName() ;
};
