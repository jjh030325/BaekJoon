#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2 - 1; j++)
		{
			if (j < i)
			{
				printf(" ");
			}
			else if (j < n * 2 - i - 1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n * 2 - 1; j++)
		{
			if (j < i)
			{
				printf(" ");
			}
			else if (j < n * 2 - i - 1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}