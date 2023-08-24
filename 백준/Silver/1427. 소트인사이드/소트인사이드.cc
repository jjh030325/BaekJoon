#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char n[11];
	int len;

	scanf("%s", n);
	len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (n[i] < n[j])
			{
				char temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	printf("%s\n", n);

	return 0;
}