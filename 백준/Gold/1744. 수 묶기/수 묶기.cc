#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, minus = 0, plus = 0, zero = 0, one = 0, ans = 0;
	int arr[51];
	bool check[51] = { false, };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			zero++;
		}
		else if (arr[i] == 1)
		{
			one++;
		}
		else if (arr[i] > 0)
		{
			plus++;
		}
		else
		{
			minus++;
		}
	}
	sort(arr, arr + n);
	for (int i = 1; i < minus; i+=2)
	{
		check[i] = true;
		check[i - 1] = true;
		ans += arr[i] * arr[i - 1];
	}
	for (int i = 1; i < plus; i+=2)
	{
		check[n - i] = true;
		check[n - i - 1] = true;
		ans += arr[n - i] * arr[n - i - 1];
	}
	if (zero != 0 && minus % 2 == 1)
	{
		arr[minus - 1] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (check[i] == false)
		{
			ans += arr[i];
		}
	}
	cout << ans << endl;
	return 0;
}