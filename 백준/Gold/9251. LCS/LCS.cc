#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int dp[1001][1001] = { 0 };
string a, b;
int aa, bb;
int m = 0;

int main()
{
	cin >> a;
	cin >> b;

	aa = a.length();
	bb = b.length();

	for (int i = 0; i < aa; i++)
	{
		for (int j = 0; j < bb; j++)
		{
			if (a[i] == b[j])
			{
				if (i > 0 && j > 0)
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else
				{
					dp[i][j] = 1;
				}
			}
			else
			{
				if (i > 0 && j > 0)
				{
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
				}
				else
				{
					if (i - 1 >= 0)
					{
						dp[i][j] = dp[i - 1][j];
					}
					else if (j - 1 >= 0)
					{
						dp[i][j] = dp[i][j - 1];
					}
					else
					{
						dp[i][j] = 0;
					}
				}
			}
		}
	}
	for (int i = 0; i < aa; i++)
	{
		for (int j = 0; j < bb; j++)
		{
			if (m < dp[i][j])
			{
				m = dp[i][j];
			}
		}
	}
	cout << m << endl;
	return 0;
}