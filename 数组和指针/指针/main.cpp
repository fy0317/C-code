#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
//int main()
//{
//	int x = 0;
//	cin >> x;
//	int* p = &x;
//	cout << *p << endl;
//	cout << "-------------------\n";
//	cin >> *p;
//	cout << x << endl;
//	return 0;
//}
//int main()
//{
//	int n = 1000;
//	int* p = new int;
//	*p = 1000;
//	cout << "n = " << n << " &n = " << &n << endl;
//	cout << "*p = " << *p << " p = " << p << endl;
//	double* p1 = new double;
//	*p1 = 3.14;
//	cout << "*p1 = " << *p1 << " p1 = " << p1 << endl;
//	cout << &p << "\t" << &p1 << endl;
//	delete p;
//	delete p1;
//	return 0;
//}
//int main()
//{
//	double* p = new double[3];
//	*p = 1.10;
//	*(p + 1) = 2.20;
//	*(p+2) = 3.30;
//	for (int i = 0; i < 3; i++)
//		cout << p[i] << endl;
//	delete [] p;
//	return 0;
//}
//int main()
//{
//	double arr[3] = { 10000.0, 20000.0, 30000.0 };
//	short arr1[3] = { 3, 2, 1 };
//	double* p = arr;
//	short* p1 = &arr1[0];
//	cout << "p = " << p << " *p = " << *p << endl;
//	p++;
//	cout << "p = " << p << " *p = " << *p << endl;
//	p++;
//	cout << "p = " << p << " *p = " << *p << endl;
//	cout << "p1 = " << p1 << " *p1 = " << *p1 << endl;
//	p1++;
//	cout << "p1 = " << p1 << " *p1 = " << *p1 << endl;
//	p1++;
//	cout << "p1 = " << p1 << " *p1 = " << *p1 << endl;
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	cout << &arr[9] - &arr[0] << endl;
//	return 0;
//}
//#include<cstring>
//int main()
//{
//	char animal[20] = "bead";
//	const char* bird = "wren";
//	char* ps;
//	cout << animal << "和" << bird << endl;
//	cout << "输入一种动物\n";
//	cin >> animal;
//	ps = animal;
//	cout << ps << "!\n";
//	cout << "使用strcpy()前: \n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << "at" << (int*)ps << endl;
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "copy之后\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;
//	return 0;
//}
//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
//int main()
//{
//	inflatable* ps = new inflatable;
//	cout << "输入名字\n";
//	cin.get(ps->name, 20);
//	cout << "输入volume\n";
//	cin >> ps->volume;
//	cin >> ps->price;
//	cout << "名字：" << ps->name << " volume :" << ps->volume << " 价格:" << ps->price << endl;
//	return 0;
//}
//char* getname();
//int main()
//{
//	char* name = getname();
//	cout << name << "at" << (int*)name << endl;
//	delete []name;
//
//	name = getname();
//	cout << name << "at" << (int*)name << endl;
//	delete[]name;
//	return 0;
//}
//char* getname()
//{
//	char tmp[80];
//	cout << "输入name\n";
//	cin >> tmp;
//	char* pn = new char[strlen(tmp) + 1];
//	strcpy(pn, tmp);
//	return pn;
//}
//struct person
//{
//	int age;
//	string name;
//};
//int main()
//{
//	person person1, person2, person3;
//	person1.age = 20;
//	person1.name = "张三";
//	person* p2 = &person2;
//	p2->age = 21;
//	p2->name = "李四";
//	person arr[3];
//	arr[0].age = 30;
//	arr[0].name = "小王";
//	cout << arr->age << endl << arr->name << endl;
//	const person* parr[3] = { &person1, &person2, &person3 };
//	cout << parr[0]->age << endl << parr[0]->name << endl;
//	const person** pparr = parr;
//	auto ppb = parr;
//	cout << (*pparr)->age << (*pparr)->name << endl;
//	cout << (*(ppb + 1))->age << (*(ppb + 1))->name << endl;
//	return 0;
//}

//-----------------------
//用vector和array创建数组
#include<array>
#include<vector>
int main()
{
	double arr1[4] = { 1.2,2.4,3.6,4.8 };
	vector<double>arr2(4);		//用vector创建数组
	arr2[0] = 1.0 / 3;
	arr2[1] = 1.0 / 5;
	arr2[2] = 1.0 / 7;
	arr2[3] = 1.0 / 9;
	array<double, 4>arr3 = { 3.14,2.4, 5.9,12.1 };		//用array创建数组
	array<double, 4>arr4;
	arr4 = arr3;
	//输出
	cout << "arr2[2] = " << arr2[2] << " at " << &arr2[2] << endl;
	arr2.at(2) = 3;
	cout << "arr1[2] = " << arr1[2] << " at " << &arr1[2] << endl;
	cout << "arr2[2] = " << arr2[2] << " at " << &arr2[2] << endl;		//为什么arr2[2]的地址变了？
	cout << "arr3[2] = " << arr3[2] << " at " << &arr3[2] << endl;
	cout << "arr4[2] = " << arr4[2] << " at " << &arr4[2] << endl;

	return 0;
}