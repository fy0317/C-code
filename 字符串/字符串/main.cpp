#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//int main()
//{
//	char str[] = "12345";	//��\0��β
//	cout << sizeof(str) << endl;
//	cout << str << endl;
//	return 0;
//}
//int main()
//{
//	const int size = 15;
//	char name1[size];
//	char name2[size] = "C++owboy";
//	cout << "Howdy! I'm " << name2;
//	cout << "! What's your name?\n";
//	cin >> name1;
//	cout << "Well " << name1 << ", my name has ";
//	cout << strlen(name1) << "�ַ�," << sizeof(name1) << "�ֽ�" << endl;
//	return 0;
//}
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "�����������\n";
//	cin >> name;
//	cout << "��������ϲ�������\n";
//	cin >> dessert;
//	cout << name << "ϲ���������:" << dessert << endl;		//��cin����ʱ�����ո񡢻��з����Ʊ�������ַ�����β��
//	//����������Alistair Dreedʱ��Dreed�ᱻ���뻺����������һ��cinʱ������dessert��
//	return 0;
//}

//------------------------------
//ʹ��cin.getline��cin.get��ȡһ���ַ�
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "��һ��\n";
//	cout << "�����������\n";
//	cin.getline(name, 20);
//	cout << "��������ϲ�������\n";
//	cin.getline(dessert, 20);
//	cout << name << "ϲ���������:" << dessert << endl;
//	return 0;
//}
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "�����������\n";
//	cin.get(name, 20).get();
//	cout << "��������ϲ�������\n";
//	cin.get(dessert, 20).get();
//	cout << name << "ϲ���������:" << dessert << endl;
//	return 0;
//}
int main()
{
	const int size = 20;
	char name[size];
	char dessert[size];
	char name1[size];
	char dessert1[size];
	cout << "�����������\n";
	cin.getline(name, 20);
	cout << "��������ϲ�������\n";
	cin.getline(dessert, 20);
	cout << name << "ϲ���������:" << dessert << endl;
	cout << "�����������\n";
	cin.get(name1, 20).get();
	cout << "��������ϲ�������\n";
	cin.get(dessert1, 20).get();
	cout << name1 << "ϲ���������:" << dessert1 << endl;
	return 0;
}