#include <stdio.h>

struct student
{
	char name[16];

	int year;
	int month;
	int day;
};

int main()
{
	int n, max = 0, min = 0;
	struct student s[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &s[i].name, &s[i].day, &s[i].month, &s[i].year);
		if (s[i].year < s[min].year)
		{
			min = i;
		}
		else if (s[i].year == s[min].year)
		{
			if (s[i].month < s[min].month)
			{
				min = i;
			}
			else if (s[i].month == s[min].month)
			{
				if (s[i].day <= s[min].day)
				{
					min = i;
				}
			}
		}
		if (s[i].year > s[max].year)
		{
			max = i;
		}
		else if (s[i].year == s[max].year)
		{
			if (s[i].month > s[max].month)
			{
				max = i;
			}
			else if (s[i].month == s[max].month)
			{
				if (s[i].day >= s[max].day)
				{
					max = i;
				}
			}
		}
	}
	printf("%s\n%s\n", s[max].name, s[min].name);
	return 0;
}