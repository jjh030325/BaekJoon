#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int main()
{
	int n, arr[100001], dp[100001], dap = -1000;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	dp[1] = arr[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		dap = max(dap, dp[i]);
	}
	printf("%d\n", dap);
	return 0;
}