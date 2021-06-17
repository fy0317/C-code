#include"time.h"

Time::Time()
{
	m_hours = 0;
	m_minutes = 0;
}

Time::Time(int hour, int minute)
{
	m_hours = hour + minute / 60;
	m_minutes = minute % 60;
}

void Time::AddMin(int minute)
{
	m_minutes += minute;
	m_hours += m_minutes / 60;
	m_minutes %= 60;
}

void Time::AddHr(int hour)
{
	m_hours += hour;
}

void Time::Reset(int hour, int minute)
{
	m_hours = hour;
	m_minutes = minute;
}

Time Time::Sum(const Time& t)const
{
	Time sum;
	sum.m_minutes = (m_minutes + t.m_minutes) % 60;
	sum.m_hours = m_hours +(m_minutes + t.m_minutes) / 60 + t.m_hours;
	return sum;
}

Time Time::operator+(const Time& t)const
{
	Time time;
	time.m_minutes = (t.m_minutes + m_minutes) % 60;
	time.m_hours = (t.m_minutes + m_minutes) / 60 + m_hours + t.m_hours;
	return time;
}

//重载-号
Time Time::operator-(const Time& t)const
{
	Time time;
	int total1 = m_hours * 60 + m_minutes;
	int total2 = t.m_hours * 60 + t.m_minutes;
	time.m_minutes = (total1 - total2) % 60;
	time.m_hours = (total1 - total2) / 60;
	return time;
}


Time Time::operator*(double mul)const
{
	Time time;
	int total = m_hours * 60 + m_minutes;
	total *= mul;
	time.m_minutes = total % 60;
	time.m_hours = total / 60;
	return time;
}


//Time operator*(double mul, Time& t)
//{
//	Time time;
//	int total = (t.m_hours * 60 + t.m_minutes) * mul;
//	time.m_hours = total / 60;
//	time.m_minutes = total % 60;
//	return time;
//}

//重载<<	
ostream& operator<<(ostream& os, const Time& t)
{
	cout << t.m_hours << "小时 " << t.m_minutes << "分钟";
	return os;
}

void Time::Show()const
{
	cout << m_hours << "小时 " << m_minutes << "分钟" << endl;
}
