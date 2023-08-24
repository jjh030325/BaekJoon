#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9], srtarr[9], srt = 1, daparr[9];

void dps(int nn)
{
	if (nn == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << daparr[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < srt; i++)
	{
		if (daparr[nn-1] <= srtarr[i])
		{
			daparr[nn] = srtarr[i];
			dps(nn + 1);
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)       //입력
	{
		cin >> arr[i];
		srtarr[i] = 0;
		daparr[i] = 0;
	}
	sort(arr, arr + n);               //비내림차순 정렬
	srtarr[0] = arr[0];
	for (int i = 1; i < n; i++)       //겹치는 것 제거
	{
		if (srtarr[srt - 1] != arr[i])
		{
			srtarr[srt] = arr[i];
			srt++;
		}
	}
	dps(0);
	return 0;
}