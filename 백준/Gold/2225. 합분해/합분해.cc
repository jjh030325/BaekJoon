#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int dp[201][201], n, k;

	cin >> n >> k;
	dp[0][0] = 1;
	for (int i = 1; i <= 200; i++)
	{
		dp[1][i] = 1;
	}
	for (int i = 1; i <= 200; i++)
	{
		dp[i][0] = 1;
	}
	for (int i = 2; i <= 200; i++)
	{
		for (int j = 1; j <= 200; j++)
		{
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000;
		}
	}
	cout << dp[k][n] << endl;

	return 0;
}