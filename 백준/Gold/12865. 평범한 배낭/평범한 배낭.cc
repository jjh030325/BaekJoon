#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k;                                     //물품의 수, 최대 무게
	int item[101][2];                             //아이템[번호][0 = 무게, 1 = 가치]
	int pack[101][100001] = {0, };                //가방 배열 [개수] [최대 무게] 초기값 0

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &item[i][0], &item[i][1]);
	}

	for (int i = 1; i <= n; i++)                   //물품번호
	{
		for (int j = 1; j <= k; j++)               //무게
		{
			if (j >= item[i][0])
			{
				if ((item[i][1] + pack[i - 1][j - item[i][0]]) > pack[i - 1][j])    //아이템가치에 아이템 무게를 뺀 바로 전 pack에 정리된 가치를 더한게 전 pack 가치보다 클 경우 갱신
				{
					pack[i][j] = pack[i - 1][j - item[i][0]] + item[i][1];
				}
				else
				{
					pack[i][j] = pack[i - 1][j];
				}
			}
			else
			{
				pack[i][j] = pack[i - 1][j];
			}
		}
	}
	printf("%d\n", pack[n][k]);
	return 0;
}