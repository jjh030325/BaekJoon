#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b);

int main() {
	int n;
	scanf("%d", &n);

	int num[1000001];
	num[0] = 0, num[1] = 0;

	for (int i = 2; i <= n; i++) {
		int minimum = num[i - 1] + 1;
		if (i % 3 == 0) {
			minimum = min(minimum, num[i / 3] + 1);
		}
		if (i % 2 == 0) {
			minimum = min(minimum, num[i / 2] + 1);
		}
		num[i] = minimum;
	}

	printf("%d\n", num[n]);
}

int min(int a, int b) {
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}