#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int w, b;
int power = 0;
char arr[101][101];
bool check[101][101] = { false, };
int x[4] = { 1, -1, 0, 0 };
int y[4] = { 0, 0, 1, -1 };

void dps(int yy, int xx)
{
	power++;
	for (int i = 0; i < 4; i++)
	{
		int xxx = xx + x[i];
		int yyy = yy + y[i];
		if (xxx >= 0 && yyy >= 0 && xxx < n && yyy < m && check[yyy][xxx] == false && arr[yyy][xxx] == arr[yy][xx])
		{
			check[yyy][xxx] = true;
			dps(yyy, xxx);
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] == false)
			{
				power = 0;
				check[i][j] = true;
				dps(i, j);
				if (arr[i][j] == 'W')
				{
					w += power * power;
				}
				else
				{
					b += power * power;
				}
			}
		}
	}

	cout << w << " " << b << endl;

	return 0;
}
