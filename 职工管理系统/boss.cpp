#define _CRT_SECURE_NO_WARNINGS
#include"boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Boss::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：" << "管理公司并给经理下发任务" << endl;
}

//获取岗位信息
string Boss::getDeptName()
{
	return string("老板");
}
