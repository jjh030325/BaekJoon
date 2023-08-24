#include <stdio.h>
int main()
{
	int a[50], b[50], n, max = 0, min = 100, result = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (max < a[j])
			{
				max = a[j];
				int temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		max = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (min > b[j])
			{
				min = b[j];
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
		min = 100;
	}
	for (int i = 0; i < n; i++)
	{
		result += a[i] * b[i];
	}
	printf("%d", result);

	return 0;
}
