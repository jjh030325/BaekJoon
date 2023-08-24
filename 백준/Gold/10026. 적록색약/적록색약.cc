#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, normal = 0, weak = 0;
char area[101][101];
int cheak[101][101] = { 0, };
int x[4] = { 0,0,1,-1 };
int y[4] = { 1,-1,0,0 };

void dps(int xstay, int ystay)
{
	if (cheak[xstay][ystay]==1)
	{
		return;
	}
	cheak[xstay][ystay] = 1;
	for (int i = 0; i < 4; i++)
	{
		int X = x[i] + xstay;
		int Y = y[i] + ystay;
		if (area[xstay][ystay] == area[X][Y] && cheak[X][Y] != 1)
		{
			dps(X, Y);
		}
	}
}

int main()
{

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", &area[i]);										//입력받음.
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (cheak[i][j] != 1)									//정상인 확인
			{
				dps(i, j);
				normal++;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (area[i][j]=='G')
			{
				area[i][j] = 'R';									//g와 r을 통합하면서 동시에 cheak초기화
			}
			cheak[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (cheak[i][j] != 1)									//적록색약 확인
			{
				dps(i, j);
				weak++;
			}
		}
	}
	printf("%d %d\n", normal, weak);

	return 0;
}
