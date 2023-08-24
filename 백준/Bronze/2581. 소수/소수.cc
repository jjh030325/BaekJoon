#include <stdio.h>

int main()
{
	int m, n, check = 0, sum = 0, min = 10001;

	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{
				check++;
			}
			if (check > 2)
			{
				break;
			}
		}
		if (check == 2)
		{
			sum += i;
			if (min > i)
			{
				min = i;
			}
		}
		check = 0;
	}
	if (min == 10001)
	{
		printf("-1\n");
		return 0;
	}
	printf("%d\n%d\n", sum, min);
	return 0;
}