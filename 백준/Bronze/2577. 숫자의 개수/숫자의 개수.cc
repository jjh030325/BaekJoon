#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, result;

	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;

	int zero, one, two, three, four, five, six, seven, eight, nine;
	zero = one = two = three = four = five = six = seven = eight = nine = 0;
	int imsi = result;
	while (imsi > 0)
	{
		if (imsi % 10 == 0) zero++;
		else if (imsi % 10 == 1) one++;
		else if (imsi % 10 == 2)two++;
		else if (imsi % 10 == 3)three++;
		else if (imsi % 10 == 4)four++;
		else if (imsi % 10 == 5)five++;
		else if (imsi % 10 == 6)six++;
		else if (imsi % 10 == 7)seven++;
		else if (imsi % 10 == 8)eight++;
		else nine++;
		imsi /= 10;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, three, four, five, six, seven, eight, nine);
	return 0;
}