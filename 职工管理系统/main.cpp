#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
void test1()
{
	int input = 0;
	WorkerManager wm;
	do
	{
		wm.menu();
		cout << "请选择：";
		cin >> input;
		switch (input)
		{
		case 1:		//增加职工

			system("pause");
			system("cls");
			break;
		case 2:		//显示职工
			system("pause");
			system("cls");
			break;
		case 3:		//删除职工
			system("pause");
			system("cls");
			break;
		case 4:		//修改职工
			system("pause");
			system("cls");
			break;
		case 5:		//查找职工
			system("cls");
			break;
		case 6:		//按编号排序
			system("pause");
			system("cls");
			break;
		case 7:		//清空文档
			system("pause");
			system("cls");
			break;
		case 0:		//退出程序
			wm.ExitManager();
			system("pause");
			system("cls");
			break;
		default:
			cout << "输入错误，请重新输入\n";

			break;
		}
	} while (input);
}


void test2()
{
	Worker* worker = NULL;

	//测试员工
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	//测试经理
	worker = new Manager(2, "李四", 1);
	worker->showInfo();
	delete worker;

	//测试老板
	worker = new Boss(3, "王五", 1);
	worker->showInfo();
	delete worker;
}
int main()
{
	//test1();
	test2();
	return 0;
}

