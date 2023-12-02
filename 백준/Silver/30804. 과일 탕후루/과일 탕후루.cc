#include <iostream>
#include <algorithm>
using namespace std;

int a[200001];
int dp[200001];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	cin >> a[0];
	dp[0] = 1;

	int first = a[0], second = 0, ans = dp[0];
	
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];

		if (first == a[i])
		{
			dp[i] = dp[i - 1] + 1;
		}
		else if (second == 0)
		{
			second = a[i];
			dp[i] = dp[i - 1] + 1;
		}
		else if (second == a[i])
		{
			dp[i] = dp[i - 1] + 1;
		}
		else
		{
			dp[i] = 1;
			second = a[i - 1];
			for (int j = 0; j < dp[i - 1]; j++)
			{
				if (a[i - j - 1] == second)
				{
					dp[i]++;
				}
				else
				{
					break;
				}
			}
			first = second;
			second = a[i];
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;

	return 0;
}
