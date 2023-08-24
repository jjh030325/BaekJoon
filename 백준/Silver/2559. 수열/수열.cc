#include <iostream>
#include <algorithm>
using namespace std;

int n;
int k;
int m = 0;
int arr[100001] = { 0, };

int main()
{
	cin >> n >> k;
	cin >> arr[0];
	m += arr[0];
	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
		if (i < k)
		{
			m += arr[i];
		}
		arr[i] += arr[i - 1];
	}
	for (int i = 0; i < n - k; i++)
	{
		if (arr[i + k] - arr[i] > m)
		{
			m = arr[i + k] - arr[i];
		}
	}
	cout << m << endl;
	return 0;
}