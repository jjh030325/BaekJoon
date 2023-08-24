#include <iostream>
using namespace std;

long long int n;
long long int dp[1500001];
int main()
{
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i < 1500001; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
	}
	cin >> n;
	n = n % 1500000;
	cout << dp[n] << endl;
	return 0;
}