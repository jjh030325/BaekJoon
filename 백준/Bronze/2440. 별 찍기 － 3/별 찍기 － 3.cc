#include <stdio.h>
int main()
{
	int x;

	scanf("%d", &x);

	for (int i = x; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
