#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	for (int i = 0; i < 30000; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		a *= a;
		b *= b;
		c *= c;
		if (a == 0 && b == 0 && c == 0)
		{
			return 0;
		}
		if (a == b + c)
		{
			printf("right\n");
		}
		else if (b == a + c)
		{
			printf("right\n");
		}
		else if (c == a + b)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}
	return 0;
}