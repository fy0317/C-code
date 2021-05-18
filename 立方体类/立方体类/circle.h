#pragma once
using namespace std;
#include"point.h"
class Circle
{
private:
	int m_R;
	Point m_Point;
public:
	void setR(int r);
	int getR();
	void setPoint(Point point);
	Point getPoint();
};