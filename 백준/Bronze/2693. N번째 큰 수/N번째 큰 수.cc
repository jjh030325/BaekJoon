#include <stdio.h>

int main()
{
	int x[10001][10], n, one = 0, two = 0, three = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (one < x[i][j])
			{
				three = two;
				two = one;
				one = x[i][j];
			}
			else if (two < x[i][j])
			{
				three = two;
				two = x[i][j];
			}
			else if (three < x[i][j])
			{
				three = x[i][j];
			}
		}
		printf("%d\n", three);
		one = 0;
		two = 0;
		three = 0;
	}
	return 0;
}