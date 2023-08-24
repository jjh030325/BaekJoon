#include <stdio.h>
int main()
{
	int t, n, count = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		while (1)
		{
			if (n % 2 == 1)
			{
				printf("%d ", count);
			}
			n /= 2;
			if (n == 0)
			{
				break;
			}
			count++;
		}
		count = 0;
	}

	return 0;
}