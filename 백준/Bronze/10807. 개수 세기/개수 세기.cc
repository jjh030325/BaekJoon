#include <iostream>
#include <algorithm>
using namespace std;

int main()
{		
	int n, a, b;
	int arr[101] = { 0, };
	int minusarr[101] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a >= 0)
		{
			arr[a]++;
		}
		else
		{
			a = a - a - a;
			minusarr[a]++;
		}
	}
	cin >> b;
	if (b >= 0)
	{
		cout << arr[b] << endl;
	}
	else
	{
		b = b - b - b;
		cout << minusarr[b] << endl;
	}
	return 0;
}