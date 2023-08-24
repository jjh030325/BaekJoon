#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pibo[1000001];
int mirrorpibo[1000001];
int n;

int main()
{
	pibo[0] = 0;
	pibo[1] = 1;
	mirrorpibo[0] = 0;
	mirrorpibo[1] = pibo[1] - mirrorpibo[0];    //pibo[-1]=pibo[1]-pibo[0]
	for (int i = 2; i < 1000001; i++)
	{
		pibo[i] = (pibo[i - 1] + pibo[i - 2]) % 1000000000;
		mirrorpibo[i] = (mirrorpibo[i - 2] - mirrorpibo[i - 1]) % 1000000000;
	}

	scanf("%d", &n);
	if (n > 0)
	{
		printf("1\n");
		printf("%d\n", pibo[n]);
	}
	else if (n == 0)
	{
		printf("0\n0\n");
	}
	else
	{
		n = n - n - n;
		if (mirrorpibo[n] < 0)
		{
			printf("-1\n");
			mirrorpibo[n] = mirrorpibo[n] - mirrorpibo[n] - mirrorpibo[n];
			printf("%d\n", mirrorpibo[n]);
		}
		else
		{
			printf("1\n");
			printf("%d\n", mirrorpibo[n]);
		}
	}
	return 0;
}