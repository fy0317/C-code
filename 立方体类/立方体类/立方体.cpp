#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//立方体类设计
class Cube
{
private:
	int m_l;		//长
	int m_w;		//宽
	int m_h;		//高
public:
	//设置长
	void setL(int L)
	{
		m_l = L;
	}
	//获取长
	int getL()
	{
		return m_l;
	}

	//设置宽
	void setW(int W)
	{
		m_w = W;
	}
	//获取宽
	int getw()
	{
		return m_w;
	}
	//设置高
	void setH(int H)
	{
		m_h = H;
	}
	//获取高
	int getH()
	{
		return m_h;
	}

	//获取体积
	int getV()
	{
		return m_l * m_w * m_h;
	}
	//获取面积
	int getS()
	{
		return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube& c1)
	{
		if (c1.getL() == m_l && c1.getH() == m_h && c1.getw() == m_w)
			return true;
		return false;
	}
};


//利用全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getw() == c2.getw())
		return true;
	return false;
}

//int main()
//{
//	Cube c1;
//	c1.setL(1);
//	c1.setW(2);
//	c1.setH(3);
//	Cube c2;
//	c2.setL(1);
//	c2.setW(2);
//	c2.setH(3);
//	bool ret = isSame(c1, c2);
//	if (ret == true)
//		cout << "相等\n";
//	else cout << "不相等\n";
//	ret = c1.isSameByClass(c2);
//	if (ret == true)
//		cout << "相等\n";
//	else cout << "不相等\n";
//	//cout << "C1的面积为：" << c1.getS() << " C1的体积为：" << c1.getV() << endl;
//	return 0;
//}
