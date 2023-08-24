#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t, a;
	int dp[12];

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i < 12; i++)
	{
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		printf("%d\n", dp[a]);
	}

	return 0;
}