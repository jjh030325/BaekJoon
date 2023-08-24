#include <stdio.h>

int main()
{
	int start, end, num = 1, a = 1, sum = 0;

	scanf("%d %d", &start, &end);

	for (int i = 0; i <= end; i++)
	{
		if (start <= i)
		{
			sum += a;
		}
		if (num > a)
		{
			a++;
			num = 1;
		}
		num++;
	}
	printf("%d\n", sum);
	return 0;
}