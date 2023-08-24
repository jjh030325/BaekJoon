#include <iostream>
using namespace std;

int dp[1000001];
int n;

int main()
{
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i < 1000001; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}
	cin >> n;
	cout << dp[n] << endl;
	return 0;
}