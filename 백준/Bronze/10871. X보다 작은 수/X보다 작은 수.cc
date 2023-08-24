#include <iostream>
using namespace std;

int main()
{
	int n, x, a, arr[10001], num = 0;

	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < x)
		{
			arr[num] = a;
			num++;
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}