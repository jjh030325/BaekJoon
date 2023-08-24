#include <iostream>
using namespace std;

int main()
{
	int t, n, m, coin;
	int arr[10001] = { 0, };
	arr[0] = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 1; j <= n; j++)
		{
			cin >> coin;
			for (int c = 1; c <= 10000; c++)
			{
				if (c >= coin)
				{
					arr[c] = arr[c] + arr[c - coin];
				}
			}
		}
		cin >> m;
		cout << arr[m] << endl;
		arr[0] = 1;
		for (int c = 1; c <= 10000; c++)
		{
			arr[c] = 0;
		}
	}
	return 0;
}