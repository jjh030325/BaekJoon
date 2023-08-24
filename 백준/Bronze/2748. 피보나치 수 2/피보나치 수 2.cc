#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long int dp[91];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i < 91; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	scanf("%d", &n);
	printf("%lld\n", dp[n]);

	return 0;
}
