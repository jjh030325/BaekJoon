#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, pi[1001], dap = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)                     //입력
	{
		scanf("%d", &pi[i]);
	}
	for (int i = 0; i < n - 1; i++)                 //오름차순 버블정렬
	{
		for (int j = i + 1; j < n; j++)
		{
			if (pi[i] > pi[j])
			{
				int temp = pi[j];
				pi[j] = pi[i];
				pi[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)                     //답 계산
	{
		dap += pi[i] * (n - i);
	}
	printf("%d\n", dap);
	return 0;
}