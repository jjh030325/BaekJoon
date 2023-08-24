#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[100001];
int before;
int after;
int dap = 2000000001;


int main()
{
	cin >> n >> m;
	before = 0;
	after = 1;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (m == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	sort(arr, arr + n);

	while (before <= after && after <= n)
	{
		if (arr[after]-arr[before] == m) {
			dap = m;
			break;
		}
		else if (arr[after] - arr[before] < m) {
			after++;
		}
		else if (arr[after] - arr[before] > m) {
			dap = min(dap, arr[after] - arr[before]);
			before++;
		}
	}
	if (dap == 2000000001)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << dap << endl;
	}
	return 0;
}