#include <iostream>
#include <algorithm>
using namespace std;

int n, dap = 0;
int glass[10001] = { 0, };
int dp[10001] = { 0, };

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> glass[i];
	}
	dp[1] = glass[1];
	dp[2] = glass[2] + glass[1];
	dp[3] = max(glass[1] + glass[3], glass[2] + glass[3]);
	dp[3] = max(dp[3], dp[2]);
	for (int i = 4; i <= n; i++)
	{
		dp[i] = max(dp[i-2]+glass[i], dp[i-3]+glass[i-1]+glass[i]);
		dp[i] = max(dp[i-1], dp[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		if (dap < dp[i])
		{
			dap = dp[i];
		}
	}
	cout << dap << endl;
	return 0;
}