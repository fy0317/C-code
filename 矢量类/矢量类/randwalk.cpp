#include"vector.h"
#include<cstdlib>
#include<ctime>
using VECTOR::Vector;
//using namespace VECTOR;
void test1()
{
	srand(time(NULL));
	double direction;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "After" << steps << " steps, the subject has the follwoing location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0, 0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
	{
		continue;
	}
}

void test2()
{
	srand(time(NULL));
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		num = rand();
		cout << num << endl;
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}