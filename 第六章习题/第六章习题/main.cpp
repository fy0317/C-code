#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
void test2()
{
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		//else cout << ++ch;
		else cout << ch + 1;		//�ᷢ����������
		cin.get(ch);
	}
}

#include<cctype>
void test6_1()
{
	char ch;
	//cin.get(ch);
	//while (ch != '@')
	//{
	//	if (isdigit(ch))
	//	{
	//		cin.get(ch);
	//		continue;
	//	}
	//	else if (islower(ch))
	//	{
	//		ch = toupper(ch);
	//	}
	//	else if (isupper(ch))
	//		ch = tolower(ch);
	//	cout << ch;
	//	cin.get(ch);
	//}
	while ((ch = cin.get()) != '@')
	{
		if (!isdigit(ch))
		{
			if (islower(ch))
				ch = toupper(ch);
			else if (isupper(ch))
				ch = tolower(ch);
			cout << ch;
		}
	}
}

#include<array>
void test6_2()
{
	array<double, 10>donations = { 0 };
	double input = 0;
	double sum = 0;
	double average = 0;
	int i = 0;
	int cnt = 0;
	cin >> input;
	while (input != 0 && i < 10)
	{
		donations[i++] = input;
		cin >> input;
	}
	for (i = 0; i < 10; i++)
		sum += donations[i];
	average = sum / 10;
	for (i = 0; i < 10; i++)
		if (donations[i] > average)
			cnt++;
	cout << "ƽ��ֵ��" << average << " ��" << cnt << "��������ƽ��ֵ\n";
}

void test6_3()
{
	cout << "c) carnivore		p) pianist\n";
	cout << "t) tree		    g) game   \n";
	cout << "��ѡ��\n";
	char ch;
	ch = cin.get();
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{
		cout << "c) carnivore		p) pianist\n";
		cout << "t) tree		    g) game   \n";
		cout << "��ѡ��\n";
		cin.get(ch);
	}
	switch (ch)
	{
	case 'c':
		cout << "ѡ����carnivore\n";
		break;
	case 'p':
		cout << "ѡ����pianist\n";
		break;	
	case 't':
		cout << "ѡ����tree\n";
		break;
	case 'g':
		cout << "ѡ����game\n";
		break;
	}
}

void test6_5()
{
	float salary = 0.0, tax;
	cout << "�������нˮ��\n";
	cin >> salary;
	while (salary > 0)
	{
		if (salary <= 5000)
			tax = 0;
		else if (salary <= 15000)
			tax = (salary - 5000) * 0.1;
		else if (salary < 35000)
			tax = 10000 * 0.1 + (salary - 15000) * 0.15;
		else tax = 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
		cout << "����Ҫ��˰��" << tax << endl;
		cout << "��һ�����룺\n";
		cin >> salary;
	}
}

struct Person
{
	string name;
	double fund;
};
void test6_6()
{
	int num;
	cout << "���������������\n";
	cin >> num;
	cin.get();
	Person* arr = new Person[num];
	cout << "��������ߵ���Ϣ��\n";
	for (int i = 0; i < num; i++)
	{
		cout << "������";
		getline(cin, arr[i].name);
		cout << "�������";
		cin >> arr[i].fund;
		cin.get();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "������" << arr[i].name << " �������" << arr[i].fund << endl;
	}
	delete[]arr;
}

void test6_7()
{
	int cnt1 = 0;		//Ԫ��
	int cnt2 = 0;		//����
	int other = 0;		//����
	char words[40];
	cout << "����һ�����ʣ�������q������\n";
	cin >> words;
	while (strcmp(words, "q"))
	{
		if (!isalpha(words[0]))
			other++;
		else
		{
			switch (words[0])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cnt1++;
				break;
			default:
				cnt2++;
				break;
			}
		}
		cout << "��һ������\n";
		cin >> words;
	}
	cout << "Ԫ����" << cnt1 << "��" << "������" << cnt2 << "��" << " ������" << other << "��" << endl;
}


int main()
{
	//test2();
	//test6_1();
	//test6_2();
	//test6_3();
	//test6_5();
	//test6_6();
	test6_7();
	return 0;
}

