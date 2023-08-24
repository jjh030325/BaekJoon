#include <iostream>
using namespace std;

int n;
int arr[1001];
int dp[1001];
int dap = 0;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (arr[j] > arr[i] && dp[j] >= dp[i])
			{
				dp[i] = dp[j] + 1;
			}
		}
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