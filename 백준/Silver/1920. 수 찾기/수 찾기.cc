#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void merge(int a[], int low, int mid, int high)  //나눈거 합치기
{
	int b[100001];
	int i = low; 
	int j = mid + 1; 
	int k = 0; 

	while (i <= mid && j <= high)
	{
		if (a[i] <= a[j]) 
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while (i <= mid)
		b[k++] = a[i++];
	while (j <= high)
		b[k++] = a[j++];
	k--;

	while (k >= 0)
	{
		a[low + k] = b[k];
		k--;
	}
}
void mergeSort(int a[], int low, int high)     //나누기
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

int main()
{
	int A[100001], n, m, dap, boolcheck = 0, imsi, top, bottom = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)                  //입력
	{
		scanf("%d", &A[i]);
	}
	
	mergeSort(A, 0, n - 1);                      //만든 병합정렬을 통해 오름차순 정렬

	scanf("%d", &m);

	for (int i = 0; i < m; i++)                  //입력을 받고 이분 탐색을 통해 계산
	{
		scanf("%d", &dap);
		top = n - 1;                             //뒷부분
		bottom = 0;                              //앞부분
		while (1)
		{
			imsi = (top + bottom) / 2;           //중간
			if (dap == A[imsi] || dap == A[top] || dap == A[bottom])
			{
				printf("1\n");
				break;
			}
			else if (dap > A[imsi])
			{
				bottom = imsi + 1;
			}
			else if (dap < A[imsi])
			{
				top = imsi - 1;
			}
			if (top <= bottom)
			{
				printf("0\n");
				break;
			}
		}
	}
	
	return 0;
}