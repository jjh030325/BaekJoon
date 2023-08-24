#include <iostream>
using namespace std;

int n, m;
int arr[9];
int check[9];

void dps(int a)
{
	if (a == m + 1)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == 0)
		{
			check[i] = 1;
			arr[a] = i;
			dps(a + 1);
			check[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	dps(1);
	return 0;
}