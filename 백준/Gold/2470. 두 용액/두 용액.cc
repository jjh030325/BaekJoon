#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100001];
int before = 0;
int after = 1;
int dap = 2000000001;
int save[2];

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	after = n - 1;
	sort(arr, arr + n);
	while (1)
	{
		if (abs(arr[before] + arr[after]) <= dap)
		{
			dap = abs(arr[before] + arr[after]);
			save[0] = arr[before];
			save[1] = arr[after];
		}
		if (arr[after] + arr[before] < 0)
		{
			before++;
		}
		else
		{
			after--;
		}
		if (before >= after)
		{
			break;
		}
	}

	cout << save[0] << " " << save[1] << endl;

	return 0;
}