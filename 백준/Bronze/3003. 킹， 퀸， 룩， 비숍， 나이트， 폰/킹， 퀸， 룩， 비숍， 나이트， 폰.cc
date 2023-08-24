#include <stdio.h>

int main()
{
	int k = 1, q = 1, l = 2, b = 2, n = 2, p = 8;

	scanf("%d", &k);	k = 1 - k;
	scanf("%d", &q);	q = 1 - q;
	scanf("%d", &l);	l = 2 - l;
	scanf("%d", &b);	b = 2 - b;
	scanf("%d", &n);	n = 2 - n;
	scanf("%d", &p);	p = 8 - p;

	printf("%d %d %d %d %d %d", k, q, l, b, n, p);

	return 0;
}