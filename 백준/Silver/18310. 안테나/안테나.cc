#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[200001];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << arr[(n - 1) / 2] << endl;
	return 0;
}