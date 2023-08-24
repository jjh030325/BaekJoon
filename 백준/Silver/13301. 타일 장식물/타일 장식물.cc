#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long int dulre[81];

	dulre[0] = 2;                           //0은 안나오니까 계산에 편하도록 2 넣어줌
	dulre[1] = 4;
	for (int i = 2; i < 81; i++)
	{
		dulre[i] = dulre[i - 1] + dulre[i - 2];
	}

	scanf("%d", &n);
	printf("%lld\n", dulre[n]);

	return 0;
}