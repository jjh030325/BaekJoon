#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, w, h, xmin, ymin;
	xmin = ymin = 1001;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (w - x > x)
	{
		xmin = x;
	}
	else
	{
		xmin = w - x;
	}
	if (h - y > y)
	{
		ymin = y;
	}
	else
	{
		ymin = h - y;
	}

	if (xmin < ymin)
	{
		printf("%d\n", xmin);
	}
	else
	{
		printf("%d\n", ymin);
	}

	return 0;
}
