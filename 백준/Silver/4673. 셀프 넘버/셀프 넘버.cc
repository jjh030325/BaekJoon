#include <stdio.h>

int d(int n)
{
	int sum = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int arr[10001], i, check;
	for (i = 1; i < 10001; i++)
	{
		check = d(i);
		if (check < 10001)
			arr[check] = 1;
	}
	for (i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}