#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int v, e, k;  // 정점의 개수 V, 간선의 개수 E, 시작정점번호 K
	int uu, vv, ww;  // 입력 값

	cin >> v >> e;
	cin >> k;

	vector<vector<pair<int, int>>> graph(v + 1); // 정점 개수만큼 벡터 생성
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> arr(v+1, INT_MAX); // 각 정점마다 도달할 수 있는 거리 체크 배열

	for (int i = 0; i < e; i++)
	{
		cin >> uu >> vv >> ww;
		graph[uu].push_back(make_pair(vv, ww)); // uu에서 갈 수 있는 경로 추가.
	}

	// 스타팅 포인트 세팅
	pq.push(make_pair(0, k));
	arr[k] = 0;

	while (!pq.empty()) {
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (arr[cur] < cost) continue; // 이미 더 짧은 거리 발견한 경우 무시

		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i].first;
			int nCost = graph[cur][i].second;

			if (arr[next] > cost + nCost) {
				arr[next] = cost + nCost;
				pq.push(make_pair(arr[next], next));
			}
		}
	}

	// 결과 출력
	for (int i = 1; i <= v; i++) {
		if (arr[i] == INT_MAX)
		{
			cout << "INF\n";
		}
		else
		{
			cout << arr[i] << "\n";
		}
	}

	return 0;
}
