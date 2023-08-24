#include <stdio.h>
int main()
{
	int n, check = 0, a[5], winner = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &a[j]);
		}
		for (int j = 0; j < 3; j++)
		{
			for (int k = j+1; k < 4; k++)
			{
				for (int l = k+1; l < 5; l++)
				{
					if ((a[j] + a[k] + a[l]) % 10 >= check)
					{
						check = (a[j] + a[k] + a[l]) % 10;
						winner = i;
					}
				}
			}
		}
	}
	printf("%d", winner + 1);
	return 0;
}
