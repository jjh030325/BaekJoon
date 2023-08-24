#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[1001], dp[1001], max = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		dp[i] = 1;                                   //뭘 하던 다 길이가 1로 시작하므로 dp 초기값 1
		for (int j = 1; j < i; j++)                  //j에서 i까지 체크
		{
			if (a[j] < a[i] && dp[j] >= dp[i])       //앞이 뒤보다 작은 수이고, 작은 것의 dp 즉 계산된 횟수가 더 많을 때
			{
				dp[i] = dp[j] + 1;                   //큰 것의 dp를 체크
			}
		}
	}
	for (int i = 1; i <= n; i++)                     //가장 큰 dp값 즉 길이를 체크
	{
		if (max <= dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d\n", max);
	return 0;
}