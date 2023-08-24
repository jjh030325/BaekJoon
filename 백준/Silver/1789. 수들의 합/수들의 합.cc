#include <stdio.h>
int main()
{
	long long n = 1, sum = 0, i = 0, s;

	scanf("%lld", &s);

	while(1)
	{
		i++;
		sum += n;
		n++;
		if (sum > s)
		{
			printf("%lld\n", i - 1);
			return 0;
		}
	}
	return 0;
}
