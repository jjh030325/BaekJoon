#include <iostream>
using namespace std;

int check[1001] = { 0, };
int mirrorcheck[1001];
int n;
int a;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
		{
			a = a - a - a;
			mirrorcheck[a]++;
		}
		else
		{
			check[a]++;
		}
	}
	for (int i = 1000; i > 0; i--)
	{
		if (mirrorcheck[i] > 0)
		{
			cout << "-" << i << " ";
		}
	}
	for (int i = 0; i <= 1000; i++)
	{
		if (check[i] > 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}