#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cerrno>
using namespace std;


//д�뵽�ļ��ı���
void test6_15()
{
	char arr[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;		//����һ�����󣬽�����������ļ���
	outFile.open("test.txt");		//��һ���ļ����������򴴽�һ����
	cout << "���룺";
	cin.getline(arr, 50);
	cout << "�����꣺";
	cin >> year;
	cout << "��������ļ۸�\n";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//��ʾ��Ϣ
	cout << fixed;		//��һ����ʽ��ʾ������
	cout.precision(2);		//��������������ľ���
	cout.setf(ios_base::showpoint);		//��ʾ������С�������0
	cout << "Make and model��" << arr << endl;
	cout << "Year��" << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;


	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model:" << arr << endl;
	outFile << "Year:" << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;
	outFile.close();
}

//��ȡ�ı��ļ�
void test6_16()
{
	const int SIZE = 60;
	char filename[60];
	ifstream inFile;
	cout << "���������ļ�������\n";
	cin.getline(filename, SIZE);
	inFile.open(filename);		//���ļ�filename�ж�ȡ��Ϣ�������̨
	if (!inFile.is_open())	//û�д��ļ�
	{
		perror("�ļ���ʧ��");			//����ԭ��
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0;
	inFile >> value;		//��ȡ���ݵ�value��
	int count = 0;
	while (inFile.good())	//�ж��Ƿ����,û�г������ȡ����
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())	//�ж��Ƿ�����ļ���β
		cout << "�ļ���ȡ����\n";
	else if (inFile.fail())		//�ж��Ƿ����������Ͳ�ƥ�������
		cout << "��Ϊ���ݲ�ƥ�䵼���ļ���ȡ����\n";
	else perror("����ԭ��");
	if (count == 0)
		cout << "û������\n";
	else
	{
		cout << "��" << count << "������\n";
		cout << "Sum = " << sum << "\nAverage = " << sum / count << endl;
	}
	inFile.close();
}
int main()
{
	//test6_15();
	test6_16();
	return 0;
}
