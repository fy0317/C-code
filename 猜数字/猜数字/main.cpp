#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstdlib>
//#include<ctime>
using namespace std;

//��Ŀ�����
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//C++����Ŀ��������ص��Ǳ��������Լ�����ֵ,C�����в�����
//	(a > b ? a : b) = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}


//switch ���
//int main()
//{
//	int score = 0;
//	cout << "�����Ӱ���\n";
//	cin >> score;
//	switch (score)
//	{
//	case 10 :
//	case 9: 
//		cout << "�����Ӱ\n";
//		break;
//	case 8:
//	case 7:
//		cout << "�ܺõ�һ����Ӱ\n";
//		break;
//	case 6:
//	case 5:
//		cout << "һ��\n";
//		break;
//	default:
//		cout << "��Ƭ\n";
//		break;
//	}
//	return 0;
//}


//������
//int main()
//{
//	int n = 0;
//	srand((unsigned int)time(NULL));
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	cout << ret << endl;
//	while (1)
//	{
//		cout << "������1~100֮�����������\n";
//		cin >> n;
//		if (n < ret)
//			cout << "�����������С��\n";
//		else if (n > ret) cout << "����������ִ���\n";
//		else {
//			cout << "��ϲ��¶���\n";
//			break;
//		}
//	}
//	return 0;
//}


//ˮ�ɻ���
//#include<cmath>
//int main()
//{
//	int n = 100;
//	do
//	{
//		int tmp = n;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, 3);
//			tmp /= 10;
//		}
//		if (sum == n)
//			cout << n << " ";
//		n++;
//	} while (n < 1000);
//	return 0;
//}

//������
//1-100�У������λ����Ϊ7����ʮλ��7������7�ı��������ӡ������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7 || i / 10  == 7 || i % 7 == 0)
//			cout << "������" << endl;
//		else cout << i << endl;
//	}
//	return 0;
//}

//��ӡ*
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	return 0;
//}


//�˷��ھ���
//#include<cstdio>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			//cout << j << "*" << i << "=" << i * j;
//			//cout << "\t";
//			printf("%d*%d=%-5d", j, i, j * i);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//����Ԫ�ط�ת
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz / 2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//ð������
void Bubble(int arr[], int sz)
{
	int tmp = 0;
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 4, 2,8,0,5,7,1,3,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr, sz);
	for (int i = 0; i < sz; i++)
		cout << arr[i] << " ";

	return 0;
}