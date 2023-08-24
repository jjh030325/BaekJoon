#include <iostream>
#include <algorithm>
using namespace std;

int n, q;
int a, b;
int arr[300001];

int main()
{		
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> q;
	arr[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n + 1);
	for (int i = 1; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i];
	}
	for (int i = 0; i < q; i++)
	{
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << "\n";
	}
	return 0;
}