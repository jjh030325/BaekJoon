#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
	{
		printf("%d\n", b);
	}
	else if (c >= b && b >= a)
	{
		printf("%d\n", b);
	}
	else if (b >= a && a >= c)
	{
		printf("%d\n", a);
	}
	else if (c >= a && a >= b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", c);
	}

	return 0;
}