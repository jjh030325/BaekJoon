#include <stdio.h>
int main()
{
	int y, x;

	scanf("%d", &x);
	y = x * 2 + 1;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (i > j)
			{
				printf(" ");
			}
			else if (y - i - 2 <= j)
			{
				continue;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}