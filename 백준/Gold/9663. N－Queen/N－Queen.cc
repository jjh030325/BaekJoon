#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int answer = 0;
int visited[15];

void check(int num)
{
	if (num == n)
	{
		answer++;
		return;
	}
	for (int j = 0; j < n; j++)
	{
		visited[num] = j;
		int imsi = 0;
		for (int i = 0; i < num; i++)
		{
			if (visited[num] == visited[i] || num - i == visited[num] - visited[i] || num - i == visited[i] - visited[num])
			{
				imsi = 1;
			}
		}
		if (imsi == 0)
		{
			check(num + 1);
		}
		imsi = 0;
	}
}
int main()
{
	scanf("%d", &n);
	check(0);
	printf("%d\n", answer);
	return 0;
}