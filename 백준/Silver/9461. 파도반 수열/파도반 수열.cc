#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t, n;
	long long int p[101];

	scanf("%d", &t);

	p[0] = 1;
	p[1] = 1;
	p[2] = 1;

	for (int i = 3; i <= 100; i++)
	{
		p[i] = p[i - 2] + p[i - 3];
	}

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%lld\n", p[n-1]);
	}
	return 0;
}