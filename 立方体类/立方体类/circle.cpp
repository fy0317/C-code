#define _CRT_SECURE_NO_WARNINGS
#include"circle.h"

void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}
void Circle::setPoint(Point point)
{
	m_Point = point;
}
Point Circle::getPoint()
{
	return m_Point;
}
