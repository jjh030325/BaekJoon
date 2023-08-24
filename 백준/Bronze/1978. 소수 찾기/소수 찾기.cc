#include <stdio.h>

int main()
{
	int n, x, t = 0, count = 0, check = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		while (1)
		{
			t++;
			if (x == 1)
			{
				check = 3;
				t = 0;
				break;
			}
			if (x%t == 0)
			{
				check++;
			}
			if (check >= 3)
			{
				break;
			}
			if (t > x)
			{
				break;
			}
		}
		if (check == 2)
		{
			count++;
		}
		check = 0;
		t = 0;
	}
	printf("%d\n", count);

	return 0;
}