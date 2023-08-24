#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int n, result;
	int dp[1001][3] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &dp[i][j]);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}
	result = min(dp[n][0], dp[n][1]);
	result = min(dp[n][2], result);
	printf("%d\n", result);
	return 0;
}
