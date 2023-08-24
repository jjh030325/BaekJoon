#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int card[101];
	int n, m;
	int max = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p < n; p++)
			{
				if (i != j && j != p && i != p)
				{
					if (card[i] + card[j] + card[p] <= m)
					{
						if (max < card[i] + card[j] + card[p])
						{
							max = card[i] + card[j] + card[p];
						}
					}
				}
			}
		}
	}
	printf("%d\n", max);
	return 0;
}