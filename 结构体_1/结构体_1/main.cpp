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
//结构体
void test1()
{
	Student s1 = { "张三", 18, 65.7 };		//C++中定义变量时，struct可以省略，C不可以
	cout << "姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " << s1.score << endl;
}

//结构体数组
void test2()
{
	struct Student arr[] =
	{
		{"张三", 18, 100},
		{"李四", 20, 99},
		{"王五", 19, 90}
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		cout << "姓名 " << arr[i].name << " 年龄 " << arr[i].age << " 分数 " << arr[i].score << endl;
	}
}

//结构体指针
void test3()
{
	Student s1 = { "张三", 18, 100 };
	Student* p = &s1;
	cout << "姓名 " << p->name << " 年龄 " << p->age << " 分数 " << p->score << endl;
}

//结构体嵌套

//struct Teacher
//{
//	int id;		//老师编号
//	string name;	//老师姓名
//	int age;		//老师年龄
//	Student stu;	//老师带的学生
//};
//void test4()
//{
//	Teacher t1 = { 12345, "王老师", 50, {"张三", 18, 100} };
//	cout << "老师编号 " << t1.id << " 老师的姓名 " << t1.name << " 老师的年龄 " << t1.age << " 老师带的学生\n" << "学生年龄 " << t1.stu.age <<
//		" 学生的姓名 " << t1.stu.name << " 学生的分数 " << t1.stu.score << endl;
//}

//结构体案例

/*

	案例1：
	学校做毕设，每个老师带5名学生，共有3名老师，要求如下：
	设计学生和老师的结构体，其中在老师的结构体中，有老师的姓名和一个存放5名学生的数组
	学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
	最终打印出老师数据及所带学生的数据

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
		cout << "输入第" << i + 1 << "个老师的信息\n";
		getline(cin,teacher_arr[i].name);
		cout << "输入第" << i + 1 << "个老师所带学生的信息\n";
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
		cout << "老师姓名: " << teacher_arr[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:"  << teacher_arr[i].arr[j].name << " 学生分数:" << teacher_arr[i].arr[j].score << endl;
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

案例2：
	设计一个英雄的结构体，包括成员的姓名、年龄、性别；创建结构体数组，数组中存放5名英雄
	通过冒泡排序，将数组中的英雄按照年龄进行升序排列，并最终打印排序后的结果

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
		cout << "英雄姓名：" << arr[i].name << " 英雄年龄：" << arr[i].age << " 英雄性别：" << arr[i].sex << endl;
	}
}
void test6()
{
	hero arr[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
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
