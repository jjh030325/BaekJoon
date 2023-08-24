#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9], daparr[9], checkarr[9];

void dps(int nn)
{
	if (nn == m)                      //출력
	{
		for (int i = 0; i < m; i++)
		{
			cout << daparr[i] << " ";
		}
		cout << endl;
		return;
	}
	int check = 0;                    //전역으로 하면 안됨. 지역으로 선언되어야 재귀마다 정확한 체크 가능
	for (int i = 0; i < n; i++)
	{
		if (checkarr[i]==0 && check!=arr[i])
		{
			daparr[nn] = arr[i];
			check = daparr[nn];
			checkarr[i] = 1;
			dps(nn + 1);
			checkarr[i] = 0;
		}
	}
	return;
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)       //입력
	{
		cin >> arr[i];
		checkarr[i] = 0;
		daparr[i] = -1;
	}
	sort(arr, arr + n);               //정렬
	dps(0);
	return 0;
}