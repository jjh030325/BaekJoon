#include <iostream>
#include <algorithm>
using namespace std;

int n, area[26][26] = { 0, };
int check[26][26] = { 0, };
int x[4] = { 1,-1,0,0 };
int y[4] = { 0,0,1,-1 };
int num = -1;
int ho[626];
char a;


void dps(int xstay, int ystay)
{
	if (check[xstay][ystay] == num)
	{
		return;
	}
	check[xstay][ystay] = num;
	for (int i = 0; i < 4; i++)
	{
		int X = xstay + x[i];
		int Y = ystay + y[i];
		if (X >= 0 && X < n)
		{
			if (Y >= 0 && Y < n)
			{
				if (area[xstay][ystay] == area[X][Y] && check[X][Y] != num)
				{
					ho[num]++;
					dps(X, Y);
				}
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			if (a == '1')
			{
				area[i][j] = 1;
			}
			else
			{
				area[i][j] = 0;
			}
			check[i][j] = -1;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (area[i][j] == 1 && check[i][j] == -1)
			{
				num++;
				ho[num] = 1;
				dps(i, j);	
			}
		}
	}
	cout << num + 1 << endl;
	sort(ho, ho + num + 1);
	for (int i = 0; i <= num; i++)
	{
		cout << ho[i] << endl;
	}
	return 0;
}