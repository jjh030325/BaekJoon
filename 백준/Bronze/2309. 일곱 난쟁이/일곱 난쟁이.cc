#include <stdio.h>

int main()
{
	int x[9], sum = 0, chogi = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &x[i]);
		chogi += x[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (x[i] > x[j])
			{
				int temp;
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			sum = chogi;
			sum = sum - x[i] - x[j];
			if (sum == 100)
			{
				for (int f = 0; f < 9; f++)
				{
					if (f != i && f != j)
					{
						printf("%d\n", x[f]);
					}
				}
				return 0;
			}
		}
	}
	
	return 0;
}