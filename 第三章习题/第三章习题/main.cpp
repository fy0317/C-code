#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//char ch = 88;
	//cout << ch << endl;
	//cout << (char)88 << endl;
	//----------------------------------------- 
	//第一题
	//const int change = 12;
	//int h = 0;
	//cout << "用英寸输入你的身高\n";
	//cin >> h;
	//cout << "你的身高转换为英尺为:" << h / change << "英尺" << h % change << "英寸\n";
	//-----------------------------------------
	//第二题
	//const float kilo_to_pound = 2.2;		//千克转换成磅
	//const int foot_to_inch = 12;			//英尺抓英寸
	//const float inch_to_meter = 0.0254;		//英寸转米
	//cout << "请输入英尺" << endl;
	//int foot = 0;		//英尺
	//cin >> foot;
	//int inch = 0;		//英寸
	//cout << "请输入英寸" << endl;
	//cin >> inch;
	//cout << "请输入磅数" << endl;
	//float pound = 0, BMI = 0,weight = 0, high = 0;		//体重.磅、BMI指数、体重.千克、身高.米
	//cin >> pound;
	//high = (foot * foot_to_inch + inch) * inch_to_meter;
	//cout << "你的身高是" << foot * foot_to_inch + inch << "英寸" << high << "米" << endl;
	//weight = pound / kilo_to_pound;
	//cout << "你的体重是" << pound << "磅" << weight << "千克" << endl;
	//BMI = weight / high / high;
	//cout << "你的BIM指数是" << BMI << endl;
	//-----------------------------------------
	//第三题
	//cout << "请用度、分、秒输入纬度" << endl;
	//int degree, minute, second;
	//float latitude = 0;
	//const int degree_to_minute = 60;
	//const int minute_to_second = 60;
	//cout << "请分别输入度、分、秒" << endl;
	//cin >> degree >> minute >> second;
	//latitude = degree + (float)(minute + (float)second / minute_to_second) / degree_to_minute;
	//cout << degree << "度，" << minute << "分，" << second << "秒 = " << latitude << "度" << endl;
	//-----------------------------------------
	//第四题
	//long long sec = 0;
	//int day = 0, hour = 0, minute = 0;
	//const int day_to_hour = 24, hour_to_minute = 60, minute_to_second = 60;
	//cout << "请输入秒数" << endl;
	//cin >> sec;
	//long long second = sec;
	//minute = second / minute_to_second;
	//second = second % minute_to_second;
	//hour = minute / hour_to_minute;
	//minute = minute % hour_to_minute;
	//day = hour / day_to_hour;
	//hour = hour % day_to_hour;
	//cout << sec << "秒 = " << day << "天 " << hour << "小时 " << minute << "分钟 " << second << "秒 " << endl;
	//-----------------------------------------
	//第五题
	//cout << "请输入世杰人口数" << endl;
	//long long global_amount = 0;
	//cin >> global_amount;
	//cout << "请输入中国人口数" << endl;
	//long long China_amount = 0;
	//cin >> China_amount;
	//cout << "中国人口数占世杰人口数的" << (double)China_amount / global_amount * 100 << "%\n";
	//-----------------------------------------
	//第六题
	cout << "请输入驱车里程（英里）" << endl;
	float distance_in_mile = 0, fuel_in_gallon;
	cin >> distance_in_mile;
	cout << "请输入汽油量（加仑）" << endl;
	cin >> fuel_in_gallon;
	cout << "一加仑可行驶" <<   distance_in_mile / fuel_in_gallon << "英里" << endl;

	return 0;
}