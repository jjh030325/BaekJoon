#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[1001][1001] = { 0, };
int n, m;
int dap = 0;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string in;
		cin >> in;
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = in[j] - '0';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > 0 && i - 1 >= 0 && j - 1 >= 0)
			{
				int a = min(arr[i - 1][j - 1], arr[i - 1][j]);
				a = min(a, arr[i][j - 1]);
				arr[i][j] = a;
				arr[i][j]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > dap)
			{
				dap = arr[i][j];
			}
		}
	}
	cout << dap * dap << endl;
	return 0;
}