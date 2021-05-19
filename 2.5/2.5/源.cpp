#include<stdio.h>
#include<math.h>
int main()
{
	int a=3, b,i=1;
	//printf("请输入一个大于2的正整数\n");
	//scanf_s("%d", &a);
	//b = sqrt(a);
	//printf("%d", b);
	while (a <= 100)
	{
		b = sqrt(a);
		i = 1;
		while (i <= b)
		{
			i++;
			if (a % i == 0)
			{
				printf("%d不是素数\n", a);
				break;
			}
			if (i >= b && a % i != 0)
			{
				printf("%d是素数\n", a);
				break;
			}
		}
		a++;
	}
}