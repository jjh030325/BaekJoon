#include <iostream>
using namespace std;

int t, h, w, check[111][111] = { 0, };
char area[111][111] = { 0, };
int x[4] = { 1,-1,0,0 };
int y[4] = { 0,0,1,-1 };
int muri[101] = { 0, };
int num = 0;

void dps(int xstay, int ystay)
{
	if (check[xstay][ystay] == num)
	{
		return;
	}
	check[xstay][ystay] = num;
	for (int i = 0; i <= 3; i++)
	{
		int X = xstay + x[i];
		int Y = ystay + y[i];
		if (X >= 0 && X < h)
		{
			if (Y >= 0 && Y < w)
			{
				if (area[X][Y] == area[xstay][ystay] && check[X][Y] != num)
				{
					dps(X, Y);
				}
			}
		}
	}
}

int main()
{
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> h >> w;
		num = i;
		for (int j = 0; j < h; j++)
		{
			cin >> area[j];
		}
		
		for (int j = 0; j < h; j++)
		{
			for (int t = 0; t < w; t++)
			{
				if (area[j][t] == '#' && check[j][t] != num)
				{
					muri[i]++;
					dps(j, t);
				}
			}
		}
	}
	for (int i = 1; i <= t; i++)
	{
		cout << muri[i] << endl;
	}
	
	return 0;
}