#include"addbook.h"
void menu()
{
	cout << "**********************************\n";
	cout << "******* 1�������ϵ�� ************\n";
	cout << "******* 2����ʾ��ϵ�� ************\n";
	cout << "******* 3��ɾ����ϵ�� ************\n";
	cout << "******* 4��������ϵ�� ************\n";
	cout << "******* 5���޸���ϵ�� ************\n";
	cout << "******* 6�������ϵ�� ************\n";
	cout << "******* 0���˳�ͨѶ¼ ************\n";
	cout << "**********************************\n";
}


int main()
{
	Addressbooks addressbook;
	addressbook.m_size = 0;
	int choose = 0;
	do
	{
		menu();		//��ӡ�˵�
		cin >> choose;
		switch (choose)
		{
		case 1:
			//�����ϵ��
			AddPerson(&addressbook);
			break;
		case 2:
			//��ʾ��ϵ��
			PrintAddBook(&addressbook);
			break;
		case 3:
			//ɾ����ϵ��
			DeleteAddBook(&addressbook);
			break;
		case 4:
			//������ϵ��
			Find(&addressbook);
			break;
		case 5:
			//�޸���ϵ��
			Change(&addressbook);
			break;
		case 6 :
			//�����ϵ��
			Clear(&addressbook);
			break;
		case 0:
			cout << "�˳�ͨѶ¼\n";
			break;
		default:
			cout << "��Ч������\n";
			system("pause");
			system("cls");
			break;
		}
	} while (choose);
	return 0;
}
