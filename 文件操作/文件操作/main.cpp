#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cerrno>
#include<string>
using namespace std;

//�ı��ļ���д�ļ�
void test1()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺 20" << endl; 
	ofs.close();
}

//���ļ�
void test2()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		perror("�ļ���ʧ��");
		return;
	}

	//������

	//1��
	//char buf[1024] = { 0 };
	//while (!ifs.eof())
	//{
	//	ifs >> buf;
	// 	cout << buf << endl;
	//}


	//2��
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(ifs)))
	//{
	//	cout << buf << endl;
	//}

	//3��
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//4��
	char c = 0;
	while (!ifs.eof())
	{
		ifs.get(c);
		cout << c;
	}
	ifs.close();


}

//�����Ʋ����ļ�

//������д�ļ�

class Person
{
public:
	char m_name[40];
	int m_age;
};

void test3()
{
	//�������������
	ofstream ofs;
	//ofstream ofs("person.txt", ios::out | ios::binary);
	ofs.open("person.txt", ios::out | ios::binary);

	Person p = { "����", 18 };
	//д�ļ�
	ofs.write((const char*)&p, sizeof(p));

	//�ر��ļ�
	ofs.close();
}


//�����ƶ��ļ�
void test4()
{
	//����������
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		perror("�ļ���ʧ��");
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
	ifs.close();
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0; 
}
