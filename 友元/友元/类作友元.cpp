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
//	friend class GoodGay;		//加上friend，GoodGay就是友元类
//
//public:
//	Building();		//构造函数
//public:
//	string m_SitingRom;
//private:
//	string m_BedRom;
//};
//
////类外实现构造函数
//Building::Building()
//{
//	m_SitingRom = "客厅";
//	m_BedRom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	buildlig = new Building;
//}
////类外实现函数定义
//void GoodGay::visit()
//{
//	cout << "正在访问" << buildlig->m_SitingRom << endl;
//	cout << "正在访问" << buildlig->m_BedRom << endl;
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