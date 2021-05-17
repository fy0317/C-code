#include"addbook.h"
void menu()
{
	cout << "**********************************\n";
	cout << "******* 1、添加联系人 ************\n";
	cout << "******* 2、显示联系人 ************\n";
	cout << "******* 3、删除联系人 ************\n";
	cout << "******* 4、查找联系人 ************\n";
	cout << "******* 5、修改联系人 ************\n";
	cout << "******* 6、清空联系人 ************\n";
	cout << "******* 0、退出通讯录 ************\n";
	cout << "**********************************\n";
}


int main()
{
	Addressbooks addressbook;
	addressbook.m_size = 0;
	int choose = 0;
	do
	{
		menu();		//打印菜单
		cin >> choose;
		switch (choose)
		{
		case 1:
			//添加联系人
			AddPerson(&addressbook);
			break;
		case 2:
			//显示联系人
			PrintAddBook(&addressbook);
			break;
		case 3:
			//删除联系人
			DeleteAddBook(&addressbook);
			break;
		case 4:
			//查找联系人
			Find(&addressbook);
			break;
		case 5:
			//修改联系人
			Change(&addressbook);
			break;
		case 6 :
			//清空联系人
			Clear(&addressbook);
			break;
		case 0:
			cout << "退出通讯录\n";
			break;
		default:
			cout << "无效的输入\n";
			system("pause");
			system("cls");
			break;
		}
	} while (choose);
	return 0;
}
