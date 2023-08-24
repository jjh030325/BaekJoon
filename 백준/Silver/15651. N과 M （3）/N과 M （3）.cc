#include <iostream>
using namespace std;

int n, m;
int arr[8];

void dps(int num)
{
	if (num == m + 1)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		arr[num] = i;
		dps(num + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	dps(1);
	return 0;
}