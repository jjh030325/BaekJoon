#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int black = 0, n, x, y, white[101][101] = { 0, };
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; j++)
		{
			for (int t = 0; t < 10; t++)
			{
				white[x + j][y + t]++;
			}
		}
	}

	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (white[i][j] > 0)
			{
				black++;
			}
		}
	}
	printf("%d\n", black);
	return 0;
}