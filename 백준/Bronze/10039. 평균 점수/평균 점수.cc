#include <stdio.h>
int main()
{
	int sum = 0, a;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		if (a <= 40)
		{
			sum += 40;
		}
		else
		{
			sum += a;
		}
	}
	printf("%d", sum / 5);

	return 0;
}
