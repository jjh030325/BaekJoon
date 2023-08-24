#include <iostream>
using namespace std;

int n, m, num = 0, dap = 0;
int draw[501][501] = { 0, };
int check[501][501] = { 0, };
int y[4] = { 1,-1,0,0 };
int x[4] = { 0,0,1,-1 };
int s[250010] = { 0, };

void dps(int ystay, int xstay)
{
	if (check[ystay][xstay] != 0)
	{
		return;
	}
	check[ystay][xstay] = num;    //온거체크용
	s[num]++;                     //넓이체크용
	for (int i = 0; i <= 3; i++)
	{
		int Y = ystay + y[i];
		int X = xstay + x[i];
		if (X >= 0 && X < m)
		{
			if (Y >= 0 && Y < n)
			{
				if (check[Y][X] == 0 && draw[Y][X] == 1)
				{
					dps(Y, X);
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> draw[i][j];
		}
	}
	if (n == 1 && m == 1)
	{
		if (draw[0][0] == 1)
		{
			cout << 1 << endl;
			cout << 1 << endl;
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (check[i][j] == 0 && draw[i][j] == 1)
			{
				num++;
				dps(i, j);
			}
		}
	}
	for (int i = 0; i < m*n; i++)
	{
		if (dap < s[i])
		{
			dap = s[i];
		}
	}
	cout << num << endl;
	cout << dap << endl;

	return 0;
}