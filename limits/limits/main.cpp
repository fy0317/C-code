#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<climits>
#define ZERO 0
using namespace std;
//int main()
//{
//	int n_int = INT_MAX;
//	short n_short = SHRT_MAX;
//	long n_long = LONG_MAX;
//	long long n_llong = LLONG_MAX;
//	cout << "int is " << sizeof(int) << " bytes." << endl;
//	cout << "short is " << sizeof n_short << " bytes." << endl;
//	cout << "long is " << sizeof n_long << " bytes." << endl;
//	cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;
//	cout << "Maximum valuse :" << endl;
//	cout << "int :" << n_int << endl;
//	cout << "short :" << n_short << endl;
//	cout << "long :" << n_long << endl;
//	cout << "long long:" << n_llong << endl << endl;
//	cout << "Minimum int value = " << INT_MIN << endl;
//	cout << "Bits per byte = " << CHAR_BIT << endl;
//	return 0;
//}
//int main()
//{
//	short sam = SHRT_MAX;
//	unsigned short sue = sam;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars." << endl;
//	cout << "每个人加1" << endl;
//	sam++;
//	sue++;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars." << endl;
//	sam = ZERO;
//	sue = ZERO;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars." << endl;
//	cout << "每人拿走1美元" << endl;
//	sam--;
//	sue--;
//	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars." << endl;
//
//	return 0;
//}
//int main()
//{
//	int chest = 42;		//十进制
//	int waist = 0x42;		//16进制
//	int inseam = 042;		//8进制
//	int a = 42;
//	//cout << "chest = " << chest << endl;
//	//cout << "waist = " << waist << endl;
//	//cout << "inseam = " << inseam << endl;
//	cout << "a = " << a << endl;
//	cout << hex;
//	cout << "a = " << a << endl;
//	cout << oct;
//	cout << "a = " << a << endl;
//	return 0;
//}
//int main()
//{
//	char c = 65;
//	//cout << "请输入一个字符" << endl;
//	//cin >> c;
//	cout << c << endl;
//	return 0;
//}
//int main()
//{
//	char ch = 'M';
//	int i = ch;
//	cout << ch << "的ASCII码是 " << i << endl;
//	ch++;
//	i = ch;
//	cout << "加1后 " << ch << "的ASCII码是 " << i << endl;
//	cout.put(ch);
//	cout.put('!');
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	int i = 0;
//	cout << "请输入" << endl;
//	cin >> ch;
//	i = ch;
//	cout << "ch = " << ch << "\ni = " << i << endl;
//	cout << "请输入" << endl;
//	cin >> i;
//	ch = i;
//	cout << "ch = " << ch << "\ni = " << i << endl;
//
//	return 0;
//}
int main()
{
	//cout << "222\ta" << endl;
	//cout << "22\ta" << endl;
	//cout << "2222222\ta" << endl;
	//cout << "222222222\ta" << endl;
	//const int size = 5;
	//int arr[size] = { 1,2,3,4,5 };
	//for (int i = 0; i < size; i++)
	//	cout << arr[i] << endl;
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//float tub = 10.0 / 3;
	//double mint = 10.0 / 3;
	//const float million = 1.0e6;
	//cout << "tub = "<<tub << endl;
	//cout << tub * million << endl;
	//cout << 10 * million * tub << endl;
	//cout << "mint = " << mint << endl;
	//cout << million * mint << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	//float a = 2.34e22f;
	//float b = a + 1.0;
	//cout << "a= " << a << endl;
	//cout << "b - a = " << b - a << endl;
	//float a = 50.25;
	//float b = 11.17;
	//cout << "a + b =" << a + b << endl;
	//cout << "a + b =" << (double)a + b << endl;
	//cout << 9.0 / 5.0 << endl;
	//cout << 9.0 / 5 << endl;
	//cout << 1e7 / 9.0 << endl;
	//cout << 1e7f / 9.0f << endl;
	//float tree = 3;
	//int guess(3.9832);
	//int debt = 7.2e12;
	//cout << "tree = " << tree << endl;
	//cout << "guess = " << guess << endl;
	//cout << "debt = " << debt << endl;
	int a, b, c;
	a = 19.99 + 11.99;
	b = (int)19.99 + (int)11.99;
	c = int(19.99) + int(11.99);
	cout << a << endl << b << endl << c << endl;
	char ch = 'a';
	cout << ch << "=" << (int)ch << endl;
	cout << ch << "=" << static_cast<int>(ch) << endl;
	return 0;
}