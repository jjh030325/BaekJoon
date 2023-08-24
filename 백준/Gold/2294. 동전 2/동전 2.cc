#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = { 0, };
int n, k;
int a;
int dap = 0;
int imsi = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	for (int i = 1; i <= 10000; i++)
	{
		dp[i] = 10001;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		for (int j = a; j <= 10000; j++)
		{
			dp[j] = min(dp[j], dp[j - a] + 1);
		}
	}
	if (dp[k] == 10001)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << dp[k] << endl;
	}
	return 0;
}