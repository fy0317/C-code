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
//		cout << "头部\n";
//	}
//
//	void footer()
//	{
//		cout << "尾部\n";
//	}
//
//	void left()
//	{
//		cout << "左部\n";
//	}
//};
//
//
////继承语法：
////calss 子类 : 继承方式 父类
////继承方式：（三种方式都无法访问父类中私有权限内容）
////								公共继承 (public)    
////						继承父类中public和protected中的元素，并且不改变其权限
//// 
////								保护继承 (protected)
////						继承父类中public和protected中的元素，将权限都改为protected
//// 
////								私有继承 (private)
////						继承父类中public和protected中的元素，将权限都改为private
//
//
//class Java :public BasePage		//继承
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
//	//父类中所有的非静态成员属性都会被继承下去
//	//父类中私有成员属性    是被编译器隐藏了，因此访问不到，但确实被继承下去了
//
//	//利用VS开发人员命令工具查看继承信息：
//	//
//	// 	   首先进入当前代码所在的目录
//	// 	   dir 查看文件名
//	//使用命令： cl /d1(这里是数字1) reoprtSingleClassLayout+类名 类名所在的文件（使用命令时没有+号）
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
