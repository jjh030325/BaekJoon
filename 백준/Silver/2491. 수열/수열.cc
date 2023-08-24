#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, max = 1, a[100001], dp[100001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		dp[i] = 1;
	}
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] <= a[i])
		{
			dp[i] = dp[i - 1] + 1;
		}
		if (max < dp[i])
		{
			max = dp[i];
		}
		dp[i - 1] = 1;
	}
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] >= a[i])
		{
			dp[i] = dp[i - 1] + 1;
		}
		if (max < dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d\n", max);

	return 0;
}