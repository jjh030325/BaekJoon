#include <stdio.h>

int main()
{
	int x, y, daycount = 0;

	scanf("%d %d", &x, &y);

	if (x > 1)
	{
		daycount += 31;
	}
	if (x > 2)
	{
		daycount += 28;
	}
	if (x > 3)
	{
		daycount += 31;
	}
	if (x > 4)
	{
		daycount += 30;
	}
	if (x > 5)
	{
		daycount += 31;
	}
	if (x > 6)
	{
		daycount += 30;
	}
	if (x > 7)
	{
		daycount += 31;
	}
	if (x > 8)
	{
		daycount += 31;
	}
	if (x > 9)
	{
		daycount += 30;
	}
	if (x > 10)
	{
		daycount += 31;
	}
	if (x > 11)
	{
		daycount += 30;
	}
	
	daycount += y;
	if (daycount % 7 == 0)
	{
		printf("SUN\n");
	}else if (daycount % 7 == 1)
	{
		printf("MON\n");
	}
	else if (daycount % 7 == 2)
	{
		printf("TUE\n");
	}
	else if (daycount % 7 == 3)
	{
		printf("WED\n");
	}
	else if (daycount % 7 == 4)
	{
		printf("THU\n");
	}
	else if (daycount % 7 == 5)
	{
		printf("FRI\n");
	}
	else if (daycount % 7 == 6)
	{
		printf("SAT\n");
	}

	return 0;
}