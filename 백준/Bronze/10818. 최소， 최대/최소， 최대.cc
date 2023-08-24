#include <stdio.h>
int main()
{
	int max=-1000000, min=1000000, n, a;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < min)
		{
			min = a;
		}
		if (a > max)
		{
			max = a;
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}
