#include <stdio.h>
int main()
{
	int n, k, count = 0;

	scanf("%d %d", &n, &k);

	for (int i = 1; i < 10001; i++)
	{
		if (n%i == 0)
		{
			count++;
		}
		if (k == count)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}