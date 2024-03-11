#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int arr[100000], ingarr[100000];
	int n, m, a, b, k;
	int tmp;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		ingarr[i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> k;
		ingarr[a - 1] += k;
		ingarr[b] += -k;
	}

	tmp = 0;
	for (int i = 0; i <= n; i++)
	{
		tmp += ingarr[i];
		ingarr[i] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] + ingarr[i] << " ";
	}

	return 0;
}