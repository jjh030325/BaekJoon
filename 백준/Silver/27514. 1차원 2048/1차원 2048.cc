#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long int dp[64][2];
long long int dap = 0;
long long int inarr;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	dp[0][0] = 0;
	dp[1][0] = 1;
	for (int i = 2; i <= 63; i++)
	{
		dp[i][0] = dp[i - 1][0] * 2;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> inarr;
		for (int j = 0; j <= 63; j++)
		{
			if (inarr == dp[j][0])
			{
				dp[j][1]++;
				break;
			}
		}
	}
	for (int i = 1; i <= 63; i++)
	{
		if (dp[i][1] >= 2)
		{
			dp[i + 1][1] = dp[i + 1][1] + (dp[i][1] / 2);
		}
	}
	for (int i = 63; i >= 0; i--)
	{
		if (dp[i][1] > 0)
		{
			cout << dp[i][0] << "\n";
			return 0;
		}
	}
	return 0;
}