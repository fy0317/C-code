#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;
//int main()
//{
//	cout << "�����ӳٵ�ʱ��\n";
//	float sec;
//	cin >> sec;
//	clock_t delay = sec * CLOCKS_PER_SEC;
//	clock_t start = clock();
//	cout << "��ʼ\n";
//	while (clock() - start < delay)
//	{
//		;
//	}
//	cout << "����\n";
//	return 0;
//}

//���ڷ�Χ��forѭ��
//int main()
//{
//	double price[] = { 4.99, 10.99, 6.87, 7.99 ,8.49 };
//	for (double &x : price)		//����
//		x = 0;
//	for (double x : price)
//		cout << x << endl;
//	return 0;
//}

//��������
//int main()
//{
//	unsigned a = 3;
//	int b = -1;
//	if (a > b)
//		cout << "�Ǻ�\n";
//	else cout << "����\n";
//	return 0;
//}

//int main()
//{
//	char ch;
//	int cnt = 0;
//	cout << "�����ַ�\n";
//	cin.get(ch);
//	while (ch !='#')
//	{
//		cout << ch;
//		cnt++;
//		cin.get(ch);
//
//	}
//	cout << endl << cnt << endl;
//	return 0;
//}

//��ά����
int main()
{
	const int city = 5;
	const int year = 4;
	const char* City[city] = {
		"����",
		"�Ϻ�",
		"�Ͼ�",
		"����",
		"����"
	};
	int temp[year][city] =
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	for (int i = 0; i < city; i++)
	{
		cout << City[i] << "��\t";
		for (int j = 0; j < year; j++)
			cout << temp[j][i] << "\t";
		cout << endl;
	}
	return 0;
}