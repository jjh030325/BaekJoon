#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, x[4] = { 0, }, a, check = 0;
	char s[11];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &s);
		scanf("%d", &a);
	
		if (s[0] == 'S')
		{
			x[0] += a;
		}
		else if (s[0] == 'B')
		{
			x[1] += a;
		}
		else if (s[0] == 'L')
		{
			x[2] += a;
		}
		else if (s[0] == 'P')
		{
			x[3] += a;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (x[i] == 5)
		{
			check = 1;
		}
	}
	if (check == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}