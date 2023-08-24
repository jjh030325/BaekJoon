#include <iostream>
using namespace std;

int n, m;
int arr[9];

void dps(int a, int len)
{
	arr[len] = a;
	if (len == m)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	len++;
	for (int i = a; i <= n; i++)
	{
		dps(i, len);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		dps(i, 1);
	}
	return 0;
}