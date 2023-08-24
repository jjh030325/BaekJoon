#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x * 2; j++)
		{
			if (i < j && x * 2 - i - 1> j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = x - 1; i > 0; i--)
	{
		for (int j = 0; j < x * 2; j++)
		{
			if (i <= j && x * 2 - i> j)
			{
				printf(" ");
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