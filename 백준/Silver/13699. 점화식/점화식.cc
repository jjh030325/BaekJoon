#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long int dp[36];
	dp[0] = 1;

	for (int i = 1; i < 36; i++)
	{
		dp[i] = 0;
		for (int j = 0; j < i; j++)
		{
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}

	scanf("%d", &n);
	printf("%lld", dp[n]);

	return 0;
}