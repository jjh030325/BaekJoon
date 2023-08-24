#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d", &a);
	scanf("%d", &b);
	c = b % 10 * a;
	d = (b / 10) % 10 * a;
	e = b / 100 * a;
	f = a * b;
	printf("%d\n%d\n%d\n%d\n", c, d, e, f);
	return 0;
}