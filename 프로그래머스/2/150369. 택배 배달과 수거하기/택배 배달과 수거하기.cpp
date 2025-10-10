#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
	int a = 0; // 배달 택배
	int b = 0; // 수거 택배

	for (int i = n - 1; i >= 0; i--)
	{
		a += deliveries[i];
		b += pickups[i];

		// 해당 위치에서 남은 배달/수거 물량이 있으면 왕복해야 함
		while (a > 0 || b > 0) {
			a -= cap;
			b -= cap;
			answer += (long long)(i + 1) * 2;
		}
	}
    return answer;
}