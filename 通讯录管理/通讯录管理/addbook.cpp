#include"addbook.h"

//添加联系人
void AddPerson(Addressbooks* add)
{
	if (add->m_size >= MAX)
	{
		cout << "通讯录已满\n";
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名\n";
		cin >> name;
		add->personArray[add->m_size].name = name;
		cout << "请输入性别,1：男 2：女\n";
		while (1)
		{
			int sex = 0;;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				add->personArray[add->m_size].sex = sex;
				break;
			}
			else cout << "输入错误\n";
		}
		cout << "输入年龄\n";
		unsigned age = 0;
		cin >> age;
		add->personArray[add->m_size].age = age;
		cout << "输入电话\n";
		string tel;
		cin >> tel;
		add->personArray[add->m_size].tel = tel;
		cout << "输入地址\n";
		string home;
		cin >> home;
		add->personArray[add->m_size].home = home;
		add->m_size++;
		system("pause");
		system("cls");		//清屏
	}
}

//显示联系人
void PrintAddBook(const Addressbooks* add)
{
	if (add == NULL) return;
	else if (add->m_size == 0)
	{
		cout << "通讯录为空\n";
		return;
	}
	for (int i = 0; i < add->m_size; i++)
	{
		cout << "姓名：" << add->personArray[i].name << " 性别：";
		cout << (add->personArray[i].sex == 1 ? "男" : "女");
		cout << " 年龄：" << add->personArray[i].age << " 电话：" << add->personArray[i].tel << " 地址：" <<
			add->personArray[i].home << endl;
	}
	system("pause");
	system("cls");		//清屏
}

int find(const Addressbooks* add, string name)			//查找联系人
{
	for (int i = 0; i < add->m_size; i++)
	{
		if (name == add->personArray[i].name)
			return i;
	}
	return -1;
}

//查找联系人
void Find(const Addressbooks* add)			
{
	cout << "请输入所要查找的联系人姓名\n";
	string name;
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "该联系人不存在\n";
	else
	{
		cout << "姓名：" << add->personArray[ret].name << " 性别：";
		cout << (add->personArray[ret].sex == 1 ? "男" : "女");
		cout << " 年龄：" << add->personArray[ret].age << " 电话：" << add->personArray[ret].tel << " 地址：" <<
			add->personArray[ret].home << endl;
	}
	system("pause");
	system("cls");
}

//删除联系人
void DeleteAddBook(Addressbooks* add)
{
	string name;
	cout << "请输入想要删除的联系人姓名\n";
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "该联系人不存在\n";
	else
	{
		for (int i = ret; i < add->m_size - 1; i++)
		{
			add->personArray[i] = add->personArray[i + 1];
		}
		add->m_size--;
		cout << "删除成功\n";
	}
	system("pause");
	system("cls");
}
//修改联系人
void Change(Addressbooks* add)
{
	cout << "请输入联系人姓名\n";
	string name;
	cin >> name;
	int ret = find(add, name);
	if (ret == -1)
		cout << "查无此人\n";
	else 
	{
		cout << "请输入姓名\n";
		cin >> name;
		add->personArray[ret].name = name;
		cout << "请输入性别,1：男 2：女\n";
		while (1)
		{
			int sex = 0;;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				add->personArray[ret].sex = sex;
				break;
			}
			else cout << "输入错误\n";
		}
		cout << "输入年龄\n";
		unsigned age = 0;
		cin >> age;
		add->personArray[ret].age = age;
		cout << "输入电话\n";
		string tel;
		cin >> tel;
		add->personArray[ret].tel = tel;
		cout << "输入地址\n";
		string home;
		cin >> home;
		add->personArray[ret].home = home;
		cout << "修改成功\n";
		system("pause");
		system("cls");		//清屏
	}
}

//清空通讯录
void Clear(Addressbooks* add)
{
	add->m_size = 0;
	cout << "清空成功\n";
	system("pause");
	system("cls");
}
