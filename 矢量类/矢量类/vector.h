#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode
		{
			RECT,		//直角坐标表示
			POL			//极坐标表示
		};
	private:
		double x;		//横坐标
		double y;		//纵坐标
		double mag;		//长度
		double ang;		//角度
		Mode mode;

		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double m2, Mode form = RECT);
		~Vector();		//析构函数
		double xval()const
		{
			return x;
		}
		double yval()const
		{
			return y;
		}
		double magval()const
		{
			return mag;
		}
		double angval()const
		{
			return ang;
		}
		void polar_mode();
		void rect_mode();

		//重载运算符
		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;

		//友元
		friend Vector operator*(double n, const Vector& a);
		friend ostream& operator<< (ostream& os, const Vector& v);

	};
}
