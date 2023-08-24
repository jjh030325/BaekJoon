#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define A 1000001

int main()
{
	int dp[A], n;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i < A; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}

	scanf("%d", &n);
	printf("%d", dp[n]);

	return 0;
}