#include <iostream>
#include <algorithm>
using namespace std;

int n, x, arr[250001];
int dap = 0;
int su = 1;
int main()
{
	cin >> n >> x;
	arr[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	for (int i = x; i <= n; i++)
	{
		if (dap == arr[i] - arr[i - x])
		{
			su++;
		}
		else if(dap < arr[i] - arr[i - x])
		{
			dap = max(dap, arr[i] - arr[i - x]);
			su = 1;
		}
	}
	if (dap == 0)
	{
		cout << "SAD" << endl;
		return 0;
	}
	cout << dap << endl;
	cout << su << endl;
	return 0;
}