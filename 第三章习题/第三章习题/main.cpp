#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	//char ch = 88;
	//cout << ch << endl;
	//cout << (char)88 << endl;
	//----------------------------------------- 
	//��һ��
	//const int change = 12;
	//int h = 0;
	//cout << "��Ӣ������������\n";
	//cin >> h;
	//cout << "������ת��ΪӢ��Ϊ:" << h / change << "Ӣ��" << h % change << "Ӣ��\n";
	//-----------------------------------------
	//�ڶ���
	//const float kilo_to_pound = 2.2;		//ǧ��ת���ɰ�
	//const int foot_to_inch = 12;			//Ӣ��ץӢ��
	//const float inch_to_meter = 0.0254;		//Ӣ��ת��
	//cout << "������Ӣ��" << endl;
	//int foot = 0;		//Ӣ��
	//cin >> foot;
	//int inch = 0;		//Ӣ��
	//cout << "������Ӣ��" << endl;
	//cin >> inch;
	//cout << "���������" << endl;
	//float pound = 0, BMI = 0,weight = 0, high = 0;		//����.����BMIָ��������.ǧ�ˡ����.��
	//cin >> pound;
	//high = (foot * foot_to_inch + inch) * inch_to_meter;
	//cout << "��������" << foot * foot_to_inch + inch << "Ӣ��" << high << "��" << endl;
	//weight = pound / kilo_to_pound;
	//cout << "���������" << pound << "��" << weight << "ǧ��" << endl;
	//BMI = weight / high / high;
	//cout << "���BIMָ����" << BMI << endl;
	//-----------------------------------------
	//������
	//cout << "���öȡ��֡�������γ��" << endl;
	//int degree, minute, second;
	//float latitude = 0;
	//const int degree_to_minute = 60;
	//const int minute_to_second = 60;
	//cout << "��ֱ�����ȡ��֡���" << endl;
	//cin >> degree >> minute >> second;
	//latitude = degree + (float)(minute + (float)second / minute_to_second) / degree_to_minute;
	//cout << degree << "�ȣ�" << minute << "�֣�" << second << "�� = " << latitude << "��" << endl;
	//-----------------------------------------
	//������
	//long long sec = 0;
	//int day = 0, hour = 0, minute = 0;
	//const int day_to_hour = 24, hour_to_minute = 60, minute_to_second = 60;
	//cout << "����������" << endl;
	//cin >> sec;
	//long long second = sec;
	//minute = second / minute_to_second;
	//second = second % minute_to_second;
	//hour = minute / hour_to_minute;
	//minute = minute % hour_to_minute;
	//day = hour / day_to_hour;
	//hour = hour % day_to_hour;
	//cout << sec << "�� = " << day << "�� " << hour << "Сʱ " << minute << "���� " << second << "�� " << endl;
	//-----------------------------------------
	//������
	//cout << "�����������˿���" << endl;
	//long long global_amount = 0;
	//cin >> global_amount;
	//cout << "�������й��˿���" << endl;
	//long long China_amount = 0;
	//cin >> China_amount;
	//cout << "�й��˿���ռ�����˿�����" << (double)China_amount / global_amount * 100 << "%\n";
	//-----------------------------------------
	//������
	cout << "������������̣�Ӣ�" << endl;
	float distance_in_mile = 0, fuel_in_gallon;
	cin >> distance_in_mile;
	cout << "�����������������أ�" << endl;
	cin >> fuel_in_gallon;
	cout << "һ���ؿ���ʻ" <<   distance_in_mile / fuel_in_gallon << "Ӣ��" << endl;

	return 0;
}