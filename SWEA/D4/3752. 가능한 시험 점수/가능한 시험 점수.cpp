#include <iostream>
#include <vector>
using namespace std;

int num = 0;
void solution(int n)
{
	num++;
	int ans = 1;
	vector<int> arr(n);
	bool dp[10100];
	vector<int> ansCase;
	// 입력
	for (int i = 0; i < 10100; i++)
	{
		dp[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	dp[arr[0]] = true;
	ansCase.push_back(arr[0]);
	ans++;
	// 가능한 경우의 수 체크
	for (int i = 1; i < n; i++)
	{
		int count = ansCase.size();
		for (int j = 0; j < count; j++)
		{
			if (!dp[ansCase[j] + arr[i]])
			{
				dp[ansCase[j] + arr[i]] = true;
				ansCase.push_back(ansCase[j] + arr[i]);
				ans++;
			}
		}
		if (!dp[arr[i]])
		{
			dp[arr[i]] = true;
			ansCase.push_back(arr[i]);
			ans++;
		}
	}

	cout << "#" << num << " " << ans << endl;
}

int main(int argc, char** argv)
{
	int test_case, n;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		solution(n);
	}
	return 0;
}