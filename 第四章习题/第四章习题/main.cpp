#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//-------------------------------
// ��һ��
//int main()
//{
//	char first_name[20];
//	string last_name;
//	cout << "What is your first name?\n";
//	cin.getline(first_name, 20);
//	cout << "What is your last name?\n";
//	getline(cin, last_name);		//Ҫʹ��ͷ�ļ�<string>
//	char grade;
//	cout << "What letter grade do you deserve?\n";
//	cin >> grade;
//	grade++;
//	int age = 0;
//	cout << "What is your age\n";
//	cin >> age;
//	cout << "Name :" << last_name << " " << first_name << endl;
//	cout << "age :" << age << endl;
//	cout << "grade:" << grade << endl;
//	return 0;
//}
//-------------------------------
//�ڶ���
//int main()
//{
//	string name;
//	string dessert;
//	cout << "Enter your name\n";
//	getline(cin, name);
//	cout << "Enter your favorite dessert\n";
//	getline(cin, dessert);
//	cout << "I have some delicious " << dessert << " for you " << name;
//	return 0;
//}
//-------------------------------
//������
//int main()
//{
//	char first_name[20];
//	char last_name[20];
//	cout << "Enter your first name :\n";
//	cin.getline(first_name, 20);
//	cout << "Enter your last name: \n";
//	cin.getline(last_name, 20);
//	cout << "Your name is " << last_name << ", " << first_name << endl;
//	return 0;
//}
//-----------------------------
//�ڰ���
//struct Pizza
//{
//	char name[20];
//	float weight;
//	float d;
//};
//int main()
//{
//	Pizza* p = new Pizza;
//	cout << "����ֱ��\n";
//	cin >> p->d;
//	cout << "��������\n";
//	cin >> p->weight;
//	cout << "���빫˾����\n";
//	cin >> p->name;
//	cout << p->name << endl << p->d << "  " << p->weight << endl;
//  delete p;
//	return 0;
//}
//------------------------------
//�ھ���
//struct Pizza
//{
//	char name[20];
//	float d;
//	float weight;
//};
//int main()
//{
//	Pizza* p = new Pizza[3];
//	strcpy(p[0].name, "abd");
//	strcpy(p[1].name, "bcd");
//	strcpy(p[2].name, "qwe");
//	for (int i = 0; i < 3; i++)
//	{
//		p[i].d = 3.5 * (i + 1);
//		p[i].weight = 8.45 * (i + 1);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout << p[i].name << " " << p[i].d << " " << p[i].weight << endl;
//	}
//	delete[]p;
//	return 0;
//}
//--------------------------------
//��10��
#include<array>
int main()
{
	array<float, 3>arr;
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "������ɼ�\n";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "ƽ���ɼ�Ϊ:" << sum / 3 << endl;
	return 0;
}