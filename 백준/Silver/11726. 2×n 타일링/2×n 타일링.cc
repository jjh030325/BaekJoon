#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int dp[1001] = { 0, };

	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 2;

	if (n <= 2)
	{
		printf("%d\n", dp[n]);
		return 0;
	}

	for (int i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}
	printf("%d\n", dp[n]);

	return 0;
}