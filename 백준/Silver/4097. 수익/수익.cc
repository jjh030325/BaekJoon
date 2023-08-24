#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
int dp[250001];
int dap = -11111;
int a;

int main()
{
	while (1)
	{
		cin >> n;
		if (n == 0)
		{
			return 0;
		}
		cin >> dp[0];
		dap = dp[0];
		for (int i = 1; i < n; i++)
		{
			cin >> dp[i];
			dp[i] = max(0 + dp[i], dp[i - 1] + dp[i]);
			dap = max(dp[i], dap);
		}
		cout << dap << endl;
		dap = 0;
	}
	return 0;
}