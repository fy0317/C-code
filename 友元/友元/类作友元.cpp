//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//
//	Building* buildlig;
//};
//class Building
//{
//	friend class GoodGay;		//����friend��GoodGay������Ԫ��
//
//public:
//	Building();		//���캯��
//public:
//	string m_SitingRom;
//private:
//	string m_BedRom;
//};
//
////����ʵ�ֹ��캯��
//Building::Building()
//{
//	m_SitingRom = "����";
//	m_BedRom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	buildlig = new Building;
//}
////����ʵ�ֺ�������
//void GoodGay::visit()
//{
//	cout << "���ڷ���" << buildlig->m_SitingRom << endl;
//	cout << "���ڷ���" << buildlig->m_BedRom << endl;
//
//}
//
//
//void test1()
//{
//	GoodGay g;
//	g.visit();
//}
//int main()
//{
//	test1();
//	return 0;
//}