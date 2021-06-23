#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct application
{
	char name[30];
	int credit[3];
};
void display_struct(const application& app)
{
	cout << app.name << ':';
	for (int i = 0; i < 3; i++)
		cout << app.credit[i] << ' ';

}
void test()
{
	application app = { "张三", {2, 3, 5} };
	display_struct(app);
}

//1、：
double average(double x, double y)
{
	return 2 * x * y / (x + y);
}
void test7_1()
{
	double input1;
	double input2;
	cout << "输入两个数：";
	cin >> input1 >> input2;
	while ((input1 > 1e-15 || input1 < -1e-15) && (input2 > 1e-15 || input2 < -1e-15))
	{
		cout << average(input1, input2) << endl;
		cout << "继续输入：";
		cin >> input1 >> input2;
	}
}

//2、
void test7_2()
{
	double input[10] = { 0 };
	cout << "输入成绩：（q退出）";
	int i;
	double sum = 0;
	int cnt = 0;
	for (i = 0; i < 10; i++)
	{
		if (cin >> input[i])
			cnt++;
		else break;
	}
	for (i = 0; i < cnt; i++)
	{
		cout << input[i] << ' ';
		sum += input[i];
	}
	cout << "平均值：" << sum / cnt << endl;
}

//3、

struct box
{
	char marker[40];
	float weight;
	float width;
	float length;
	float volume;
};
void display(const box* b)
{
	cout << b->marker << ":" << b->length << ',' << b->weight << ',' << b->width << ',' << b->volume << endl;
}
void test7_3()
{
	box Orange = { "China", 12, 12, 12 , 0};
	display(&Orange);
}

//4、
double probability(int x, int y, int num)
{
	double result = 1.0;
	for (; num > 0; x--, num--)
		result *= x;
	result *= y;
	return 1 / result;
}
void test7_4()
{
	cout << probability(45, 27, 5);
}

//5、
int fib(int n)
{
	if (n < 0)return -1;
	if (n == 0)return 1;
	else
		return n * fib(n - 1);
}
void test7_5()
{
	int n;
	while (cin >> n)
	{
		cout << n << "!= " << fib(n) << endl;
	}
}

//6、
int Fill_array(double arr[], int len)
{
	cout << "输入：\n";
	int i = 0;
	while (i < len && cin >> arr[i])
		i++;
	return i;
}

void Show_arr(const double* arr, int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void Reverse_arr(double* arr, int len)
{
	int left = 0, right = len - 1;
	double tmp;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void test7_6()
{
	double arr[10];
	int size = Fill_array(arr, 10);
	Show_arr(arr, size);
	Reverse_arr(arr, size);
	Show_arr(arr, size);	
	Reverse_arr(&arr[1], size - 2);
	Show_arr(arr, size);
}

//9、
const int SIZE = 30;
struct student
{
	char fullname[SIZE];	//姓名
	char hobby[SIZE];		//爱好
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* st);
void display3(const student pa[], int n);

void test7_9()
{
	int class_size;
	cout << "输入班级大小:";
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[]ptr_stu;
	cout << "结束\n";
}

int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "输入学生姓名：";
		cin.getline(pa[i].fullname, SIZE);
		cout << "输入学生爱好：";
		cin.getline(pa[i].hobby, SIZE);
		cout << "输入ooplevel：";
		cin >> pa[i].ooplevel;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				;
			cout << "结束输入\n";
			break;
		}
		cin.get();
	}
	return i;
}

void display1(student st)
{
	cout << "姓名：" << st.fullname << endl;
	cout << "爱好：" << st.hobby << endl;
	cout << "等级：" << st.ooplevel << endl;
}

void display2(const student* st)
{
	cout << "姓名：" << st->fullname << endl;
	cout << "爱好：" << st->hobby << endl;
	cout << "等级：" << st->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "姓名：" << pa[i].fullname << endl;
		cout << "爱好：" << pa[i].hobby << endl;
		cout << "等级：" << pa[i].ooplevel << endl;
	}
}

//10、
double calculate(double x, double y, double (*func)(double, double))
{
	return func(x, y);
}

double Add(double x, double y)
{
	return x + y;
}

double Sub(double x, double y)
{
	return x - y;
}
void test7_10()
{
	cout << calculate(2.1, 1.1, Add) << endl;
	cout << calculate(2.5, 10.4, Sub) << endl;
}
int main()
{
	//test();
	//test7_1();
	//test7_2();
	//test7_3();
	//test7_4();
	//test7_5();
	//test7_6();
	//test7_9();
	test7_10();

	return 0;
}

