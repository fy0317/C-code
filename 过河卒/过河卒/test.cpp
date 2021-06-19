#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int main()
{
	int bx = 0, by = 0;		//终点坐标
	int cx = 0, cy = 0;		//马的坐标
	long long board[25][25] = { 0 };
	int control[8][2] = 
	{
		{-2, -1},
		{-1, -2},
		{-2, 1},
		{-1, 2},
		{1, -2},
		{2, -1},
		{1, 2},
		{2, 1}
	};
	cin >> bx >> by >> cx >> cy;
	int i = 0;
	board[cx][cy] = -1;
	while (i < 8)		//设置马控制的区域
	{
		if ( (cx + control[i][0] >= 0 && cy + control[i][1] >= 0) && (cx + control[i][0] <= 20 && cy + control[i][1] <= 20))
			board[cx + control[i][0]][cy + control[i][1]] = -1;
		i++;
	}
	for (i = 0; i <= bx; i++)		//初始化第一列
	{
		if (board[i][0] == -1)		
			break;
		else board[i][0] = 1;
	}
	for (i = 0; i <= by; i++)
	{
		if (board[0][i] == -1)
			break;
		else board[0][i] = 1;
	}
	for (i = 1; i <= bx; i++)
	{
		for (int j = 1; j <= by; j++)
		{
			if (board[i][j] == -1)
				continue;
			if (board[i][j - 1] >= 0)
				board[i][j] += board[i][j - 1];
			if (board[i - 1][j] >= 0)
				board[i][j] += board[i - 1][j];
		}
	}
	cout << board[bx][by];
	return 0;
}
