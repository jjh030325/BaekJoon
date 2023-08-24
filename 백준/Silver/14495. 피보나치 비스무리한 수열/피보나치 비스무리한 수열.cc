#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long int dp[117];

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i < 117; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 3];
	}

	scanf("%d", &n);
	printf("%lld\n", dp[n]);

	return 0;
}