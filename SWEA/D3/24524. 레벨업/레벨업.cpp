#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solution()
{
	int n, all = 0, longest = 0;
	cin >> n;
	vector<int> arr(n); // 각 지점 위치 저장
	vector<int> dp(n);  // 이동거리
	vector<int> dp2(n); // 하나 건너뛰고 가는 거리

	cin >> arr[0];
	cin >> arr[1];
	dp[1] = arr[1] - arr[0];
	if (dp[1] < 0)
	{
		dp[1] = -dp[1];
	}
	all += dp[1];

	// dp 테이블 채우기
	for (int i = 2; i < n; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i] - arr[i - 1];
		if (dp[i] < 0)
		{
			dp[i] = -dp[i];
		}
		all += dp[i];
		dp2[i] = arr[i] - arr[i - 2];
		if (dp2[i] < 0)
		{
			dp2[i] = -dp2[i];
		}
		if (longest < dp[i] + dp[i-1] - dp2[i])
		{
			longest = dp[i] + dp[i-1] - dp2[i];
		}
	}
	cout << all - longest << endl;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		solution();
	}
	return 0;
}