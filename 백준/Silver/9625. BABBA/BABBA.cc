#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[46][2];                  //0은 A, 1은 B
int main()
{
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	for (int i = 2; i <= 45; i++)
	{
		dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
	}
	cin >> n;
	cout << dp[n][0] << " " << dp[n][1] << endl;
	return 0;
}