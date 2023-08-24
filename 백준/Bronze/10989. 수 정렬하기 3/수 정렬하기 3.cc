#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a;
	int su[10001] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		su[a]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (su[i] >= 1)
		{
			for (int j = 0; j < su[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}