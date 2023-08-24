#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int dp[1025][1025] = { 0, };
int x, xx, y, yy;
int dap = 0;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	if (n == 1)
	{
		cin >> dp[1][1];
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> dp[i][j];
				dp[i][j] = dp[i][j - 1] + dp[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> y >> x >> yy >> xx;
		for (int j = y; j <= yy; j++)
		{
			dap += dp[j][xx] - dp[j][x - 1];
		}
		cout << dap << "\n";
		dap = 0;
	}
	return 0;
}