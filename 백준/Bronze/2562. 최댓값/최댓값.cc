#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int su[10], max = 0, num;

	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &su[i]);
		if (max <= su[i])
		{
			max = su[i];
			num = i;
		}
	}
	printf("%d\n%d\n", max, num);
	return 0;
}