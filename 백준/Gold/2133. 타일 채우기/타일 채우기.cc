#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, dp[31];

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;

	for (int i = 4; i <= 30; i++)
	{
		dp[i] = dp[i - 2] * dp[2];
		for (int j = 4; j <= i; j += 2)
		{
			dp[i] += dp[i - j] * 2;
		}
	}

	scanf("%d", &n);
	printf("%d", dp[n]);

	return 0;
}