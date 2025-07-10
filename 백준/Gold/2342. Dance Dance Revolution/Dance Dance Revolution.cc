#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002]; // 입력받는 수열
int n = 0;
int dp[100001][5][5]; //dp[횟수][왼발위치][오른발위치]

int cost(int now, int moveIdx)
{
	if (now == moveIdx)
	{
		return 1;
		// 1인 경우 = 왼발 그대로
	}
	else if (now == 0)
	{
		return 2;
		// 2인 경우 = 왼발 0에서 이동
	}
	else if (now == 1 && moveIdx == 3 || now == 2 && moveIdx == 4 || now == 3 && moveIdx == 1 || now == 4 && moveIdx == 2)
	{
		return 4;
		// 4인 경우 = 정 반대로 가는 경우
	}
	else
	{
		return 3;
		// 3인 경우 = 근처위치로 가는 경우
	}
}

int solve(int now, int left, int right)
{
	if (now == n)
	{
		return 0;
	}
	else if (dp[now][left][right] != -1)
	{
		return dp[now][left][right];
	}
	else
	{
		int leftMove = solve(now+1, arr[now], right) + cost(left, arr[now]);
		int rightMove = solve(now+1, left, arr[now]) + cost(right, arr[now]);
		return dp[now][left][right] = min(leftMove, rightMove);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	// 입력
	for (int i = 0; i < 100002; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			break;
		}
		n++;
	}
	// dp 초기화
	for (int i = 0; i <= n; i++)
		for (int l = 0; l < 5; l++)
			for (int r = 0; r < 5; r++)
				dp[i][l][r] = -1;
	cout << solve(0, 0, 0) << endl;
	
	return 0;
}

/*
ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
같은 지점 = 1
중앙에서 이동(중앙에서 다른곳) = 2
다른 지점(위에서 왼쪽이나 오른쪽) = 3
정 반대편(위에서 아래, 왼쪽에서 오른쪽) = 4
여러번 거쳐서 이동하는 경우는 효율이 안나오게 됨. 단순 반복 하면 될듯.
*1*
203
*4*
*/