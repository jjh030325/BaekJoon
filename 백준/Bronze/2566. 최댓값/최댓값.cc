#include <stdio.h>
int main()
{
	int a[9][9], max = 0, x, y;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max <= a[i][j])
			{
				max = a[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n%d %d", max, x + 1, y + 1);
	return 0;
}
