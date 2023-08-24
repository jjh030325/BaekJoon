#include <iostream>
#include <algorithm>
using namespace std;

int arr[5000001];
int n, k;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);

	cout << arr[k - 1] << "\n";

	return 0;
}