#include"vector.h"
#include<cmath>
//using namespace VECTOR;
namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);	//弧度转角度
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang()
	{
		ang = 0;
	}
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)		//
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "模式错误，所有数据被置为0\n";
			x = y = ang = mag = 0;
			mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)		//
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "模式错误，所有数据被置为0\n";
			x = y = ang = mag = 0;
			mode = RECT;
		}
		
	}
	Vector::~Vector()		//析构函数
	{
		;
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}
	void Vector::rect_mode()
	{
		mode = RECT;
	}

			//重载运算符
	Vector Vector::operator+(const Vector& b)const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector& b)const
	{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n)const
	{
		return Vector(x * n, y * n);
	}

	//友元
	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}

	ostream& operator<< (ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
		{
			cout << "(x,y) = (" << v.x << ',' << v.y << ")";
		}
		else if (v.mode == Vector::POL)
		{
			cout << "(m,a) = (" << v.mag << ',' << v.ang << ')' ;
		}
		else cout << "错误";
		return os;
	}


}