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
		cout << "��ѡ��";
		cin >> input;
		switch (input)
		{
		case 1:		//����ְ��

			system("pause");
			system("cls");
			break;
		case 2:		//��ʾְ��
			system("pause");
			system("cls");
			break;
		case 3:		//ɾ��ְ��
			system("pause");
			system("cls");
			break;
		case 4:		//�޸�ְ��
			system("pause");
			system("cls");
			break;
		case 5:		//����ְ��
			system("cls");
			break;
		case 6:		//���������
			system("pause");
			system("cls");
			break;
		case 7:		//����ĵ�
			system("pause");
			system("cls");
			break;
		case 0:		//�˳�����
			wm.ExitManager();
			system("pause");
			system("cls");
			break;
		default:
			cout << "�����������������\n";

			break;
		}
	} while (input);
}


void test2()
{
	Worker* worker = NULL;

	//����Ա��
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	//���Ծ���
	worker = new Manager(2, "����", 1);
	worker->showInfo();
	delete worker;

	//�����ϰ�
	worker = new Boss(3, "����", 1);
	worker->showInfo();
	delete worker;
}
int main()
{
	//test1();
	test2();
	return 0;
}

