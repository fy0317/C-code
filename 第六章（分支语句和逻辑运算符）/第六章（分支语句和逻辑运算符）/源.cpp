#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
using namespace std;
void test6_1()
{
	int space = 0;
	int total = 0;
	char ch = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			space++;
		total++;
		cin.get(ch);
	}
	cout << space << "���ո�" << total << "���ַ�" << endl;
}

//cctype��
void test6_8()
{
	cout << "�����ַ�����������@����������\n";
	char ch;
	int space = 0;		//�ո���
	int digits = 0;		//����
	int chars = 0;		//�ַ�
	int punct = 0;		//���ź;��
	int others = 0;		//�����ַ�
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			space++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else others++;
		cin.get(ch);
	}
	cout << "�ַ���" << chars << " �ո�" << space << " ���֣�" << digits << " ����ţ�" << punct << " ������" << others << endl;
}

//cinfinish
void test6_13()
{
	const int MAX = 5;
	double fish[MAX];
	cout << "���������������" << "���" << MAX << "����" << "����q����\n";
	cout << "fish #1��";
	int i = 0;
	while (i <MAX && cin >> fish[i])		//������Ĳ�������ʱ���������Ͳ�ƥ�䣬cin������false
	{
		if (++i < MAX)
			cout << "fish #" << i + 1 << ":";
	}
	double total = 0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "û����\n";
	else cout << i << "�����ƽ��������" << total / i << endl;
}
//��cin�������Ͳ�ƥ��ʱ���������룬����������
void test6_14()
{
	const int MAX = 5;
	int goal[MAX];
	cout << "�����������\n";
	for (int i = 0; i < MAX; i++)
	{
		cout << "round #" << i + 1 << ":";
		while (!(cin >> goal[i]))
		{
			cin.clear();
			/*������������ݵĻ�����������һ��q���������Ͳ�ƥ�䣬�����goal[i]��ֵ��q��һֱ�洢����������У�
			����һ������ʱ����������л���q�����ǲ����goal[i]��ֵ������ѭ��*/
			while (cin.get() != '\n')		
				continue;		//������break
			cout << "���������֣�\n";
		}
	}
	double total = 0;
	for (int i = 0; i < MAX; i++)
		total += goal[i];
	cout << "ƽ���֣�" << total / MAX << endl;
}
int main()
{
	//test6_1();
	//test6_8();
	//test6_13();
	test6_14();
	return 0;
}
