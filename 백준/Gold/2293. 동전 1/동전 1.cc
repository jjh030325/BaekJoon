#include <iostream>
using namespace std;

int dp[10001] = { 0, };      //가짓수 체크
int n, k;
int a;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;

	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		for (int i = 1; i <= 10000; i++)
		{
			if (i >= a)
			{
				dp[i] = dp[i] + dp[i - a];
			}
		}
	}
	cout << dp[k] << endl;  //k를 만들 수 있는 경우의 수
	return 0;
}
