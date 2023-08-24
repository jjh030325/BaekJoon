#include <iostream>
using namespace std;

int n;
int dp[11];

int main()
{
	cin >> n;
	for (int i = 2; i <= 10; i++)
	{
		dp[i] = dp[i - 1] + i - 1;
	}
	cout << dp[n] << endl;
	return 0;
}