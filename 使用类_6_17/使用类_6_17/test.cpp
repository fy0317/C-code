#include"time.h"


void test1()
{
	Time t1(2, 30);
	Time t2 = { 3, 50 };
	//t1.Show();
	//t2.Show();
	t2 = t2 - t1;
	//t2.Show();
	//t2 = t2 *1.1;		//t2 = 1.1 * t2 错误
	t2 = 1.1 * t2;		//使用友元重载 double * Time
	cout << t2 << endl;
}

void test2()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time tmp;
	cout << aida << ";" << tosca << endl;
	tmp = aida + tosca;
	cout << "Aida + Tosca = " << tmp << endl;
	tmp = aida * 1.17;
	cout << "Aida * 1.17 = " << tmp << endl;
	cout << "10.0 * Tosca = " << (10.0 * tosca) << endl;
}

int main()
{
	test2();
	//test1();
	return 0;
}