#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct Student
{
	string name;
	unsigned age;
	double score;
};
//�ṹ��
void test1()
{
	Student s1 = { "����", 18, 65.7 };		//C++�ж������ʱ��struct����ʡ�ԣ�C������
	cout << "���� " << s1.name << " ���� " << s1.age << " ���� " << s1.score << endl;
}

//�ṹ������
void test2()
{
	struct Student arr[] =
	{
		{"����", 18, 100},
		{"����", 20, 99},
		{"����", 19, 90}
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		cout << "���� " << arr[i].name << " ���� " << arr[i].age << " ���� " << arr[i].score << endl;
	}
}

//�ṹ��ָ��
void test3()
{
	Student s1 = { "����", 18, 100 };
	Student* p = &s1;
	cout << "���� " << p->name << " ���� " << p->age << " ���� " << p->score << endl;
}

//�ṹ��Ƕ��

//struct Teacher
//{
//	int id;		//��ʦ���
//	string name;	//��ʦ����
//	int age;		//��ʦ����
//	Student stu;	//��ʦ����ѧ��
//};
//void test4()
//{
//	Teacher t1 = { 12345, "����ʦ", 50, {"����", 18, 100} };
//	cout << "��ʦ��� " << t1.id << " ��ʦ������ " << t1.name << " ��ʦ������ " << t1.age << " ��ʦ����ѧ��\n" << "ѧ������ " << t1.stu.age <<
//		" ѧ�������� " << t1.stu.name << " ѧ���ķ��� " << t1.stu.score << endl;
//}

//�ṹ�尸��

/*

	����1��
	ѧУ�����裬ÿ����ʦ��5��ѧ��������3����ʦ��Ҫ�����£�
	���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ��������һ�����5��ѧ��������
	ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
	���մ�ӡ����ʦ���ݼ�����ѧ��������

*/
struct Teacher
{
	string name;
	Student arr[5];
};

void Init(Teacher teacher_arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << "�����" << i + 1 << "����ʦ����Ϣ\n";
		getline(cin,teacher_arr[i].name);
		cout << "�����" << i + 1 << "����ʦ����ѧ������Ϣ\n";
		for (int j = 0; j < 5; j++)
		{
			cin >> teacher_arr[i].arr[j].score;
			getchar();
			getline(cin, teacher_arr[i].arr[j].name);
		}
	}
}
void Print(const Teacher teacher_arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << "��ʦ����: " << teacher_arr[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:"  << teacher_arr[i].arr[j].name << " ѧ������:" << teacher_arr[i].arr[j].score << endl;
		}
	}
}
void test5()
{
	Teacher teacher_arr[3];
	int sz = sizeof(teacher_arr) / sizeof(teacher_arr[0]);
	Init(teacher_arr,sz);
	Print(teacher_arr, sz);
}


/*

����2��
	���һ��Ӣ�۵Ľṹ�壬������Ա�����������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
	ͨ��ð�����򣬽������е�Ӣ�۰�����������������У������մ�ӡ�����Ľ��

*/
struct hero
{
	string name;
	unsigned age;
	string sex;
};
void BubbleHero(hero arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
}
void PrintHero(const hero arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << "Ӣ��������" << arr[i].name << " Ӣ�����䣺" << arr[i].age << " Ӣ���Ա�" << arr[i].sex << endl;
	}
}
void test6()
{
	hero arr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleHero(arr, sz);
	PrintHero(arr, sz);

}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}
