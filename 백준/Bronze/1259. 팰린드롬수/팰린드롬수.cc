#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int a = 1;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)               //중지
		{
			break;
		}
		else if (n < 10)          //한자리수
		{
			printf("yes\n");
		}
		else if (n < 100)         //두자리수
		{
			if (n / 10 == n % 10)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (n < 1000)        //세자리수
		{
			if (n / 100 == n % 10)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else if (n < 10000)       //네자리수
		{
			if (n / 1000 == n % 10)
			{
				if ((n / 100) % 10 == (n % 100)/10)
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
			}
			else
			{
				printf("no\n");
			}
		}
		else                      //다섯자리수
		{
			if (n / 10000 == n % 10)
			{
				if ((n / 1000) % 10 == (n % 100) / 10)
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}