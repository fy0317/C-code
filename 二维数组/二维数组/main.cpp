#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	int score[][3] =
//	{
//		{100, 100, 100},
//		{90, 50, 100},
//		{70, 60, 60}
//	};
//	string name[] = { "����","����", "����" };
//	int row = sizeof(score) / sizeof(score[0]);
//	int col = sizeof(score[0]) / sizeof(score[0][0]);
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < col; j++)
//			sum += score[i][j];
//		cout << name[i] << "�ķ�����" << sum << endl;
//	}
//	return 0;
//}

//�ӷ�����
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int sum = 0;
//	int a, b;
//	cin >> a >> b;
//	sum = Add(a, b);
//	cout << sum;
//	return 0;
//}

//ָ�볣���ͳ���ָ��
//int main()
//{
//	int a = 10, b = 20;
//	//����ָ��
//	const int* p = &a;
//	//		*p = 20;  //����
//	p = &b;			//��ȷ
//	//ָ�볣��
//	int* const p1 = &a;
//	*p1 = 20;		//��ȷ
//	//p1 = &b;		//����
//	return 0;
//}

//ָ�롢���顢����
#include<cassert>
void Bubble(int* p, int len)
{
	assert(p);
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}

void PrintArr(const int* p, int len)
{
	assert(p);
	for (int i = 0; i < len; i++)
		cout << p[i] << " ";
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr, len);
	PrintArr(arr, len);
	return 0;
}