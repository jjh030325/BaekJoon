#include <iostream>
using namespace std;

int main()
{
	int n, k, a[11], count = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = n; i > 0; i--)
	{
		while (a[i] <= k)
		{
			k -= a[i];
			count++;
		}
	}
	cout << count << endl;

	return 0;
}