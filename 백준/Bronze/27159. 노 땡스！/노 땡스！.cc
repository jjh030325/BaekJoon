#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a, score = 0;
	int card[36] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		card[a] = 1;
	}
	for (int i = 2; i <= 35; i++)
	{
		if (card[i] == 1)
		{
			if (card[i - 1] == 0)
			{
				score += i;
			}
		}
	}
	printf("%d\n", score);

	return 0;
}