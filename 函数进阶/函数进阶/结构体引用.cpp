#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

void test8_6()
{
	free_throws one = { "abc", 13, 14 };
	free_throws two = { "abcd", 10, 16 };
	free_throws three = { "abcde", 7, 9 };
	free_throws four = { "abcdef", 5, 9 };
	free_throws five = { "qwe", 6, 14 };
	free_throws team = { "all", 0, 0 };
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	dup = accumulate(team, five);
	cout << "team:" << endl;
	display(team);
	cout << "dup:\n";
	display(dup);
	set_pc(four);

	accumulate(dup, five) = four;
	cout << "dup:\n";
	display(dup);
}
int main8_6()
{
	test8_6();
	system("pause");
	return 0;
}

void display(const free_throws& ft)
{
	cout << "Name:" << ft.name << endl;
	cout << "Made:" << ft.made << endl;
	cout << "Attempts:" << ft.attempts << endl;
	cout << "Percent:" << ft.percent << endl;
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0 * float(ft.made) / float(ft.attempts);
	else ft.percent = 0;
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

