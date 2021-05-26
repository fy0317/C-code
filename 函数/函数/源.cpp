#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);
void test7_4()
{
	double total, choices;
	cout << "�����ܹ���ѡ������֣�������ѡ��Ĵ���\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "����";
		cout << probability(total, choices) << "����\n";
		cout << "����������������(q to quit) :";
	}
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
	{
		result *= n / p;
	}
	return result;
}

int fill_Arr(double arr[], int size);
void PrintArr(const double arr[], int sz);
void revalue(double r, double arr[], int sz);
void test7_7()
{
	const int MAX = 5;
	double arr[MAX];

	int size = fill_Arr(arr, MAX);
	PrintArr(arr, size);
	if (size > 0)
	{
		cout << "��������������\n";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				;
			cout << "�������������һ������\n";
		}
		revalue(factor, arr, size);
		PrintArr(arr, size);
	}

}
int fill_Arr(double arr[], int size)
{
	double tmp;
	int i;
	for (i = 0; i < size; i++)
	{
		cout << "����������:";
		if (!(cin >> tmp))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�������\n";
			break;
		}
		if (tmp < 0)
		{
			cout << "���������0����\n";
			//cin >> tmp;
			break;
		}
		arr[i] = tmp;
	}
	return i;
}
void revalue(double r, double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		arr[i] *= r;
}
void PrintArr(const double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		cout << arr[i] << " ";
	cout << endl;
}


//����һ���ַ���
char* buildstr(char c, int n)
{
	char* str = new char[n + 1];
	str[n] = 0;
	n--;
	while (n >= 0)
	{
		str[n] = c;
		n--;
	}
	return str;
}
void test7_10()
{
	int times;
	char ch;
	cout << "������һ���ַ�:";
	cin >> ch;
	cout << "\n������һ������:";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete(ps);
}

//�����ͽṹ��
//��ֱ������ϵ�е����꣬ת��Ϊ�������е�����
#include<cmath>
struct point1		//ֱ������ϵ
{
	double x;
	double y;
};
struct point2		//������ϵ
{
	double l;
	double angle;
};
void  point1_to_point2(const point1* p1, point2* p2)
{
	p2->l = sqrt(p1->x * p1->x + p1->y * p1->y);
	p2->angle = atan2(p1->y, p1->x);
}

void show_point2(const point2* p)
{
	const double a = 57.29577951;
	cout <<"����= " << p->l << "  �Ƕ�=" << p->angle * a << endl;
}
void test7_12()
{
	point1 p1;
	point2 p2;
	cout << "����x��y�����ֵ:";
	while (cin >> p1.x >> p1.y)
	{
		point1_to_point2(&p1, &p2);
		show_point2(&p2);
		cout << "������һ��x��y����ֵ��������q�˳���: ";
	}
}


//������string����
#include<string>
void show_stringarr(const string* arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}
void test7_14()
{
	const int SIZE = 5;
	string arr[SIZE];
	cout << "��������ϲ����" << SIZE << "������:\n";
	for (int i = 0; i < SIZE; i++)
	{
		getline(cin, arr[i]);
	}
	cout << "����ϲ���ĳ����ǣ�" << endl;
	show_stringarr(arr, SIZE);
}

//������array����
#include<array>
const int Seasons = 4;
const array<string, Seasons>season = { "Spring", "Summer", "Fall", "Winter" };
void fill(array<double, Seasons>* pa)			//����ָ��
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "����" << season[i] << "�Ŀ�֧:";
		cin >> (*pa)[i];
	}
}
void show_array(array<double, Seasons>da)
{
	double sum = 0;
	cout << "��֧���£�\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << season[i] << ":$" << da[i] << endl;
		sum += da[i];
	}
	cout << "�ܿ�֧:$" << sum << endl;
}
void test7_15()
{
	array<double, Seasons>expenses;
	fill(&expenses);
	show_array(expenses);
}

//�����ݹ�
//���Ƴ���
const int Len = 66;
const int Divs = 6;
void subdivide(char arr[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (low + high) / 2;
	arr[mid] = '|';
	subdivide(arr, low, mid, level - 1);
	subdivide(arr, mid, high, level - 1);
}
void test7_17()
{
	char ruler[Len];
	int i = 0;
	for (i = 0; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = 0;
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';
	}
}
int main()
{
	//test7_4();
	//test7_7();
	//test7_10();
	//test7_12();
	//test7_14();
	//test7_15();
	test7_17();
	return 0;
}