//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "ͷ��\n";
//	}
//
//	void footer()
//	{
//		cout << "β��\n";
//	}
//
//	void left()
//	{
//		cout << "��\n";
//	}
//};
//
//
////�̳��﷨��
////calss ���� : �̳з�ʽ ����
////�̳з�ʽ�������ַ�ʽ���޷����ʸ�����˽��Ȩ�����ݣ�
////								�����̳� (public)    
////						�̳и�����public��protected�е�Ԫ�أ����Ҳ��ı���Ȩ��
//// 
////								�����̳� (protected)
////						�̳и�����public��protected�е�Ԫ�أ���Ȩ�޶���Ϊprotected
//// 
////								˽�м̳� (private)
////						�̳и�����public��protected�е�Ԫ�أ���Ȩ�޶���Ϊprivate
//
//
//class Java :public BasePage		//�̳�
//{
//public:
//	void content()
//	{
//		cout << "Java\n";
//	}
//};
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python\n";
//	}
//};
//
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP\n";
//	}
//};
//
//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son : public Base
//{
//public:
//	int m_d;
//};
//
//void test2()
//{
//	Son s1;
//
//	//���������еķǾ�̬��Ա���Զ��ᱻ�̳���ȥ
//	//������˽�г�Ա����    �Ǳ������������ˣ���˷��ʲ�������ȷʵ���̳���ȥ��
//
//	//����VS������Ա����߲鿴�̳���Ϣ��
//	//
//	// 	   ���Ƚ��뵱ǰ�������ڵ�Ŀ¼
//	// 	   dir �鿴�ļ���
//	//ʹ����� cl /d1(����������1) reoprtSingleClassLayout+���� �������ڵ��ļ���ʹ������ʱû��+�ţ�
//	//
//	cout << "size of Son = " << sizeof(s1) << endl;
//}
//void test1()
//{
//	Java j;
//}
//int main()
//{
//
//	test2();
//	return 0;
//}
//
