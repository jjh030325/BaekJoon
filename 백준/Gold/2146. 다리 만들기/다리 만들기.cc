#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, count = 0;
int num = 0, min = 10100;
int area[101][101];
int check[101][101] = { 0, };
int x[4] = { 0,0,1,-1 };
int y[4] = { 1,-1,0,0 };
int sp[101][3] = { 0, 0, 0 };

void dps(int xstay, int ystay)
{
	if (check[xstay][ystay] != -1)
	{
		return;
	}
	check[xstay][ystay] = num;
	for (int i = 0; i < 4; i++)
	{
		int X = x[i] + xstay;
		int Y = y[i] + ystay;
		if (area[xstay][ystay] != area[X][Y] && area[X][Y] == 0)
		{
			sp[count][0] = xstay;
			sp[count][1] = ystay;
			sp[count][2] = num;
			count++;
		}
		if (area[xstay][ystay] == area[X][Y] && check[X][Y] == -1)
		{
			dps(X, Y);
		}
		
	}
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)                 //입력
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &area[i][j]);
			check[i][j] = -1;
			if (area[i][j] == 0)
			{
				check[i][j] = 0;
			}
		}
	}
	
	for (int i = 0; i < n; i++)                  //dps 땅번호체크
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] == -1)
			{
				num++;
				dps(i, j);
			}
		}
	}
	for (int i = 0; i < count - 2; i++)
	{
		for (int j = i + 1; j < count-1; j++)
		{
			if (sp[i][2] != sp[j][2])
			{
				int imsi1 = sp[i][0] - sp[j][0];
				if (imsi1 < 0)
				{
					imsi1 = imsi1 - imsi1 - imsi1;
				}
				int imsi2 = sp[i][1] - sp[j][1];
				if (imsi2 < 0)
				{
					imsi2 = imsi2 - imsi2 - imsi2;
				}
				if (min > imsi1 + imsi2 - 1)
				{
					min = imsi1 + imsi2 - 1;
				}
			}
		}	
	}
	printf("%d\n", min);
	return 0;
}