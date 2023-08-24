#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dp[31][31] = { 0, };
	int n, k;

	dp[1][1] = 1;
	dp[2][1] = dp[2][2] = 1;
	dp[3][1] = dp[3][3] = 1;
	dp[3][2] = 2;

	scanf("%d %d", &n, &k);

	for (int i = 4; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
		dp[i][i] = 1;
	}

	printf("%d\n", dp[n][k]);
	return 0;
}