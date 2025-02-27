#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	double arr[1001], m = 0, ans = 0;

	cin >> n;

	// 최고점수 구하기
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > m)
		{
			m = arr[i];
		}
	}

	// 점수 변환하며 더하기
	for (int i = 0; i < n; i++)
	{
		ans += arr[i] * 100 / m;
	}
	ans /= n;
	cout << ans << endl;

	return 0;
}