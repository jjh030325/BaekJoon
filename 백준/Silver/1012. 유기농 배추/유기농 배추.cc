#include <iostream>
using namespace std;

int t, m, n, k, a, b, num = -1;
int farm[55][55], check[55][55];
int x[4] = { 1, -1, 0, 0 };
int y[4] = { 0, 0, 1, -1 };
int dap = 0;

void dps(int ystay, int xstay)
{
	if (check[ystay][xstay] == num)
	{
		return;
	}
	check[ystay][xstay] = num;
	for (int i = 0; i < 4; i++)
	{
		int X = x[i] + xstay;
		int Y = y[i] + ystay;
		if (X > 50 || Y > 50 || X < 0 || Y < 0)
		{
		}
		else if (farm[ystay][xstay] == farm[Y][X] && check[Y][X] != num)
		{
			dps(Y, X);
		}
	}
}

int main()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			farm[i][j] = -1;
			check[i][j] = -1;
		}
	}
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m >> n >> k;
		num = i;
		for (int j = 0; j < k; j++)
		{
			cin >> a >> b;
			farm[b][a] = i;
		}
		
		for (int yy = 0; yy < n; yy++)
		{
			for (int xx = 0; xx < m; xx++)
			{
				if (farm[yy][xx] == num && check[yy][xx] != num)
				{
					dps(yy, xx);
					dap++;
				}
			}
		}
		
		cout << dap << endl;
		dap = 0;
	}
	
	return 0;
}
