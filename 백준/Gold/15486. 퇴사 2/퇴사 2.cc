#include <iostream>
#include <algorithm>
using namespace std;

int n;
int t[1500001], p[1500001];     //걸리는시간, 이익
int dp[1500001];

int main()
{	
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >> p[i];
	}
	for (int i = n; i > 0; i--)
	{	
		if (i + t[i] > n + 1)       //퇴사날보다 더 길게 상담이 이어지는 경우
		{
			dp[i] = dp[i + 1];
		}
		else                    //퇴사 전 상담이 종료되는 경우
		{
			dp[i] = max(p[i] + dp[i + t[i]], dp[i + 1]);   //이번 상담을 하는 경우, 안하는 경우 중 최대값 적용
		}
	}
	cout << dp[1] << endl;      //탑다운 방식으로 계산했기에 첫 값인 1번 dp 출력
	return 0;
}