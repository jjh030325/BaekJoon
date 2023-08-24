#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf", &a, &b);
	c = a / b;
	printf("%.10lf", c);
	return 0;
}
