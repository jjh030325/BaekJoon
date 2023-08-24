#include <stdio.h>
int main()
{
	int max = 0, people = 0, x, y;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &x, &y);
		people -= x;
		people += y;
		if (people > max)
		{
			max = people;
		}
	}
	printf("%d", max);

	return 0;
}