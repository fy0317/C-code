//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base��func�ĵ���\n";
//	}
//	void func1(int a)
//	{
//		cout << "Base��func1�ĵ���\n";
//	}
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son��func�ĵ���\n";
//	}
//
//	void func1()
//	{
//		cout << "Son��func1�ĵ���\n";
//	}
//	int m_A;
//};
//
//void test1()
//{
//	Son s1;
//	cout << "Son�е�m_A��" << s1.m_A << endl;
//	//ͨ�����������ʸ�����ͬ����Ա����ʱ��Ҫ��������
//	cout << "Base�е�m_A��" << s1.Base::m_A << endl;
//
//	//���û��ͬ���ģ�����ø����еĳ�Ա�����������ͬ��������ֱ�ӵ�������������еĺ���
//	s1.func();
//	s1.Base::func();
//
//	//��������г����˸�����ͬ���ĺ����������еĺ��������ظ����е�ͬ����Ա����
//	//�������͸���ĺ���������ͬ���޷�ͨ��������ͬ�����ʸ����еĺ�����ֻ�ܼ�������������
//
//	s1.func1();
//	//s1.func1(100);		//���󣬸����е�void func1(int a ) ��������
//	s1.Base::func1(100);		//��ȷ
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//
