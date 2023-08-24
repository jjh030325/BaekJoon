#include <iostream>
using namespace std;

int a[1001][1001] = { 0, };          //정점번호 연결된 간선
int check[1001] = { 0, };            //왔던 위치 체크
int n, m;
int u, v;
int c = 0;

void dps(int start)
{
	if (check[start] == 1)
	{
		return;
	}
	check[start] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (start != i && a[start][i] == 1)
		{
			dps(i);
		}
	}
}
int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;               //입력받은 두 점 연결
		a[u][v] = 1;
		a[v][u] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (check[i] != 1)           //안왔던 위치면
		{
			dps(i);
			c++;
		}
	}
	cout << c << endl;
	return 0;
}