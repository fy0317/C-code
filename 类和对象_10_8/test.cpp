#define _CRT_SECURE_NO_WARNINGS
//������̣���ע�����ִ�еĹ���
//������󣺹�ע���Ƕ��󣬽�һ�������ֳɼ�������

//�������������������̾��ǹ�ע���ˣ��㵥���ӵ������͵�С�Ĺ���
//				�����������ǹ�ע���ң����ֺ��û���������֮��Ĺ�ϵ��ʹ����ϵͳ���ӵ�����

//C++�ǻ��������������ԣ������������Ҳ���������

//C   �������  --- �����ݺͷ����ֿ�
//
//CPP �������	--- �����ݺͷ�����һ��


//��װ��  �����ݺͷ�������һ��  ���Ը��õر������ݣ�ֻ��ͨ�������ķ���ȥ��������

#include<iostream>
using namespace std;

struct student
{
	void set_student(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void print_student()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}
	int _age;
	char _name[20];
	char _gender[3];
};

//�������ʹ�Сʱ��ֻ���ǳ�Ա�����������ǳ�Ա������	��Ա�����洢��	������
// ��Ϊ����ѳ�Ա����Ҳ�������У���ôÿ����һ������ʱ����Ҫ����Ա����Ҳһ�𴴽�������ͬ����ĳ�Ա������Ȼ��һ�����������ǵĳ�Ա��������һ���ģ������ͻ�����ڴ��˷�
//�������һ����Ա������û�У�����Ĵ�СΪ1���ֽ�
class Stack 
{
public:
	void init(){}
	void push(int x){}
private:
	int* arr;
	int top;
	int capacity;
};

//����
class A
{
};

class B
{
public:
	void f1(){}
	void f2(){}
};

class Data
{
public:
	//void Init(Data* this, int year, int month, int day) //������һ������
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;

		Print();	//��Ա����Ҳ���Ե��������ĳ�Ա����, ��Ϊ��thisָ��
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}


private:
	int _year;
	int _month;
	int _day;
};

//ͨһ����Ĳ�ͬ����ȥ���ʳ�Ա����ʱ��������Ϊ��֪���ڳ�Ա�����з��ʵ����ĸ�����ĳ�Ա������������thisָ�룬�ڵ��ó�Ա������ʱ�򣬱������������ؼ���һ������������ǰ����ĵ�ַ��Ҳ����thisָ��

//thisָ�����βΣ��Ǵ����ջ�ϵģ�VS��this��ͨ���Ĵ���ecx���ݵ�


class AA
{
public:
	void Show()
	{
		cout << "Show\n";	//�����������
	}
	void Print()
	{
		cout << "Show:" << _a << _b << endl;	//��ָ�룬�����������Խ��
	}
private:
	int _a;
	int _b;
};
int main()
{
	//student s;
	//s.set_student("Perter", 20, "��");
	//s.print_student();
	Stack s;
	//s.init();
	//s.push(10);
	cout << sizeof(s) << endl;
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;

	//���һ����û�г�Ա��������Ҫ��һ���ֽڽ���ռλ�����������ʱ����ܱ�ʾ������ڣ���1�ֽڲ��洢��Ч������


	Data d1;
	Data d2;

	d1.Init(2021, 10, 9);	//d1.Init(&d1, 2021, 10, 9);	�����Ĳ���
	d2.Init(2022, 10, 9);	//d2.Init(&d2, 2021, 10, 9);	�����Ĳ���
	
	d1.Print();	//d1.Print(&d1);
	d2.Print();	//d2.Print(&d1);

	AA* p = nullptr;

	p->Show();	//�����������У���Ϊ����ĳ�Ա�����ڹ�������Σ��ڵ���ʱ������ȥ����p�ĵ�ַ��Ҳ��û�п�ָ��Ľ����ã�
				//�ڵ���Show()����ʱ��ֻ�ᴫ��������thisָ�룬����Show()�����ڲ���Ҳû��ȥ������thisָ�룬Ҳû�п�ָ��Ľ����ã����Բ���Խ��

	//p->Print();	//���������Ϊ��Print�л��thisָ�������

	return 0;
}

