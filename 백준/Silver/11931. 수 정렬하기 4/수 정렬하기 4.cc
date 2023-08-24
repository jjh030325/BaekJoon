#include <iostream>
using namespace std;

int n, a;
int arr1[1000001] = { 0, };
int arr2[1000001] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
		{
			a = a - a - a;
			arr2[a] = 1;     //음수
		}
		else
		{
			arr1[a] = 1;     //양수
		}
	}
	for (int i = 1000000; i >= 0; i--)
	{
		if (arr1[i] == 1)
		{
			cout << i << "\n";
		}
	}
	for (int i = 1; i <= 1000000; i++)
	{
		if (arr2[i] == 1)
		{
			cout << "-" << i << "\n";
		}
	}
	return 0;
}