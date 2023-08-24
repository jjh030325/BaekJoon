#include <stdio.h>

int sosucheck[1000001];

int main()
{
	int n, m;
    scanf("%d %d", &m, &n);

	sosucheck[0] = 1;
	sosucheck[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = i * 2; j <= n; j+=i)
		{
			if(sosucheck[j] == 0) sosucheck[j] = 1;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (sosucheck[i] == 0)
		{
            printf("%d\n", i);
		}
	}
	return 0;
}
