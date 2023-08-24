#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int stone[100001];
	int r = 0, l = 0;
	int rmax = 0, lmax = 0;
	int totalmax;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)         //입력 1과 -1로 구분
	{
		scanf("%d", &stone[i]);
		if (stone[i] == 1)
		{
			stone[i] = 1;
		}
		else
		{
			stone[i] = -1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		r += stone[i];
		l -= stone[i];
		if (r < 0)
		{
			r = 0;
		}
		if (l < 0)
		{
			l = 0;
		}
		if (rmax < r)
		{
			rmax = r;
		}
		if (lmax < l)
		{
			lmax = l;
		}
	}
	if (rmax > lmax)
	{
		totalmax = rmax;
	}
	else
	{
		totalmax = lmax;
	}
	printf("%d\n", totalmax);
	return 0;
}