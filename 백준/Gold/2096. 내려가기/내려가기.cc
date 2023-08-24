#include <iostream>
#include <algorithm>
using namespace std;

int n;
char arr[100001][3] = { 0, };
int dp[100001][3] = { 0, };
int imsi;
int high;
int low;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	dp[n][0] = arr[n][0] - '0';
	dp[n][1] = arr[n][1] - '0';
	dp[n][2] = arr[n][2] - '0';
	for (int i = n - 1; i >= 1; i--)
	{
		dp[i][0] = max(dp[i + 1][0], dp[i + 1][1]);
		dp[i][2] = max(dp[i + 1][1], dp[i + 1][2]);
		dp[i][1] = max(dp[i][0], dp[i][2]);
		dp[i][0] += arr[i][0] - '0';
		dp[i][2] += arr[i][2] - '0';
		dp[i][1] += arr[i][1] - '0';
	}
	high = max(dp[1][0], dp[1][1]);
	high = max(high, dp[1][2]);
	for (int i = n - 1; i >= 1; i--)
	{
		dp[i][0] = min(dp[i + 1][0], dp[i + 1][1]);
		dp[i][2] = min(dp[i + 1][1], dp[i + 1][2]);
		dp[i][1] = min(dp[i][0], dp[i][2]);
		dp[i][0] += arr[i][0] - '0';
		dp[i][2] += arr[i][2] - '0';
		dp[i][1] += arr[i][1] - '0';
	}
	low = min(dp[1][0], dp[1][1]);
	low = min(low, dp[1][2]);
	cout << high << " " << low << endl;
	return 0;
}