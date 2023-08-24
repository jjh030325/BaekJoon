#include <iostream>
using namespace std;

long long int n;
long long int dp[21];

int main()
{
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 20; i++)
	{
		dp[i] = dp[i - 1] * i;
	}
	cin >> n;
	if (n == 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 20; i >= 0; i--)
	{
		if (n >= dp[i])
		{
			n -= dp[i];
		}
	}
	if (n == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}