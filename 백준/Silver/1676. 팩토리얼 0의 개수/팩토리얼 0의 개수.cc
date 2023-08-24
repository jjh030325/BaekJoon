#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, five1 = 0, five2 = 0, five3 = 0;

	scanf("%d", &n);

	five1 = n / 5;
	five2 = n / 25;
	five3 = n / 125;
	
	printf("%d\n", five1 + five2 + five3);
	return 0;
}