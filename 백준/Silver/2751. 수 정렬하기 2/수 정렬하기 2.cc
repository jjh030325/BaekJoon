#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ALL 2000002
int cheak[ALL] = { 0, };
int n, a;

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < 0)
		{
			cheak[1000000 - a] = 1;
		}
		else
		{
			cheak[a] = 1;
		}
	}
	for (int i = ALL; i > 1000000; i--)
	{
		if (cheak[i] == 1)
		{
			printf("%d\n", (i - 1000000) - (i - 1000000) - (i - 1000000));
		}
	}
	for (int i = 0; i < 1000001; i++)
	{
		if (cheak[i] == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
