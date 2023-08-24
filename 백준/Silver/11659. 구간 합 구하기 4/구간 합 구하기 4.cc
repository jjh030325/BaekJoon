#include <iostream>
using namespace std;

int n, m;
int a, b;
int arr[100001];
int hap[100001];
int dap = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	hap[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		hap[i] = hap[i - 1] + arr[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		cout << hap[b] - hap[a - 1] << "\n";
	}

	return 0;
}