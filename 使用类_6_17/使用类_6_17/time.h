#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Time
{
private:
	int m_hours;
	int m_minutes;
public:
	Time();
	Time(int hour, int minute = 0);
	void AddMin(int minute);
	void AddHr(int hour);
	void Reset(int hour = 0, int minute = 0);
	Time Sum(const Time& t)const;
	Time operator+(const Time& t)const;
	Time operator-(const Time& t)const;
	Time operator*(double mul)const;
	void Show()const;
	friend Time operator*(double mul, Time& t)		//ÓÑÔª
	{
		return t * mul;
	}
	friend ostream& operator<<(ostream& os, const Time& t);//ÖØÔØ<<

};


