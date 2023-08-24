#include <stdio.h>

int main()
{
	int k, n, score[50], chi = 0, max = 0, min = 100;

	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			if (max <= score[j])
			{
				max = score[j];
			}                                                                            //최대 구하기
			if (min >= score[j])
			{
				min = score[j];
			}                                                                            //최소 구하기
		}
		for (int j = 0; j < n; j++)
		{
			for (int t = j; t < n; t++)
			{
				if (score[j] < score[t])
				{
					int temp;
					temp = score[j];
					score[j] = score[t];
					score[t] = temp;
				}
			}
		}																				//내림차순
		for (int j = 0; j < n - 1; j++)
		{
			if (score[j] - score[j + 1] >= chi)
			{
				chi = score[j] - score[j + 1];
			}
		}																				//가장 큰 인접한 차이
		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", max, min, chi);
		max = 0;
		chi = 0;
		min = 100;
	}

	return 0;
}
