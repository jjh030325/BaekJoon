#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[100001], dp[100001], dap = 1;

int main()
{
	cin >> n;
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (arr[i] >= dp[i - 1] + 1)
		{
			dp[i] = dp[i - 1] + 1;
		}
		else
		{
			dp[i] = arr[i];
		}
		if (dap < dp[i])
		{
			dap = dp[i];
		}
	}
	cout << dap << endl;
}