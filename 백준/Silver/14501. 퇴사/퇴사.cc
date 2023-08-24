#include <iostream>
#include <algorithm>
using namespace std;

int n, t[16], p[16], dp[16];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> p[i];
	}
	for (int i = n; i > 0; i--)
	{
		if (i + t[i] > n + 1)
		{
			dp[i] = dp[i + 1];
		}
		else
		{
			dp[i] = max(p[i] + dp[i + t[i]], dp[i + 1]);
		}
	}
	cout << dp[1] << endl;
	return 0;
}