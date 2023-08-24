#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, sum = 0, check[9] = { 0,0,0,0,0,0,0,0,0 }, fin[5];

	for (int i = 1; i < 9; i++)
	{
		scanf("%d", &check[i]);
		if (check[a] <= check[i])
		{
			e = d;
			d = c;
			c = b;
			b = a;
			a = i;
		}
		else if (check[b] <= check[i])
		{	
			e = d;
			d = c;
			c = b;
			b = i;
		}
		else if (check[c] <= check[i])
		{
			e = d;
			d = c;
			c = i;
		}
		else if (check[d] <= check[i])
		{
			e = d;
			d = i;
		}
		else if (check[e] <= check[i])
		{
			e = i;
		}
		else if (d == 0)
		{
			d = i;
		}
		else if (c == 0)
		{
			c = i;
		}
		else if (b == 0)
		{
			b = i;
		}
		else if (a == 0)
		{
			a = i;
		}
	}
	sum = check[a] + check[b] + check[c] + check[d] + check[e];

	printf("%d\n", sum);

	fin[0] = a;
	fin[1] = b;
	fin[2] = c;
	fin[3] = d;
	fin[4] = e;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (fin[i] > fin[j])
			{
				int temp;
				temp = fin[i];
				fin[i] = fin[j];
				fin[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", fin[i]);
	}

	return 0;
}
