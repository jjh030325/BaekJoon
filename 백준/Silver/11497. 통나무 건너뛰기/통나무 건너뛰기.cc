#include <iostream>
#include <algorithm>
using namespace std;

int t;
int n;
int namu[10001];
int sortnamu[10001];
int middle;
int check;
int chamax;

bool mirrorsort(int a, int b)
{
	return a > b;
}

int main()
{
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		chamax = 0;
		check = 0;
		cin >> n;
		if (n % 2 == 0)                      //중간값 체크
		{
			middle = n / 2;
		}
		else
		{
			middle = n / 2 + 1;
		}
		middle--;
		for (int i = 0; i < n; i++)
		{
			cin >> namu[i];
		}
		sort(namu, namu + n, mirrorsort);      //내림차순 정렬

		sortnamu[middle] = namu[check];
		check++;
		for (int i = 1; i <= n / 2 - 1; i++)   //중간을 기준으로 차례대로 정렬
		{
			sortnamu[middle - i] = namu[check];
			check++;
			sortnamu[middle + i] = namu[check];
			check++;
		}
		if (n % 2 == 0)                        //짝수와 홀수의 경우 마지막 부분 추가로 체크
		{
			sortnamu[n - 1] = namu[check];
		}
		else
		{
			sortnamu[0] = namu[check];
			check++;
			sortnamu[n - 1] = namu[check];
			check++;
		}
		chamax = abs(sortnamu[0] - sortnamu[n - 1]);
		for (int i = 1; i < n; i++)
		{
			if (abs(sortnamu[i] - sortnamu[i - 1]) > chamax)
			{
				chamax = abs(sortnamu[i] - sortnamu[i - 1]);
			}
		}
		cout << chamax << endl;
	}
	return 0;
}