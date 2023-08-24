#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct subject
{
	char name[51];
	float size;
	char score[3];
};

int main()
{
	struct subject mysubject[20];
	float maxsize = 0;
	float lastscore = 0;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %f %s", &mysubject[i].name, &mysubject[i].size, &mysubject[i].score);
	}
	for (int i = 0; i < 20; i++)
	{
		if (strcmp("A+", mysubject[i].score) == 0)
		{
			lastscore += 4.5 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}else if (strcmp("A0", mysubject[i].score) == 0)
		{
			lastscore += 4.0 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if(strcmp("B+", mysubject[i].score) == 0)
		{
			lastscore += 3.5 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("B0", mysubject[i].score) == 0)
		{
			lastscore += 3.0 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("C+", mysubject[i].score) == 0)
		{
			lastscore += 2.5 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("C0", mysubject[i].score) == 0)
		{
			lastscore += 2.0 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("D+", mysubject[i].score) == 0)
		{
			lastscore += 1.5 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("D0", mysubject[i].score) == 0)
		{
			lastscore += 1.0 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
		else if (strcmp("F", mysubject[i].score) == 0)
		{
			lastscore += 0 * mysubject[i].size;
			maxsize += mysubject[i].size;
		}
	}
	printf("%f\n", lastscore / maxsize);
	return 0;
}