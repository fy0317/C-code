#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�ⲿ������
//
// 
//double warming = 0.3;
//void update(double dt);
//void local();
//int main()
//{
//	cout << "ȫ�ֱ���warming = " << warming << endl;
//	update(0.1);
//	cout << "ȫ�ֱ���warming = " << warming << endl;
//	local();
//	cout << "ȫ�ֱ���warming = " << warming << endl;
//	system("pause");
//	return 0;
//}


//staticʹ��
const int ArrSize = 10;
void strcount(const char* arr);

int main()
{
	char arr[ArrSize];
	cout << "�����ַ���:\n";
	cin.get(arr, ArrSize);
	char next;
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(arr);
		cout << "������һ���ַ���\n";
		cin.get(arr, ArrSize);
	}
	return 0;
}

void strcount(const char* arr)
{
	if (arr == NULL) return;
	static int total = 0;
	int cnt = 0;
	while (*arr != 0)
	{
		cnt++;
		arr++;
	}
	total += cnt;
	cout << "��ǰ������ַ�����" << cnt << "���ַ�\n";
	cout << "�ܹ���" << total << "���ַ�\n";
}

