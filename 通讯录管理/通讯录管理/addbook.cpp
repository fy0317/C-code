#include"addbook.h"

//�����ϵ��
void AddPerson(Addressbooks* add)
{
	if (add->m_size >= MAX)
	{
		cout << "ͨѶ¼����\n";
		return;
	}
	else
	{
		string name;
		cout << "����������\n";
		cin >> name;
		add->personArray[add->m_size].name = name;
		cout << "�������Ա�,1���� 2��Ů\n";
		while (1)
		{
			int sex = 0;;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				add->personArray[add->m_size].sex = sex;
				break;
			}
			else cout << "�������\n";
		}
		cout << "��������\n";
		unsigned age = 0;
		cin >> age;
		add->personArray[add->m_size].age = age;
		cout << "����绰\n";
		string tel;
		cin >> tel;
		add->personArray[add->m_size].tel = tel;
		cout << "�����ַ\n";
		string home;
		cin >> home;
		add->personArray[add->m_size].home = home;
		add->m_size++;
		system("pause");
		system("cls");		//����
	}
}

//��ʾ��ϵ��
void PrintAddBook(const Addressbooks* add)
{
	if (add == NULL) return;
	else if (add->m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��\n";
		return;
	}
	for (int i = 0; i < add->m_size; i++)
	{
		cout << "������" << add->personArray[i].name << " �Ա�";
		cout << (add->personArray[i].sex == 1 ? "��" : "Ů");
		cout << " ���䣺" << add->personArray[i].age << " �绰��" << add->personArray[i].tel << " ��ַ��" <<
			add->personArray[i].home << endl;
	}
	system("pause");
	system("cls");		//����
}

int find(const Addressbooks* add, string name)			//������ϵ��
{
	for (int i = 0; i < add->m_size; i++)
	{
		if (name == add->personArray[i].name)
			return i;
	}
	return -1;
}

//������ϵ��
void Find(const Addressbooks* add)			
{
	cout << "��������Ҫ���ҵ���ϵ������\n";
	string name;
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "����ϵ�˲�����\n";
	else
	{
		cout << "������" << add->personArray[ret].name << " �Ա�";
		cout << (add->personArray[ret].sex == 1 ? "��" : "Ů");
		cout << " ���䣺" << add->personArray[ret].age << " �绰��" << add->personArray[ret].tel << " ��ַ��" <<
			add->personArray[ret].home << endl;
	}
	system("pause");
	system("cls");
}

//ɾ����ϵ��
void DeleteAddBook(Addressbooks* add)
{
	string name;
	cout << "��������Ҫɾ������ϵ������\n";
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "����ϵ�˲�����\n";
	else
	{
		for (int i = ret; i < add->m_size - 1; i++)
		{
			add->personArray[i] = add->personArray[i + 1];
		}
		add->m_size--;
		cout << "ɾ���ɹ�\n";
	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void Change(Addressbooks* add)
{
	cout << "��������ϵ������\n";
	string name;
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "���޴���\n";
	else 
	{
		cout << "����������\n";
		cin >> name;
		add->personArray[ret].name = name;
		cout << "�������Ա�,1���� 2��Ů\n";
		while (1)
		{
			int sex = 0;;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				add->personArray[ret].sex = sex;
				break;
			}
			else cout << "�������\n";
		}
		cout << "��������\n";
		unsigned age = 0;
		cin >> age;
		add->personArray[ret].age = age;
		cout << "����绰\n";
		string tel;
		cin >> tel;
		add->personArray[ret].tel = tel;
		cout << "�����ַ\n";
		string home;
		cin >> home;
		add->personArray[ret].home = home;
		cout << "�޸ĳɹ�\n";
		system("pause");
		system("cls");		//����
	}
}

//���ͨѶ¼
void Clear(Addressbooks* add)
{
	add->m_size = 0;
	cout << "��ճɹ�\n";
	system("pause");
	system("cls");
}
