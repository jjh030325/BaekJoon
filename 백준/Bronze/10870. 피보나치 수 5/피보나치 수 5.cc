#include <stdio.h>

int fibo(int n)
{
	if (n > 2)
	{
		return fibo(n - 1) + fibo(n - 2);
	}
	else if(n == 2)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 0;
	}
}

int main()
{
	int x = 0, n;

	scanf("%d", &n);

	printf("%d", fibo(n + 1));

	return 0;
}