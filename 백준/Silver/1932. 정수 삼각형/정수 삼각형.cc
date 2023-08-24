#include <iostream>
#include <algorithm>
using namespace std;

int n;
int triangle[501][501] = { 0, };
int dp[501][501] = { 0, };
int dap = 0;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> triangle[i][j];
		}
	}
	dp[1][1] = triangle[1][1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j] + triangle[i][j], dp[i - 1][j - 1] + triangle[i][j]);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (dap < dp[n][i])
		{
			dap = dp[n][i];
		}
	}
	cout << dap << endl;
	return 0;
}