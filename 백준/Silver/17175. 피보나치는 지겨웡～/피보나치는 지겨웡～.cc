#include <iostream>
using namespace std;

int main()
{
	int dp[51], n;
	dp[0] = 1;
	dp[1] = 1;
	cin >> n;
	for (int i = 2; i <= 50; i++)
	{
		dp[i] = 1 + (dp[i - 1] + dp[i - 2]) % 1000000007;
	}
	cout << dp[n] << endl;
	return 0;
}