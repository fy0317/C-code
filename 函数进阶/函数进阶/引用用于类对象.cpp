#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

string verson1(string& str1, const string& str2);
const string& verson2(string& str1, const string& str2);
void test8_7()
{
	string input;
	string copy;
	string result;
	cout << "请输入一个字符传\n";
	getline(cin, input);
	copy = input;
	result = verson1(input, "***");
	cout << "输出的结果1：" << result << endl;
	result = verson2(input, "###");
	cout << "输出的结果2：" << result << endl;

}
int main()
{
	test8_7();
	system("pause");
	return 0;
}
string verson1(string& str1, const string& str2)
{
	return str2 + str1 + str2;
}
const string& verson2(string& str1, const string& str2)
{
	str1 = str2 + str1 + str2;
	return str1;
}
