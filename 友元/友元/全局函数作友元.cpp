//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Rom
//{
//	friend void Friend(Rom& rom);		//加了关键字friend后，在外部可以访问私有成员
//
//public:
//	Rom()
//	{
//		m_SittingRom = "客厅";
//		m_BedRom = "卧室"; 
//	}
//	string m_SittingRom;	//客厅
//private:
//	string m_BedRom;		//卧室
//
//};
////全局函数作友元
//void Friend(Rom& rom)
//{
//	cout << rom.m_SittingRom << endl;
//	cout << rom.m_BedRom << endl;
//}
////全局函数做友元
//void test1()
//{
//	Rom rom;
//	Friend(rom);
//}
//int main()
//{
//	test1();
//	return 0;
//}
