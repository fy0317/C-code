#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	int year;
//	cout << "你的房子建于哪年？\n";
//	cin >> year;
//	cout << "在哪个街道？" << endl;
//	char address[80];
//	char c = cin.get();
//	cin.getline(address, 80);
//	cout << "建于" << year << "年" << endl;
//	cout << "在" << address << "街道" << endl;
//	return 0;
//}
//int main()
//{
//	string str1;
//	string str2 = "abc";
//	cout << "请输入字符串" << endl;
//	cin >> str1;
//	str2 = str1;
//	string str3 = str1 + str2;
//	cout << "str1 = " << str1 << endl;
//	cout << "str1[2] = " << str1[2] << endl;
//	cout << "str2 = " << str2 << endl;
//	cout << "str3 = " << str3 << endl;
//
//	return 0;
//}
#include<cstring>
//int main()
//{
//	char arr1[20];
//	char arr2[20] = "abcd";
//	char arr4[20] = "efghi";
//	char arr3[40];
//	string str = "1234567890";
//	strcpy(arr1, arr2);
//	strcpy(arr3, arr1);
//	strcat(arr3, arr4);
//	cout << "arr1 = " << arr1 << " arr2 = " << arr2 << " arr3 = " << arr3 << " arr4 = " << arr4 << endl;
//	int len = str.size();
//	cout << len << endl;
//	
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	string str;
//	cout << "arr长度 = " << strlen(arr) << " str长度 = " << str.size() << endl;
//	cout << "输入arr" << endl;
//	cin.getline(arr, 20);
//	cout << "输入str\n";
//	getline(cin, str);
//	cout << "arr长度 = " << strlen(arr) << " str长度 = " << str.size() << endl;
//	return 0;
//}
struct person
{
	char name[20];
	// string name;
	float volume;
	double price;
};
//int main()
//{
//	person p1 = { "张三" , 1.88, 32.99 };
//	person p2 = { "李四",1.90, 35.21 };
//	person p3;
//	p3 = p1;
//	cout << p1.name << endl << p1.volume << endl;
//	cout << p2.name << endl << p2.volume << endl;
//	cout << p3.name << endl << p3.volume << endl;
//	return 0;
//}
enum color
{
	red,
	blue,
	green,
	yellow,
	black
};
int main()
{
	//person arr[3];
	//arr[0] = { "张三",2,3 };
	//cout << arr[0].name << endl;
	color a = yellow;
	a = blue;
	a = (color)399;
	cout << a << endl;
	return 0;
}