#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include"circle.h"
using namespace std;

//class Point
//{
//private:
//	int m_X;
//	int m_Y;
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//	
//};
//class Circle
//{
//private:
//	int m_R;
//	Point m_Point;
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setPoint(Point point)
//	{
//		m_Point = point;
//	}
//	Point getPoint()
//	{
//		return m_Point;
//	}
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	int l = pow(c.getPoint().getX() - p.getX(), 2) + pow(c.getPoint().getY() - p.getY(), 2);
	int r = c.getR();
	if (l == r * r)
		cout << "����Բ��\n";
	else if (l > r * r)
		cout << "����Բ��\n";
	else cout << "����Բ��\n";
}
int main()
{
	//����Բ
	Circle c1;
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setR(10);
	c1.setPoint(center);

	//������
	Point p;
	p.setX(10);
	p.setY(9);

	//�жϹ�ϵ
	isInCircle(c1, p);
	return 0;
}