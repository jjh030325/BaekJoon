#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0;
	char arr[101];
	int arr2[101];

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++)
	{
		arr2[i] = (int)arr[i] - (int)'0';
		sum += arr2[i];
	}
	printf("%d\n", sum);
	return 0;
}
