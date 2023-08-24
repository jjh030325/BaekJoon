#include <stdio.h>

int main()
{
	int x, y, max = 0, min = 0, bigger = 0;

	scanf("%d %d", &x, &y);

	if (x > y)
	{
		bigger = x;
	}
	else
	{
		bigger = y;
	}

	for (int i = 1; i <= bigger; i++)
	{
		if (x%i == 0 && y%i == 0)
		{
			min = i;
		}
	}
	
	max = (x / min)*(y / min)*min;

	printf("%d\n%d\n", min, max);

	return 0;
}