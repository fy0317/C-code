#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//int main()
//{
//	char str[] = "12345";	//以\0结尾
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
//	cout << strlen(name1) << "字符," << sizeof(name1) << "字节" << endl;
//	return 0;
//}
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "输入你的名字\n";
//	cin >> name;
//	cout << "输入你最喜欢的甜点\n";
//	cin >> dessert;
//	cout << name << "喜欢的甜点是:" << dessert << endl;		//用cin输入时，将空格、换行符、制表符当作字符串结尾，
//	//当输入名字Alistair Dreed时，Dreed会被存入缓冲区，待下一个cin时，存入dessert中
//	return 0;
//}

//------------------------------
//使用cin.getline和cin.get获取一行字符
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "第一个\n";
//	cout << "输入你的名字\n";
//	cin.getline(name, 20);
//	cout << "输入你最喜欢的甜点\n";
//	cin.getline(dessert, 20);
//	cout << name << "喜欢的甜点是:" << dessert << endl;
//	return 0;
//}
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char dessert[size];
//	cout << "输入你的名字\n";
//	cin.get(name, 20).get();
//	cout << "输入你最喜欢的甜点\n";
//	cin.get(dessert, 20).get();
//	cout << name << "喜欢的甜点是:" << dessert << endl;
//	return 0;
//}
int main()
{
	const int size = 20;
	char name[size];
	char dessert[size];
	char name1[size];
	char dessert1[size];
	cout << "输入你的名字\n";
	cin.getline(name, 20);
	cout << "输入你最喜欢的甜点\n";
	cin.getline(dessert, 20);
	cout << name << "喜欢的甜点是:" << dessert << endl;
	cout << "输入你的名字\n";
	cin.get(name1, 20).get();
	cout << "输入你最喜欢的甜点\n";
	cin.get(dessert1, 20).get();
	cout << name1 << "喜欢的甜点是:" << dessert1 << endl;
	return 0;
}